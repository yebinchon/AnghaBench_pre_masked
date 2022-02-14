
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* an_post ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int an_state; int an_int; scalar_t__ an_mode; int an_status; int an_result; int netdev; TYPE_2__ phy_if; } ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*,...) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_5)
{
 enum xgbe_an VAR_6 = VAR_5->an_state;

 if (!VAR_5->an_int)
  return;

 if (VAR_5->an_int & VAR_0) {
  VAR_5->an_state = 130;
  VAR_5->an_int &= ~VAR_0;


  if ((VAR_5->an_mode == VAR_2) &&
      !(VAR_5->an_status & VAR_3))
   VAR_5->an_state = 129;
 }

 FUNC_1(VAR_5, VAR_4, VAR_5->netdev, "CL37 AN %s\n",
    FUNC_5(VAR_5->an_state));

 VAR_6 = VAR_5->an_state;

 switch (VAR_5->an_state) {
 case 128:
  break;

 case 130:
  FUNC_1(VAR_5, VAR_4, VAR_5->netdev,
     "Auto negotiation successful\n");
  break;

 case 129:
  break;

 default:
  VAR_5->an_state = VAR_1;
 }

 if (VAR_5->an_state == VAR_1) {
  FUNC_0(VAR_5->netdev,
      "error during auto-negotiation, state=%u\n",
      VAR_6);

  VAR_5->an_int = 0;
  FUNC_3(VAR_5);
 }

 if (VAR_5->an_state >= 130) {
  VAR_5->an_result = VAR_5->an_state;
  VAR_5->an_state = 128;

  if (VAR_5->phy_if.phy_impl.an_post)
   VAR_5->phy_if.phy_impl.an_post(VAR_5);

  FUNC_1(VAR_5, VAR_4, VAR_5->netdev, "CL37 AN result: %s\n",
     FUNC_5(VAR_5->an_result));
 }

 FUNC_4(VAR_5);
}
