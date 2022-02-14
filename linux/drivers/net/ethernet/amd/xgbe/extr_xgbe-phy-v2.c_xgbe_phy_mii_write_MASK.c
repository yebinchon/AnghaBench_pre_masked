
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int conn_type; } ;
struct mii_bus {struct xgbe_prv_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*,int,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int,int,int ) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5, u16 VAR_6)
{
 struct xgbe_prv_data *VAR_7 = VAR_3->priv;
 struct xgbe_phy_data *VAR_8 = VAR_7->phy_data;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->conn_type == VAR_2)
  VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_6);
 else if (VAR_8->conn_type & VAR_1)
  VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
 else
  VAR_9 = -VAR_0;

 FUNC_3(VAR_7);

 return VAR_9;
}
