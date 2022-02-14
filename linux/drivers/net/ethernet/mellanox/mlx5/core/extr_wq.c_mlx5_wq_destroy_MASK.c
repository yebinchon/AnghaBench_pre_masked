
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wq_ctrl {int db; int mdev; int buf; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct mlx5_wq_ctrl *VAR_0)
{
 FUNC_1(VAR_0->mdev, &VAR_0->buf);
 FUNC_0(VAR_0->mdev, &VAR_0->db);
}
