
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_i2c_op_state {int ret; int tx_abort_source; int rx_buf; int rx_len; int tx_buf; int tx_len; struct xgbe_i2c_op* op; } ;
struct TYPE_2__ {struct xgbe_i2c_op_state op_state; } ;
struct xgbe_prv_data {int i2c_mutex; int netdev; int i2c_complete; TYPE_1__ i2c; } ;
struct xgbe_i2c_op {int buf; int len; int target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xgbe_i2c_op_state*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_12(struct xgbe_prv_data *VAR_6, struct xgbe_i2c_op *VAR_7)
{
 struct xgbe_i2c_op_state *VAR_8 = &VAR_6->i2c.op_state;
 int VAR_9;

 FUNC_1(&VAR_6->i2c_mutex);

 FUNC_4(&VAR_6->i2c_complete);

 VAR_9 = FUNC_7(VAR_6);
 if (VAR_9) {
  FUNC_3(VAR_6->netdev, "failed to disable i2c master\n");
  goto unlock;
 }

 FUNC_11(VAR_6, VAR_7->target);

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->op = VAR_7;
 VAR_8->tx_len = VAR_7->len;
 VAR_8->tx_buf = VAR_7->buf;
 VAR_8->rx_len = VAR_7->len;
 VAR_8->rx_buf = VAR_7->buf;

 FUNC_6(VAR_6);
 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9) {
  FUNC_3(VAR_6->netdev, "failed to enable i2c master\n");
  goto unlock;
 }




 FUNC_10(VAR_6);

 if (!FUNC_5(&VAR_6->i2c_complete, VAR_3)) {
  FUNC_3(VAR_6->netdev, "i2c operation timed out\n");
  VAR_9 = -VAR_2;
  goto disable;
 }

 VAR_9 = VAR_8->ret;
 if (VAR_9) {
  if (VAR_8->tx_abort_source & VAR_4)
   VAR_9 = -VAR_1;
  else if (VAR_8->tx_abort_source & VAR_5)
   VAR_9 = -VAR_0;
 }

disable:
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);

unlock:
 FUNC_2(&VAR_6->i2c_mutex);

 return VAR_9;
}
