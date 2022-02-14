
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_tls {int caps; int rx_idr_spinlock; int tx_idr_spinlock; int rx_idr; int tx_idr; int pending_cmds; int pending_cmds_lock; struct mlx5_fpga_conn* conn; } ;
struct mlx5_fpga_device {struct mlx5_fpga_tls* tls; } ;
struct mlx5_fpga_conn_attr {struct mlx5_fpga_device* cb_arg; int recv_cb; void* tx_size; void* rx_size; int member_0; } ;
struct mlx5_fpga_conn {int dummy; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_fpga_conn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlx5_fpga_conn*) ;
 void* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_fpga_tls*) ;
 struct mlx5_fpga_tls* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 struct mlx5_fpga_conn* FUNC_8 (struct mlx5_fpga_device*,struct mlx5_fpga_conn_attr*) ;
 int FUNC_9 (struct mlx5_fpga_device*,int*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mlx5_core_dev *VAR_7)
{
 struct mlx5_fpga_device *VAR_8 = VAR_7->fpga;
 struct mlx5_fpga_conn_attr VAR_9 = {0};
 struct mlx5_fpga_conn *VAR_10;
 struct mlx5_fpga_tls *VAR_11;
 int VAR_12 = 0;

 if (!FUNC_7(VAR_7) || !VAR_8)
  return 0;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_9(VAR_8, &VAR_11->caps);
 if (VAR_12)
  goto error;

 if (!(VAR_11->caps & (VAR_4 | VAR_3))) {
  VAR_12 = -VAR_1;
  goto error;
 }

 VAR_9.rx_size = VAR_5;
 VAR_9.tx_size = VAR_5;
 VAR_9.recv_cb = VAR_6;
 VAR_9.cb_arg = VAR_8;
 VAR_10 = FUNC_8(VAR_8, &VAR_9);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  FUNC_6(VAR_8, "Error creating TLS command connection %d\n",
         VAR_12);
  goto error;
 }

 VAR_11->conn = VAR_10;
 FUNC_10(&VAR_11->pending_cmds_lock);
 FUNC_0(&VAR_11->pending_cmds);

 FUNC_3(&VAR_11->tx_idr);
 FUNC_3(&VAR_11->rx_idr);
 FUNC_10(&VAR_11->tx_idr_spinlock);
 FUNC_10(&VAR_11->rx_idr_spinlock);
 VAR_8->tls = VAR_11;
 return 0;

error:
 FUNC_4(VAR_11);
 return VAR_12;
}
