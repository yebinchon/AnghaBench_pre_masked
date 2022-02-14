
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resp_desc {int numDesc; scalar_t__ cmd; scalar_t__ parm1; int parm3; int parm2; int flags; scalar_t__ seqNo; } ;
typedef struct resp_desc u8 ;
typedef scalar_t__ u32 ;
struct typhoon_indexes {int respCleared; int respReady; } ;
struct TYPE_2__ {struct resp_desc* ringBase; } ;
struct typhoon {int dev; TYPE_1__ respRing; struct typhoon_indexes* indexes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct resp_desc*,struct resp_desc*,int) ;
 int FUNC_4 (int ,char*,int ,int,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct typhoon*) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ,struct resp_desc*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct typhoon *VAR_4, int VAR_5,
    struct resp_desc *VAR_6)
{
 struct typhoon_indexes *VAR_7 = VAR_4->indexes;
 struct resp_desc *VAR_8;
 u8 *VAR_9 = VAR_4->respRing.ringBase;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_2(VAR_7->respCleared);
 VAR_14 = FUNC_2(VAR_7->respReady);
 while(VAR_13 != VAR_14) {
  VAR_8 = (struct resp_desc *)(VAR_9 + VAR_13);
  VAR_10 = VAR_8->numDesc + 1;
  if(VAR_6 && VAR_8->seqNo) {
   if(VAR_10 > VAR_5) {
    VAR_6->flags = VAR_3;
    goto cleanup;
   }

   VAR_12 = 0;
   VAR_11 = VAR_10 * sizeof(*VAR_8);
   if(FUNC_8(VAR_13 + VAR_11 > VAR_0)) {
    VAR_12 = VAR_13 + VAR_11 - VAR_0;
    VAR_11 = VAR_0 - VAR_13;
   }

   FUNC_3(VAR_6, VAR_8, VAR_11);
   if(FUNC_8(VAR_12)) {
    VAR_6 += VAR_11 / sizeof(*VAR_8);
    FUNC_3(VAR_6, VAR_9, VAR_12);
   }

   VAR_6 = ((void*)0);
  } else if(VAR_8->cmd == VAR_2) {
   FUNC_7(VAR_4->dev, VAR_8);
  } else if(VAR_8->cmd == VAR_1) {
   FUNC_5(VAR_4);
  } else {
   FUNC_4(VAR_4->dev,
       "dumping unexpected response 0x%04x:%d:0x%02x:0x%04x:%08x:%08x\n",
       FUNC_1(VAR_8->cmd),
       VAR_8->numDesc, VAR_8->flags,
       FUNC_1(VAR_8->parm1),
       FUNC_2(VAR_8->parm2),
       FUNC_2(VAR_8->parm3));
  }

cleanup:
  FUNC_6(&VAR_13, VAR_10);
 }

 VAR_7->respCleared = FUNC_0(VAR_13);
 FUNC_9();
 return VAR_6 == ((void*)0);
}
