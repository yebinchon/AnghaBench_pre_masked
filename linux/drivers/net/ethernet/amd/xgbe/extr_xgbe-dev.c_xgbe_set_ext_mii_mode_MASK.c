
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_mdio_mode { ____Placeholder_xgbe_mdio_mode } xgbe_mdio_mode ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_3, unsigned int VAR_4,
     enum xgbe_mdio_mode VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_3, VAR_1);

 switch (VAR_5) {
 case 129:
  if (VAR_4 > VAR_2)
   return -VAR_0;
  VAR_6 |= (1 << VAR_4);
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_1, VAR_6);

 return 0;
}
