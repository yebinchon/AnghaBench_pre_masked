
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ sfp_comm; int sfp_mux_address; } ;
struct xgbe_i2c_op {int len; scalar_t__* buf; int target; int cmd; } ;
typedef int mux_channel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_2->phy_data;
 struct xgbe_i2c_op VAR_4;
 u8 VAR_5;

 if (VAR_3->sfp_comm == VAR_1)
  return 0;


 VAR_5 = 0;
 VAR_4.cmd = VAR_0;
 VAR_4.target = VAR_3->sfp_mux_address;
 VAR_4.len = sizeof(VAR_5);
 VAR_4.buf = &VAR_5;

 return FUNC_0(VAR_2, &VAR_4);
}
