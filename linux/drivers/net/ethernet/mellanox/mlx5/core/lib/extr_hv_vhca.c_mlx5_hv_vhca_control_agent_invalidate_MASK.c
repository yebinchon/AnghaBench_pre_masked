
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_hv_vhca_control_block {int capabilities; int control; int command; int command_ack; } ;
struct mlx5_hv_vhca_agent {struct mlx5_hv_vhca* hv_vhca; } ;
struct mlx5_hv_vhca {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_hv_vhca_control_block*) ;
 struct mlx5_hv_vhca_control_block* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_hv_vhca_control_block*,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_hv_vhca_control_block*,int,int ) ;
 int FUNC_4 (struct mlx5_hv_vhca*,struct mlx5_hv_vhca_control_block*) ;
 int FUNC_5 (struct mlx5_hv_vhca*,int*) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_hv_vhca_control_block*,int,int ) ;

__attribute__((used)) static void
FUNC_7(struct mlx5_hv_vhca_agent *VAR_1,
          u64 VAR_2)
{
 struct mlx5_hv_vhca *VAR_3 = VAR_1->hv_vhca;
 struct mlx5_core_dev *VAR_4 = VAR_3->dev;
 struct mlx5_hv_vhca_control_block *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_7 = FUNC_3(VAR_4, VAR_5, sizeof(*VAR_5), 0);
 if (VAR_7)
  goto free_block;

 FUNC_5(VAR_3, &VAR_6);


 if (!VAR_6) {
  FUNC_2(VAR_5, 0, sizeof(*VAR_5));
  goto write;
 }

 if (VAR_5->capabilities != VAR_6)
  VAR_5->capabilities = VAR_6;

 if (VAR_5->control & ~VAR_6)
  goto free_block;

 FUNC_4(VAR_3, VAR_5);
 VAR_5->command_ack = VAR_5->command;

write:
 FUNC_6(VAR_4, VAR_5, sizeof(*VAR_5), 0);

free_block:
 FUNC_0(VAR_5);
}
