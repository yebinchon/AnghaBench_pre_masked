
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_ste_htbl_ctrl {int may_grow; int increase_threshold; } ;
struct mlx5dr_ste_htbl {int chunk_size; struct mlx5dr_ste_htbl_ctrl ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_ste_htbl *VAR_1)
{
 struct mlx5dr_ste_htbl_ctrl *VAR_2 = &VAR_1->ctrl;
 int VAR_3;

 VAR_1->ctrl.may_grow = 1;

 if (VAR_1->chunk_size == VAR_0 - 1)
  VAR_1->ctrl.may_grow = 0;


 VAR_3 = FUNC_0(VAR_1->chunk_size);
 VAR_2->increase_threshold = (VAR_3 + 1) / 2;
}
