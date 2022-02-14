
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int conn_type; } ;
struct mii_bus {struct xgbe_prv_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*,int) ;
 int FUNC_2 (struct xgbe_prv_data*,int,int) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct xgbe_prv_data *VAR_6 = VAR_3->priv;
 struct xgbe_phy_data *VAR_7 = VAR_6->phy_data;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->conn_type == VAR_2)
  VAR_8 = FUNC_1(VAR_6, VAR_5);
 else if (VAR_7->conn_type & VAR_1)
  VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_5);
 else
  VAR_8 = -VAR_0;

 FUNC_3(VAR_6);

 return VAR_8;
}
