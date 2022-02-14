
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xgbe_i2c_op_state {int ret; TYPE_2__* op; int tx_abort_source; } ;
struct TYPE_4__ {struct xgbe_i2c_op_state op_state; } ;
struct xgbe_prv_data {TYPE_3__* vdata; int i2c_complete; int netdev; TYPE_1__ i2c; } ;
struct TYPE_6__ {scalar_t__ irq_reissue_support; } ;
struct TYPE_5__ {int target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,char*,unsigned int,...) ;
 int FUNC_5 (struct xgbe_prv_data*,unsigned int) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_7)
{
 struct xgbe_prv_data *VAR_8 = (struct xgbe_prv_data *)VAR_7;
 struct xgbe_i2c_op_state *VAR_9 = &VAR_8->i2c.op_state;
 unsigned int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_1);
 if (!VAR_10)
  goto reissue_check;

 FUNC_4(VAR_8, VAR_5, VAR_8->netdev,
    "I2C interrupt received: status=%#010x\n", VAR_10);

 FUNC_5(VAR_8, VAR_10);

 if (VAR_10 & VAR_3) {
  FUNC_4(VAR_8, VAR_6, VAR_8->netdev,
     "I2C TX_ABRT received (%#010x) for target %#04x\n",
     VAR_9->tx_abort_source, VAR_9->op->target);

  FUNC_6(VAR_8);

  VAR_9->ret = -VAR_0;
  goto out;
 }


 FUNC_7(VAR_8);


 FUNC_8(VAR_8);

out:

 if (VAR_9->ret || FUNC_0(VAR_10, VAR_1, VAR_2))
  FUNC_3(&VAR_8->i2c_complete);

reissue_check:

 if (VAR_8->vdata->irq_reissue_support)
  FUNC_2(VAR_8, VAR_4, 1 << 2);
}
