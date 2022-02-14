
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_i2c_op_state {int tx_abort_source; } ;
struct TYPE_2__ {struct xgbe_i2c_op_state op_state; } ;
struct xgbe_prv_data {TYPE_1__ i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_5,
       unsigned int VAR_6)
{
 struct xgbe_i2c_op_state *VAR_7 = &VAR_5->i2c.op_state;

 if (VAR_6 & VAR_4) {
  VAR_7->tx_abort_source = FUNC_0(VAR_5, VAR_2);
  FUNC_0(VAR_5, VAR_1);
 }

 if (VAR_6 & VAR_3)
  FUNC_0(VAR_5, VAR_0);
}
