
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdbuf_t {int len; int buf; } ;
struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int cmdlock; struct cmdbuf_t* cmdbuf; int bcs; TYPE_1__ hw; } ;
struct bas_cardstate {int basstate; scalar_t__ retry_cmd_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cardstate*,int ,int ) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cardstate *VAR_7)
{
 struct cmdbuf_t *VAR_8;
 struct bas_cardstate *VAR_9 = VAR_7->hw.bas;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = 0;


 if (VAR_9->basstate & VAR_3) {
  FUNC_2(VAR_4, "suspending");
  return -VAR_5;
 }


 if (!(VAR_9->basstate & VAR_1)) {
  FUNC_2(VAR_4, "AT channel not open");
  VAR_11 = FUNC_3(VAR_7->bcs, VAR_6, 0, VAR_0);
  if (VAR_11 < 0) {

   FUNC_4(&VAR_7->cmdlock, VAR_10);
   while (VAR_7->cmdbuf != ((void*)0))
    FUNC_1(VAR_7);
   FUNC_5(&VAR_7->cmdlock, VAR_10);
  }
  return VAR_11;
 }


 FUNC_4(&VAR_7->cmdlock, VAR_10);

 while ((VAR_8 = VAR_7->cmdbuf) != ((void*)0) && (VAR_9->basstate & VAR_2)) {
  VAR_9->retry_cmd_out = 0;
  VAR_11 = FUNC_0(VAR_7, VAR_8->buf, VAR_8->len);
  if (FUNC_6(VAR_11)) {
   VAR_12 = VAR_11;
   FUNC_1(VAR_7);
  }
 }

 FUNC_5(&VAR_7->cmdlock, VAR_10);
 return VAR_12;
}
