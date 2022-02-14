
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int wq_name; } ;
struct mlx5_core_dev {int device; struct mlx5_cmd cmd; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_cmd *VAR_1 = &VAR_0->cmd;

 FUNC_1(VAR_1->wq_name, sizeof(VAR_1->wq_name), "mlx5_cmd_%s",
   FUNC_0(VAR_0->device));
}
