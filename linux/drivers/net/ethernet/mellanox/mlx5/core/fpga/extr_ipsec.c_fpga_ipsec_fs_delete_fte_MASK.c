
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_ipsec_rule {int ctx; } ;
struct mlx5_fpga_ipsec {int dummy; } ;
struct mlx5_fpga_device {struct mlx5_fpga_ipsec* ipsec; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct mailbox_mod {int dummy; } ;
struct TYPE_3__ {int esp_id; int action; } ;
struct fs_fte {TYPE_1__ action; } ;
struct TYPE_4__ {int (* delete_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct fs_fte*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,struct fs_fte*,struct mailbox_mod*) ;
 int FUNC_4 (struct fs_fte*,struct mailbox_mod*) ;
 int FUNC_5 (struct mlx5_fpga_ipsec*,struct mlx5_fpga_ipsec_rule*) ;
 struct mlx5_fpga_ipsec_rule* FUNC_6 (struct mlx5_fpga_ipsec*,struct fs_fte*) ;

__attribute__((used)) static int FUNC_7(struct mlx5_flow_root_namespace *VAR_3,
        struct mlx5_flow_table *VAR_4,
        struct fs_fte *VAR_5,
        bool VAR_6)
{
 int (*VAR_7)(struct mlx5_flow_root_namespace *VAR_8,
     struct mlx5_flow_table *VAR_9,
     struct fs_fte *VAR_10) =
  FUNC_2(FUNC_0(VAR_6))->delete_fte;
 struct mlx5_core_dev *VAR_11 = VAR_3->dev;
 struct mlx5_fpga_device *VAR_12 = VAR_11->fpga;
 struct mlx5_fpga_ipsec *VAR_13 = VAR_12->ipsec;
 struct mlx5_fpga_ipsec_rule *VAR_14;
 bool VAR_15 = VAR_5->action.esp_id;
 struct mailbox_mod VAR_16;
 int VAR_17;

 if (!VAR_15 ||
     !(VAR_5->action.action &
       (VAR_2 |
        VAR_1)))
  return VAR_7(VAR_3, VAR_4, VAR_5);

 VAR_14 = FUNC_6(VAR_13, VAR_5);
 if (!VAR_14)
  return -VAR_0;

 FUNC_1(VAR_14->ctx);
 FUNC_5(VAR_13, VAR_14);

 FUNC_3(VAR_11, VAR_5, &VAR_16);
 VAR_17 = VAR_7(VAR_3, VAR_4, VAR_5);
 FUNC_4(VAR_5, &VAR_16);

 return VAR_17;
}
