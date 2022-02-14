
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_ipsec_rule {int ctx; struct fs_fte* fte; } ;
struct mlx5_fpga_ipsec {int dummy; } ;
struct mlx5_fpga_device {struct mlx5_fpga_ipsec* ipsec; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct mailbox_mod {int dummy; } ;
struct TYPE_3__ {int esp_id; int action; } ;
struct fs_fte {TYPE_1__ action; } ;
struct TYPE_4__ {int (* create_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*,struct fs_fte*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_fpga_ipsec*,struct mlx5_fpga_ipsec_rule*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mlx5_fpga_ipsec_rule*) ;
 struct mlx5_fpga_ipsec_rule* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlx5_core_dev*,struct fs_fte*,int) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (struct mlx5_core_dev*,struct fs_fte*,struct mailbox_mod*) ;
 int FUNC_11 (struct fs_fte*,struct mailbox_mod*) ;
 int FUNC_12 (struct mlx5_fpga_ipsec*,struct mlx5_fpga_ipsec_rule*) ;

__attribute__((used)) static int FUNC_13(struct mlx5_flow_root_namespace *VAR_4,
        struct mlx5_flow_table *VAR_5,
        struct mlx5_flow_group *VAR_6,
        struct fs_fte *VAR_7,
        bool VAR_8)
{
 int (*VAR_9)(struct mlx5_flow_root_namespace *VAR_10,
     struct mlx5_flow_table *VAR_11,
     struct mlx5_flow_group *VAR_12,
     struct fs_fte *VAR_13) =
  FUNC_9(FUNC_4(VAR_8))->create_fte;
 struct mlx5_core_dev *VAR_14 = VAR_4->dev;
 struct mlx5_fpga_device *VAR_15 = VAR_14->fpga;
 struct mlx5_fpga_ipsec *VAR_16 = VAR_15->ipsec;
 struct mlx5_fpga_ipsec_rule *VAR_17;
 bool VAR_18 = VAR_7->action.esp_id;
 struct mailbox_mod VAR_19;
 int VAR_20;

 if (!VAR_18 ||
     !(VAR_7->action.action &
       (VAR_3 |
        VAR_2)))
  return VAR_9(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->ctx = FUNC_8(VAR_14, VAR_7, VAR_8);
 if (FUNC_0(VAR_17->ctx)) {
  int VAR_21 = FUNC_1(VAR_17->ctx);
  FUNC_5(VAR_17);
  return VAR_21;
 }

 VAR_17->fte = VAR_7;
 FUNC_2(FUNC_12(VAR_16, VAR_17));

 FUNC_10(VAR_14, VAR_7, &VAR_19);
 VAR_20 = VAR_9(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_11(VAR_7, &VAR_19);
 if (VAR_20) {
  FUNC_3(VAR_16, VAR_17);
  FUNC_7(VAR_17->ctx);
  FUNC_5(VAR_17);
 }

 return VAR_20;
}
