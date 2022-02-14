
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct TYPE_3__ {int mqp; int sgid_index; } ;
struct mlx5_fpga_conn {TYPE_1__ qp; int * fpga_qpc; int fpga_qpn; struct mlx5_fpga_device* fdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int rgid_rip; int hop_limit; int src_addr_index; int udp_sport; int rmac_47_32; int vhca_port_num; int pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct mlx5_core_dev*,int ,int ,int *,int *) ;
 int FUNC_12 (struct mlx5_fpga_device*,char*) ;
 int FUNC_13 (struct mlx5_fpga_device*,char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static inline int FUNC_14(struct mlx5_fpga_conn *VAR_17)
{
 struct mlx5_fpga_device *VAR_18 = VAR_17->fdev;
 struct mlx5_core_dev *VAR_19 = VAR_18->mdev;
 u32 *VAR_20 = ((void*)0);
 int VAR_21;

 FUNC_12(VAR_17->fdev, "QP RTR\n");

 VAR_20 = FUNC_9(FUNC_6(VAR_20), VAR_1);
 if (!VAR_20) {
  VAR_21 = -VAR_0;
  goto out;
 }

 FUNC_5(VAR_20, VAR_20, VAR_11, VAR_5);
 FUNC_5(VAR_20, VAR_20, VAR_10, (u8)FUNC_1(VAR_19, VAR_9));
 FUNC_5(VAR_20, VAR_20, VAR_16, VAR_17->fpga_qpn);
 FUNC_5(VAR_20, VAR_20, VAR_12,
   FUNC_4(VAR_8, VAR_17->fpga_qpc, VAR_13));
 FUNC_5(VAR_20, VAR_20, VAR_14.pkey_index, VAR_3);
 FUNC_5(VAR_20, VAR_20, VAR_14.vhca_port_num, VAR_4);
 FUNC_7(FUNC_0(VAR_20, VAR_20, VAR_14.rmac_47_32),
   FUNC_0(VAR_8, VAR_17->fpga_qpc, VAR_7));
 FUNC_5(VAR_20, VAR_20, VAR_14.udp_sport,
   FUNC_2(VAR_19, VAR_15));
 FUNC_5(VAR_20, VAR_20, VAR_14.src_addr_index,
   VAR_17->qp.sgid_index);
 FUNC_5(VAR_20, VAR_20, VAR_14.hop_limit, 0);
 FUNC_10(FUNC_0(VAR_20, VAR_20, VAR_14.rgid_rip),
        FUNC_0(VAR_8, VAR_17->fpga_qpc, VAR_6),
        FUNC_3(VAR_20, VAR_14.rgid_rip));

 VAR_21 = FUNC_11(VAR_19, VAR_2, 0, VAR_20,
      &VAR_17->qp.mqp);
 if (VAR_21) {
  FUNC_13(VAR_18, "qp_modify RST2INIT failed: %d\n", VAR_21);
  goto out;
 }

out:
 FUNC_8(VAR_20);
 return VAR_21;
}
