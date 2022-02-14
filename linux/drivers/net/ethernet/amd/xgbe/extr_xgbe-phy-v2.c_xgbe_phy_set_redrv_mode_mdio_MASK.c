
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* write_ext_mii_regs ) (struct xgbe_prv_data*,int ,scalar_t__,scalar_t__) ;} ;
struct xgbe_prv_data {TYPE_1__ hw_if; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int redrv_lane; int redrv_addr; } ;
typedef enum xgbe_phy_redrv_mode { ____Placeholder_xgbe_phy_redrv_mode } xgbe_phy_redrv_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1,
     enum xgbe_phy_redrv_mode VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_1->phy_data;
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_0 + (VAR_3->redrv_lane * 0x1000);
 VAR_5 = (u16)VAR_2;

 return VAR_1->hw_if.write_ext_mii_regs(VAR_1, VAR_3->redrv_addr,
            VAR_4, VAR_5);
}
