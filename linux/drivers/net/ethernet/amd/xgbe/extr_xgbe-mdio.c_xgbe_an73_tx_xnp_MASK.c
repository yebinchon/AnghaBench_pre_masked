
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__,int ) ;

__attribute__((used)) static enum xgbe_an FUNC_1(struct xgbe_prv_data *VAR_6,
         enum xgbe_rx *VAR_7)
{
 u16 VAR_8;

 *VAR_7 = VAR_3;

 VAR_8 = VAR_4;
 VAR_8 |= VAR_5;

 FUNC_0(VAR_6, VAR_1, VAR_0 + 2, 0);
 FUNC_0(VAR_6, VAR_1, VAR_0 + 1, 0);
 FUNC_0(VAR_6, VAR_1, VAR_0, VAR_8);

 return VAR_2;
}
