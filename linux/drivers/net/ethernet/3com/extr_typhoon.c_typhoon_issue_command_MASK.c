
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon_indexes {scalar_t__ respCleared; scalar_t__ respReady; } ;
struct basic_ring {scalar_t__ lastWrite; scalar_t__ ringBase; } ;
struct typhoon {int awaiting_resp; int command_lock; scalar_t__ ioaddr; int dev; struct basic_ring cmdRing; struct typhoon_indexes* indexes; } ;
struct resp_desc {int flags; } ;
struct cmd_desc {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,struct cmd_desc*,int) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (struct typhoon*) ;
 int FUNC_8 (struct typhoon*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct typhoon*,int,struct resp_desc*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;

__attribute__((used)) static int
FUNC_14(struct typhoon *VAR_10, int VAR_11, struct cmd_desc *VAR_12,
        int VAR_13, struct resp_desc *VAR_14)
{
 struct typhoon_indexes *VAR_15 = VAR_10->indexes;
 struct basic_ring *VAR_16 = &VAR_10->cmdRing;
 struct resp_desc VAR_17;
 int VAR_18, VAR_19 = 0;
 int VAR_20;
 int VAR_21, VAR_22;
 int VAR_23, VAR_24;

 FUNC_4(&VAR_10->command_lock);

 VAR_21 = FUNC_7(VAR_10);
 VAR_22 = FUNC_8(VAR_10);

 if(VAR_21 < VAR_11 || VAR_22 < VAR_13) {
  FUNC_2(VAR_10->dev, "no descs for cmd, had (needed) %d (%d) cmd, %d (%d) resp\n",
      VAR_21, VAR_11, VAR_22, VAR_13);
  VAR_19 = -VAR_2;
  goto out;
 }

 if(VAR_12->flags & VAR_4) {



  VAR_10->awaiting_resp = 1;
  if(VAR_14 == ((void*)0)) {
   VAR_14 = &VAR_17;
   VAR_13 = 1;
  }
 }

 VAR_24 = 0;
 VAR_23 = VAR_11 * sizeof(*VAR_12);
 if(FUNC_12(VAR_16->lastWrite + VAR_23 > VAR_0)) {
  VAR_24 = VAR_16->lastWrite + VAR_23 - VAR_0;
  VAR_23 = VAR_0 - VAR_16->lastWrite;
 }

 FUNC_1(VAR_16->ringBase + VAR_16->lastWrite, VAR_12, VAR_23);
 if(FUNC_12(VAR_24)) {
  struct cmd_desc *VAR_25 = VAR_12;
  VAR_25 += VAR_23 / sizeof(*VAR_12);
  FUNC_1(VAR_16->ringBase, VAR_25, VAR_24);
 }

 FUNC_6(&VAR_16->lastWrite, VAR_11);



 FUNC_13();
 FUNC_0(VAR_16->lastWrite, VAR_10->ioaddr + VAR_5);
 FUNC_9(VAR_10->ioaddr);

 if((VAR_12->flags & VAR_4) == 0)
  goto out;
 VAR_20 = 0;
 for(VAR_18 = 0; VAR_18 < VAR_9 && !VAR_20; VAR_18++) {
  if(VAR_15->respCleared != VAR_15->respReady)
   VAR_20 = FUNC_10(VAR_10, VAR_13,
        VAR_14);
  FUNC_11(VAR_8);
 }

 if(!VAR_20) {
  VAR_19 = -VAR_3;
  goto out;
 }




 if(VAR_14->flags & VAR_7)
  VAR_19 = -VAR_1;

out:
 if(VAR_10->awaiting_resp) {
  VAR_10->awaiting_resp = 0;
  FUNC_3();
  if(VAR_15->respCleared != VAR_15->respReady)
   FUNC_0(1, VAR_10->ioaddr + VAR_6);
 }

 FUNC_5(&VAR_10->command_lock);
 return VAR_19;
}
