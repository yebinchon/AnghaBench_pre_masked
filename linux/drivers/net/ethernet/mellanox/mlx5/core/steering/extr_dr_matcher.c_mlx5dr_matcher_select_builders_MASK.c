
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_matcher_rx_tx {int num_of_builders; int num_of_builders4; int ste_builder4; int ste_builder; int num_of_builders6; int ste_builder6; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct TYPE_2__ {int dmn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct mlx5dr_matcher *VAR_1,
       struct mlx5dr_matcher_rx_tx *VAR_2,
       bool VAR_3)
{
 if (VAR_3) {
  VAR_2->ste_builder = VAR_2->ste_builder6;
  VAR_2->num_of_builders = VAR_2->num_of_builders6;
 } else {
  VAR_2->ste_builder = VAR_2->ste_builder4;
  VAR_2->num_of_builders = VAR_2->num_of_builders4;
 }

 if (!VAR_2->num_of_builders) {
  FUNC_0(VAR_1->tbl->dmn,
      "Rule not supported on this matcher due to IP related fields\n");
  return -VAR_0;
 }

 return 0;
}
