
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int mii; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;


 FUNC_0(VAR_1->mii);
}
