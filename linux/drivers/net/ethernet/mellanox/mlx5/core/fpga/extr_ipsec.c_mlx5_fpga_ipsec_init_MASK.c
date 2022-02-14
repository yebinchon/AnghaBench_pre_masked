
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_fpga_conn_attr {struct mlx5_fpga_device* cb_arg; int recv_cb; void* tx_size; void* rx_size; int member_0; } ;
struct mlx5_fpga_conn {int dummy; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_3__ {int sa_hash; int rules_rb_lock; int rules_rb; int sa_hash_lock; struct mlx5_fpga_conn* conn; int pending_cmds_lock; int pending_cmds; int caps; struct mlx5_fpga_device* fdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_fpga_conn*) ;
 int FUNC_2 (struct mlx5_fpga_conn*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_6 (struct mlx5_fpga_device*,int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int VAR_4 ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 struct mlx5_fpga_conn* FUNC_9 (struct mlx5_fpga_device*,struct mlx5_fpga_conn_attr*) ;
 int FUNC_10 (struct mlx5_fpga_conn*) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct mlx5_core_dev *VAR_6)
{
 struct mlx5_fpga_conn_attr VAR_7 = {0};
 struct mlx5_fpga_device *VAR_8 = VAR_6->fpga;
 struct mlx5_fpga_conn *VAR_9;
 int VAR_10;

 if (!FUNC_8(VAR_6))
  return 0;

 VAR_8->ipsec = FUNC_4(sizeof(*VAR_8->ipsec), VAR_1);
 if (!VAR_8->ipsec)
  return -VAR_0;

 VAR_8->ipsec->fdev = VAR_8;

 VAR_10 = FUNC_6(VAR_8, sizeof(VAR_8->ipsec->caps),
         VAR_8->ipsec->caps);
 if (VAR_10) {
  FUNC_5(VAR_8, "Failed to retrieve IPSec extended capabilities: %d\n",
         VAR_10);
  goto error;
 }

 FUNC_0(&VAR_8->ipsec->pending_cmds);
 FUNC_14(&VAR_8->ipsec->pending_cmds_lock);

 VAR_7.rx_size = VAR_3;
 VAR_7.tx_size = VAR_3;
 VAR_7.recv_cb = VAR_4;
 VAR_7.cb_arg = VAR_8;
 VAR_9 = FUNC_9(VAR_8, &VAR_7);
 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_2(VAR_9);
  FUNC_5(VAR_8, "Error creating IPSec command connection %d\n",
         VAR_10);
  goto error;
 }
 VAR_8->ipsec->conn = VAR_9;

 VAR_10 = FUNC_13(&VAR_8->ipsec->sa_hash, &VAR_5);
 if (VAR_10)
  goto err_destroy_conn;
 FUNC_11(&VAR_8->ipsec->sa_hash_lock);

 VAR_8->ipsec->rules_rb = VAR_2;
 FUNC_11(&VAR_8->ipsec->rules_rb_lock);

 VAR_10 = FUNC_7(VAR_6);
 if (VAR_10) {
  FUNC_5(VAR_8, "Failed to enable IPSec extended capabilities: %d\n",
         VAR_10);
  goto err_destroy_hash;
 }

 return 0;

err_destroy_hash:
 FUNC_12(&VAR_8->ipsec->sa_hash);

err_destroy_conn:
 FUNC_10(VAR_9);

error:
 FUNC_3(VAR_8->ipsec);
 VAR_8->ipsec = ((void*)0);
 return VAR_10;
}
