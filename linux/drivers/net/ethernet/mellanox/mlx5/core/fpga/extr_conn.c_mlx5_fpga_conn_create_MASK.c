
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_device {int mdev; } ;
struct mlx5_fpga_conn_attr {int tx_size; int rx_size; int cb_arg; scalar_t__ recv_cb; } ;
struct TYPE_5__ {int qpn; } ;
struct TYPE_4__ {int lock; int backlog; } ;
struct TYPE_6__ {int sgid_index; TYPE_2__ mqp; TYPE_1__ sq; } ;
struct mlx5_fpga_conn {TYPE_3__ qp; int fpga_qpn; struct mlx5_fpga_device* fdev; int fpga_qpc; int cb_arg; scalar_t__ recv_cb; } ;
typedef enum mlx5_ifc_fpga_qp_type { ____Placeholder_mlx5_ifc_fpga_qp_type } mlx5_ifc_fpga_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_fpga_conn* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int ,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int*,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct mlx5_fpga_conn*) ;
 struct mlx5_fpga_conn* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int*,int*,int,int ,int ) ;
 int FUNC_10 (struct mlx5_fpga_conn*) ;
 int FUNC_11 (struct mlx5_fpga_conn*) ;
 int FUNC_12 (struct mlx5_fpga_conn*,int) ;
 int FUNC_13 (struct mlx5_fpga_conn*,int,int) ;
 int FUNC_14 (struct mlx5_fpga_conn*) ;
 int FUNC_15 (struct mlx5_fpga_conn*) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (struct mlx5_fpga_device*,char*,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_20 (int ,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_21 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

struct mlx5_fpga_conn *FUNC_22(struct mlx5_fpga_device *VAR_22,
          struct mlx5_fpga_conn_attr *VAR_23,
          enum mlx5_ifc_fpga_qp_type VAR_24)
{
 struct mlx5_fpga_conn *VAR_25, *VAR_26;
 u8 *VAR_27, *VAR_28;
 int VAR_29;

 if (!VAR_23->recv_cb)
  return FUNC_0(-VAR_0);

 VAR_26 = FUNC_6(sizeof(*VAR_26), VAR_3);
 if (!VAR_26)
  return FUNC_0(-VAR_1);

 VAR_26->fdev = VAR_22;
 FUNC_1(&VAR_26->qp.sq.backlog);

 FUNC_21(&VAR_26->qp.sq.lock);

 VAR_26->recv_cb = VAR_23->recv_cb;
 VAR_26->cb_arg = VAR_23->cb_arg;

 VAR_27 = FUNC_2(VAR_11, VAR_26->fpga_qpc, VAR_15);
 VAR_29 = FUNC_20(VAR_22->mdev, VAR_27);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to query local MAC: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err;
 }


 VAR_28 = FUNC_2(VAR_11, VAR_26->fpga_qpc, VAR_28);
 VAR_28[0] = 0xfe;
 VAR_28[1] = 0x80;
 FUNC_4(&VAR_28[8], VAR_27);

 VAR_29 = FUNC_7(VAR_22->mdev, &VAR_26->qp.sgid_index);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to allocate SGID: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err;
 }

 VAR_29 = FUNC_9(VAR_22->mdev, VAR_26->qp.sgid_index,
         VAR_9,
         VAR_8,
         VAR_28, VAR_27, 1, 0,
         VAR_5);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to set SGID: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err_rsvd_gid;
 }
 FUNC_17(VAR_22, "Reserved SGID index %u\n", VAR_26->qp.sgid_index);




 VAR_29 = FUNC_12(VAR_26,
           (VAR_23->tx_size + VAR_23->rx_size) * 2);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to create CQ: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err_gid;
 }

 FUNC_10(VAR_26);

 VAR_29 = FUNC_13(VAR_26, VAR_23->tx_size, VAR_23->rx_size);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to create QP: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err_cq;
 }

 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_20, VAR_6);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_24, VAR_24);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_19, VAR_7);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_10, VAR_2);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_21, 0);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_12, 1);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_13, 0);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_14, VAR_4);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_16, VAR_26->qp.mqp.qpn);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_18, 7);
 FUNC_3(VAR_11, VAR_26->fpga_qpc, VAR_17, 7);

 VAR_29 = FUNC_16(VAR_22->mdev, &VAR_26->fpga_qpc,
      &VAR_26->fpga_qpn);
 if (VAR_29) {
  FUNC_19(VAR_22, "Failed to create FPGA RC QP: %d\n", VAR_29);
  VAR_25 = FUNC_0(VAR_29);
  goto err_qp;
 }

 VAR_29 = FUNC_11(VAR_26);
 if (VAR_29) {
  VAR_25 = FUNC_0(VAR_29);
  goto err_conn;
 }

 FUNC_17(VAR_22, "FPGA QPN is %u\n", VAR_26->fpga_qpn);
 VAR_25 = VAR_26;
 goto out;

err_conn:
 FUNC_18(VAR_26->fdev->mdev, VAR_26->fpga_qpn);
err_qp:
 FUNC_15(VAR_26);
err_cq:
 FUNC_14(VAR_26);
err_gid:
 FUNC_9(VAR_22->mdev, VAR_26->qp.sgid_index, 0, 0, ((void*)0),
          ((void*)0), 0, 0, VAR_5);
err_rsvd_gid:
 FUNC_8(VAR_22->mdev, VAR_26->qp.sgid_index);
err:
 FUNC_5(VAR_26);
out:
 return VAR_25;
}
