
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* an_post ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int an_state; int an_int; int parallel_detect; int an_result; int netdev; TYPE_2__ phy_if; scalar_t__ an_start; void* kx_state; void* kr_state; int an_supported; } ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 void* VAR_3 ;




 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*,char*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 char* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct xgbe_prv_data *VAR_6)
{
 enum xgbe_an VAR_7 = VAR_6->an_state;

 if (!VAR_6->an_int)
  return;

next_int:
 if (VAR_6->an_int & VAR_2) {
  VAR_6->an_state = 129;
  VAR_6->an_int &= ~VAR_2;
 } else if (VAR_6->an_int & VAR_0) {
  VAR_6->an_state = 131;
  VAR_6->an_int &= ~VAR_0;
 } else if (VAR_6->an_int & VAR_1) {
  VAR_6->an_state = 132;
  VAR_6->an_int &= ~VAR_1;
 } else {
  VAR_6->an_state = VAR_3;
 }

again:
 FUNC_1(VAR_6, VAR_5, VAR_6->netdev, "CL73 AN %s\n",
    FUNC_7(VAR_6->an_state));

 VAR_7 = VAR_6->an_state;

 switch (VAR_6->an_state) {
 case 128:
  VAR_6->an_supported = 0;
  break;

 case 129:
  VAR_6->an_state = FUNC_6(VAR_6);
  VAR_6->an_supported++;
  break;

 case 131:
  VAR_6->an_supported = 0;
  VAR_6->parallel_detect = 0;
  VAR_6->an_state = FUNC_5(VAR_6);
  break;

 case 132:
  VAR_6->parallel_detect = VAR_6->an_supported ? 0 : 1;
  FUNC_1(VAR_6, VAR_5, VAR_6->netdev, "%s successful\n",
     VAR_6->an_supported ? "Auto negotiation"
           : "Parallel detection");
  break;

 case 130:
  break;

 default:
  VAR_6->an_state = VAR_3;
 }

 if (VAR_6->an_state == 130) {
  VAR_6->an_int = 0;
  FUNC_3(VAR_6);
 } else if (VAR_6->an_state == VAR_3) {
  FUNC_0(VAR_6->netdev,
      "error during auto-negotiation, state=%u\n",
      VAR_7);

  VAR_6->an_int = 0;
  FUNC_3(VAR_6);
 }

 if (VAR_6->an_state >= 132) {
  VAR_6->an_result = VAR_6->an_state;
  VAR_6->an_state = 128;
  VAR_6->kr_state = VAR_4;
  VAR_6->kx_state = VAR_4;
  VAR_6->an_start = 0;

  if (VAR_6->phy_if.phy_impl.an_post)
   VAR_6->phy_if.phy_impl.an_post(VAR_6);

  FUNC_1(VAR_6, VAR_5, VAR_6->netdev, "CL73 AN result: %s\n",
     FUNC_7(VAR_6->an_result));
 }

 if (VAR_7 != VAR_6->an_state)
  goto again;

 if (VAR_6->an_int)
  goto next_int;

 FUNC_4(VAR_6);
}
