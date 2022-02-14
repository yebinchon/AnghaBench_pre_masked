
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned long an_start; int kr_state; int kx_state; int netdev; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 int VAR_1 ;


 void* VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*) ;
 scalar_t__ FUNC_2 (void*,unsigned long) ;
 int FUNC_3 (struct xgbe_prv_data*,int*) ;
 int FUNC_4 (struct xgbe_prv_data*,int*) ;
 scalar_t__ FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_6(struct xgbe_prv_data *VAR_4)
{
 enum xgbe_rx *VAR_5;
 unsigned long VAR_6;
 enum xgbe_an VAR_7;

 if (!VAR_4->an_start) {
  VAR_4->an_start = VAR_2;
 } else {
  VAR_6 = VAR_4->an_start +
        FUNC_0(VAR_1);
  if (FUNC_2(VAR_2, VAR_6)) {

   VAR_4->kr_state = 129;
   VAR_4->kx_state = 129;

   VAR_4->an_start = VAR_2;

   FUNC_1(VAR_4, VAR_3, VAR_4->netdev,
      "CL73 AN timed out, resetting state\n");
  }
 }

 VAR_5 = FUNC_5(VAR_4) ? &VAR_4->kr_state
           : &VAR_4->kx_state;

 switch (*VAR_5) {
 case 129:
  VAR_7 = FUNC_3(VAR_4, VAR_5);
  break;

 case 128:
  VAR_7 = FUNC_4(VAR_4, VAR_5);
  break;

 default:
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
