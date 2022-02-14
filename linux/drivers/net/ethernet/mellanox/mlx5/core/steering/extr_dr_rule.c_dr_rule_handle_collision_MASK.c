
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_send_info {int dummy; } ;
struct mlx5dr_ste {TYPE_3__* htbl; } ;
struct mlx5dr_matcher_rx_tx {int dummy; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct list_head {int dummy; } ;
struct TYPE_5__ {int num_of_valid_entries; int num_of_collisions; } ;
struct TYPE_6__ {TYPE_2__ ctrl; } ;
struct TYPE_4__ {int dmn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5dr_ste*,struct list_head*,struct list_head*) ;
 struct mlx5dr_ste* FUNC_1 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int *,struct mlx5dr_ste*) ;
 int FUNC_2 (struct mlx5dr_ste_send_info*) ;
 struct mlx5dr_ste_send_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mlx5dr_ste*,int ,int ,int *,struct mlx5dr_ste_send_info*,struct list_head*,int) ;
 int FUNC_6 (struct mlx5dr_ste*,struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*) ;

__attribute__((used)) static struct mlx5dr_ste *
FUNC_7(struct mlx5dr_matcher *VAR_2,
    struct mlx5dr_matcher_rx_tx *VAR_3,
    struct mlx5dr_ste *VAR_4,
    u8 *VAR_5,
    struct list_head *VAR_6,
    struct list_head *VAR_7)
{
 struct mlx5dr_ste_send_info *VAR_8;
 struct mlx5dr_ste *VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4);
 if (!VAR_9)
  goto free_send_info;

 if (FUNC_0(VAR_9, VAR_6, VAR_7)) {
  FUNC_4(VAR_2->tbl->dmn, "Failed to update prev miss_list\n");
  goto err_exit;
 }

 FUNC_5(VAR_9, VAR_0, 0, VAR_5,
        VAR_8, VAR_7, 0);

 VAR_4->htbl->ctrl.num_of_collisions++;
 VAR_4->htbl->ctrl.num_of_valid_entries++;

 return VAR_9;

err_exit:
 FUNC_6(VAR_9, VAR_2, VAR_3);
free_send_info:
 FUNC_2(VAR_8);
 return ((void*)0);
}
