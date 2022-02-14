
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int cur_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*,int,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_2->phy_data;

 FUNC_2(VAR_2);


 FUNC_1(VAR_2, 1, 2);

 VAR_3->cur_mode = VAR_0;

 FUNC_0(VAR_2, VAR_1, VAR_2->netdev, "1GbE SGMII mode set\n");
}
