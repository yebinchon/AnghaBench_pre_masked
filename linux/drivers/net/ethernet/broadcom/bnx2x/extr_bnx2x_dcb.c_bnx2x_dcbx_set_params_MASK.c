
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dev; int dcbx_error; int dcbx_local_feat; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_5 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*,int *,int ) ;
 int FUNC_9 (struct bnx2x*,int ,int ) ;
 int FUNC_10 (struct bnx2x*,int *,int ) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*,int ,int ) ;
 int FUNC_14 (struct bnx2x*) ;
 int FUNC_15 (struct bnx2x*,int,int) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;

void FUNC_17(struct bnx2x *VAR_6, u32 VAR_7)
{
 switch (VAR_7) {
 case 130:
  {
   FUNC_1(VAR_0, "BNX2X_DCBX_STATE_NEG_RECEIVED\n");
   if (FUNC_4(VAR_6))
    return;

   FUNC_8(VAR_6, &VAR_6->dcbx_local_feat,
        VAR_6->dcbx_error);

   FUNC_10(VAR_6, &VAR_6->dcbx_local_feat,
       VAR_6->dcbx_error);


   FUNC_15(VAR_6,
            1 << VAR_3,
            1);
   FUNC_7(VAR_6);





   if (FUNC_2(VAR_6))
    FUNC_11(VAR_6);

   FUNC_13(VAR_6, VAR_1, 0);
   return;
  }
 case 129:
  FUNC_1(VAR_0, "BNX2X_DCBX_STATE_TX_PAUSED\n");
  FUNC_12(VAR_6);

  FUNC_6(VAR_6);


  FUNC_14(VAR_6);
  return;
 case 128:
  FUNC_1(VAR_0, "BNX2X_DCBX_STATE_TX_RELEASED\n");
  FUNC_9(VAR_6, VAR_4, 0);






  return;
 default:
  FUNC_0("Unknown DCBX_STATE\n");
 }
}
