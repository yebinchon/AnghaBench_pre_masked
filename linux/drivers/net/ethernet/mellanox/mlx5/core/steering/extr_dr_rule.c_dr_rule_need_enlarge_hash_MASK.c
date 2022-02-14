
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste_htbl_ctrl {scalar_t__ num_of_collisions; scalar_t__ increase_threshold; scalar_t__ num_of_valid_entries; int may_grow; } ;
struct mlx5dr_ste_htbl {scalar_t__ chunk_size; struct mlx5dr_ste_htbl_ctrl ctrl; } ;
struct mlx5dr_domain_rx_tx {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_log_sw_icm_sz; } ;
struct mlx5dr_domain {TYPE_1__ info; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_ste_htbl *VAR_0,
          struct mlx5dr_domain *VAR_1,
          struct mlx5dr_domain_rx_tx *VAR_2)
{
 struct mlx5dr_ste_htbl_ctrl *VAR_3 = &VAR_0->ctrl;

 if (VAR_1->info.max_log_sw_icm_sz <= VAR_0->chunk_size)
  return 0;

 if (!VAR_3->may_grow)
  return 0;

 if (VAR_3->num_of_collisions >= VAR_3->increase_threshold &&
     (VAR_3->num_of_valid_entries - VAR_3->num_of_collisions) >= VAR_3->increase_threshold)
  return 1;

 return 0;
}
