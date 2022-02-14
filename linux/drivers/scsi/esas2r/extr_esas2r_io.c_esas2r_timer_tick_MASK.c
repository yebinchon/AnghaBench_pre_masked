
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct esas2r_adapter {scalar_t__ last_tick_time; scalar_t__ chip_uptime; scalar_t__ heartbeat_time; int disable_cnt; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (struct esas2r_adapter*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct esas2r_adapter*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

void FUNC_13(struct esas2r_adapter *VAR_9)
{
 u32 VAR_10 = FUNC_10(VAR_8);
 u32 VAR_11 = VAR_10 - VAR_9->last_tick_time;

 VAR_9->last_tick_time = VAR_10;


 if (VAR_9->chip_uptime &&
     !FUNC_12(VAR_2, &VAR_9->flags) &&
     !FUNC_12(VAR_3, &VAR_9->flags)) {
  if (VAR_11 >= VAR_9->chip_uptime)
   VAR_9->chip_uptime = 0;
  else
   VAR_9->chip_uptime -= VAR_11;
 }

 if (FUNC_12(VAR_2, &VAR_9->flags)) {
  if (!FUNC_12(VAR_1, &VAR_9->flags) &&
      !FUNC_12(VAR_0, &VAR_9->flags))
   FUNC_6(VAR_9, VAR_10);
 } else {
  if (FUNC_12(VAR_3, &VAR_9->flags))
   FUNC_3(VAR_9);
  if (FUNC_12(VAR_5, &VAR_9->flags)) {
   if (FUNC_12(VAR_4, &VAR_9->flags)) {
    if ((VAR_10 - VAR_9->heartbeat_time) >=
        VAR_6) {
     FUNC_1(VAR_4, &VAR_9->flags);
     FUNC_7("heartbeat failed");
     FUNC_9(VAR_7,
         "heartbeat failed");
     FUNC_2();
     FUNC_8(VAR_9);
    }
   } else {
    FUNC_11(VAR_4, &VAR_9->flags);
    VAR_9->heartbeat_time = VAR_10;
    FUNC_5(VAR_9);
   }
  }
 }

 if (FUNC_0(&VAR_9->disable_cnt) == 0)
  FUNC_4(VAR_9);
}
