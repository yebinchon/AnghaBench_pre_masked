
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste_send_info {int dummy; } ;
struct TYPE_2__ {int num_of_valid_entries; int num_of_collisions; } ;
struct mlx5dr_ste_htbl {TYPE_1__ ctrl; } ;
struct mlx5dr_ste {int hw_ste; int miss_list_node; struct mlx5dr_ste_htbl* htbl; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_ste*,struct mlx5dr_ste*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5dr_ste_htbl*) ;
 int FUNC_3 (struct mlx5dr_ste*,struct mlx5dr_ste*) ;
 int FUNC_4 (struct mlx5dr_ste*,int ,int ,int ,struct mlx5dr_ste_send_info*,struct list_head*,int) ;

__attribute__((used)) static void
FUNC_5(struct mlx5dr_ste *VAR_1, struct mlx5dr_ste *VAR_2,
   struct mlx5dr_ste_send_info *VAR_3,
   struct list_head *VAR_4,
   struct mlx5dr_ste_htbl *VAR_5)

{
 struct mlx5dr_ste_htbl *VAR_6;

 VAR_6 = VAR_2->htbl;


 FUNC_1(&VAR_2->miss_list_node);


 FUNC_3(VAR_2, VAR_1);


 FUNC_0(VAR_1, VAR_2);




 FUNC_2(VAR_6);

 FUNC_4(VAR_1, VAR_0,
        0, VAR_1->hw_ste,
        VAR_3,
        VAR_4,
        1 );

 VAR_5->ctrl.num_of_collisions--;
 VAR_5->ctrl.num_of_valid_entries--;
}
