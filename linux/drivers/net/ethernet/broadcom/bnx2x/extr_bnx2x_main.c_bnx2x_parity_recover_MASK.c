
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* unrecoverable_error; void* recoverable_error; } ;
struct bnx2x {int recovery_state; int is_leader; TYPE_1__ eth_stats; int dev; int sp_rtnl_task; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnx2x*,int*,int) ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int ,int) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,int) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*,int ) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*) ;
 int FUNC_14 (struct bnx2x*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 () ;

__attribute__((used)) static void FUNC_19(struct bnx2x *VAR_7)
{
 bool VAR_8 = 0;
 u32 VAR_9, VAR_10;
 bool VAR_11;

 FUNC_1(VAR_4, "Handling parity\n");
 while (1) {
  switch (VAR_7->recovery_state) {
  case 129:
   FUNC_1(VAR_4, "State is BNX2X_RECOVERY_INIT\n");
   VAR_11 = FUNC_3(VAR_7, &VAR_8, 0);
   FUNC_2(!VAR_11);


   if (FUNC_14(VAR_7)) {
    FUNC_13(VAR_7);






    if (VAR_8)
     FUNC_12(VAR_7);

    VAR_7->is_leader = 1;
   }



   if (FUNC_7(VAR_7, VAR_6, 0))
    return;

   VAR_7->recovery_state = 128;





   FUNC_18();
   break;

  case 128:
   FUNC_1(VAR_4, "State is BNX2X_RECOVERY_WAIT\n");
   if (VAR_7->is_leader) {
    int VAR_12 = FUNC_0(VAR_7) ? 0 : 1;
    bool VAR_13 =
     FUNC_4(VAR_7, VAR_12);
    bool VAR_14 =
     FUNC_4(VAR_7, FUNC_0(VAR_7));
    VAR_8 = FUNC_10(VAR_7);
    if (VAR_14 ||
        (VAR_8 && VAR_13)) {



     FUNC_17(&VAR_7->sp_rtnl_task,
        VAR_2/10);
     return;
    } else {





     if (FUNC_5(VAR_7)) {
      FUNC_8(VAR_7);
      return;
     }






     break;
    }
   } else {
    if (!FUNC_9(VAR_7, FUNC_0(VAR_7))) {






     if (FUNC_14(VAR_7)) {



      VAR_7->is_leader = 1;
      break;
     }

     FUNC_17(&VAR_7->sp_rtnl_task,
        VAR_2/10);
     return;

    } else {




     if (FUNC_10(VAR_7)) {
      FUNC_17(
       &VAR_7->sp_rtnl_task,
       VAR_2/10);
      return;
     }

     VAR_9 =
       VAR_7->eth_stats.recoverable_error;
     VAR_10 =
       VAR_7->eth_stats.unrecoverable_error;
     VAR_7->recovery_state =
      VAR_1;
     if (FUNC_6(VAR_7, VAR_3)) {
      VAR_10++;
      FUNC_15(VAR_7->dev,
          "Recovery failed. Power cycle needed\n");

      FUNC_16(VAR_7->dev);

      FUNC_11(
       VAR_7, VAR_5);
      FUNC_18();
     } else {
      VAR_7->recovery_state =
       VAR_0;
      VAR_9++;
      FUNC_18();
     }
     VAR_7->eth_stats.recoverable_error =
      VAR_9;
     VAR_7->eth_stats.unrecoverable_error =
      VAR_10;

     return;
    }
   }
  default:
   return;
  }
 }
}
