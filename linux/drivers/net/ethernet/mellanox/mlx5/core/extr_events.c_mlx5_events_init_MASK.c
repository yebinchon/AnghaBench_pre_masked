
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_events {int pcie_core_work; int wq; struct mlx5_core_dev* dev; int nh; } ;
struct TYPE_2__ {struct mlx5_events* events; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 struct mlx5_events* FUNC_3 (int,int ) ;
 int VAR_2 ;

int FUNC_4(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_events *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);

 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->nh);
 VAR_4->dev = VAR_3;
 VAR_3->priv.events = VAR_4;
 VAR_4->wq = FUNC_2("mlx5_events");
 if (!VAR_4->wq)
  return -VAR_0;
 FUNC_1(&VAR_4->pcie_core_work, VAR_2);

 return 0;
}
