
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5dr_ste_send_info {int dummy; } ;
struct TYPE_2__ {int num_of_collisions; int num_of_valid_entries; } ;
struct mlx5dr_ste_htbl {TYPE_1__ ctrl; } ;
struct mlx5dr_ste {int miss_list_node; int hw_ste; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct mlx5dr_ste* FUNC_2 (struct mlx5dr_ste*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mlx5dr_ste*,int ,int ,int ,struct mlx5dr_ste_send_info*,struct list_head*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5dr_ste *VAR_2,
         struct mlx5dr_ste_send_info *VAR_3,
         struct list_head *VAR_4,
         struct mlx5dr_ste_htbl *VAR_5)
{
 struct mlx5dr_ste *VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_0(!VAR_6))
  return;

 VAR_7 = FUNC_4(VAR_2->hw_ste);
 FUNC_5(VAR_6->hw_ste, VAR_7);

 FUNC_3(VAR_6, VAR_0, 0,
        VAR_6->hw_ste, VAR_3,
        VAR_4, 1 );

 FUNC_1(&VAR_2->miss_list_node);

 VAR_5->ctrl.num_of_valid_entries--;
 VAR_5->ctrl.num_of_collisions--;
}
