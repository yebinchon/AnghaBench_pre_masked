
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_device {int mdev; } ;
struct TYPE_2__ {int active; } ;
struct mlx5_fpga_conn {int fpga_qpc; int fpga_qpn; struct mlx5_fpga_device* fdev; TYPE_1__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_fpga_conn*) ;
 int FUNC_2 (struct mlx5_fpga_conn*) ;
 int FUNC_3 (struct mlx5_fpga_conn*) ;
 int FUNC_4 (struct mlx5_fpga_conn*) ;
 int FUNC_5 (struct mlx5_fpga_conn*) ;
 int FUNC_6 (struct mlx5_fpga_conn*) ;
 int FUNC_7 (struct mlx5_fpga_device*,char*,...) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct mlx5_fpga_conn *VAR_5)
{
 struct mlx5_fpga_device *VAR_6 = VAR_5->fdev;
 int VAR_7;

 FUNC_0(VAR_3, VAR_5->fpga_qpc, VAR_4, VAR_1);
 VAR_7 = FUNC_8(VAR_5->fdev->mdev, VAR_5->fpga_qpn,
      VAR_0, &VAR_5->fpga_qpc);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to activate FPGA RC QP: %d\n", VAR_7);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to change QP state to reset\n");
  goto err_fpga_qp;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to modify QP from RESET to INIT\n");
  goto err_fpga_qp;
 }
 VAR_5->qp.active = 1;

 while (!FUNC_3(VAR_5))
  ;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to change QP state from INIT to RTR\n");
  goto err_recv_bufs;
 }

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to change QP state from RTR to RTS\n");
  goto err_recv_bufs;
 }
 goto out;

err_recv_bufs:
 FUNC_1(VAR_5);
err_fpga_qp:
 FUNC_0(VAR_3, VAR_5->fpga_qpc, VAR_4, VAR_2);
 if (FUNC_8(VAR_5->fdev->mdev, VAR_5->fpga_qpn,
    VAR_0, &VAR_5->fpga_qpc))
  FUNC_7(VAR_6, "Failed to revert FPGA QP to INIT\n");
out:
 return VAR_7;
}
