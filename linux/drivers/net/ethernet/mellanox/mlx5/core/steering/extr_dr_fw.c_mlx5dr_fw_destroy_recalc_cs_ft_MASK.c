
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_fw_recalc_cs_ft {int table_id; int group_id; int modify_hdr_id; } ;
struct mlx5dr_domain {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_fw_recalc_cs_ft*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct mlx5dr_domain *VAR_1,
        struct mlx5dr_fw_recalc_cs_ft *VAR_2)
{
 FUNC_2(VAR_1->mdev,
     VAR_0,
     VAR_2->table_id);
 FUNC_1(VAR_1->mdev, VAR_2->modify_hdr_id);
 FUNC_3(VAR_1->mdev,
          VAR_0,
          VAR_2->table_id,
          VAR_2->group_id);
 FUNC_4(VAR_1->mdev,
          VAR_2->table_id,
          VAR_0);

 FUNC_0(VAR_2);
}
