
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* i2c_xfer ) (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;} ;
struct xgbe_prv_data {TYPE_1__ i2c_if; } ;
struct xgbe_i2c_op {int dummy; } ;


 int FUNC_0 (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_0,
        struct xgbe_i2c_op *VAR_1)
{
 return VAR_0->i2c_if.i2c_xfer(VAR_0, VAR_1);
}
