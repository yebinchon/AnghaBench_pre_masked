
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ conn_type; scalar_t__ mdio_reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_3)
{
 struct xgbe_phy_data *VAR_4 = VAR_3->phy_data;
 int VAR_5;

 if (VAR_4->conn_type != VAR_0)
  return 0;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->mdio_reset == VAR_1)
  VAR_5 = FUNC_1(VAR_3);
 else if (VAR_4->mdio_reset == VAR_2)
  VAR_5 = FUNC_2(VAR_3);

 FUNC_3(VAR_3);

 return VAR_5;
}
