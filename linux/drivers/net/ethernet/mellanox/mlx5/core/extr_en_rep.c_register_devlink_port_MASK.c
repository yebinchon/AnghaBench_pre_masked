
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_phys_item_id {int id_len; int * id; } ;
struct mlx5e_rep_priv {int dl_port; struct mlx5_eswitch_rep* rep; int netdev; } ;
struct mlx5_eswitch_rep {unsigned int vport; } ;
struct TYPE_3__ {int eswitch; } ;
struct mlx5_core_dev {TYPE_2__* pdev; TYPE_1__ priv; } ;
struct devlink {int dummy; } ;
struct TYPE_4__ {int devfn; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int) ;
 int FUNC_3 (int *,int ,int ,int,int ,int *,int ) ;
 int FUNC_4 (struct devlink*,int *,unsigned int) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,struct netdev_phys_item_id*) ;
 struct devlink* FUNC_8 (struct mlx5_core_dev*) ;
 unsigned int FUNC_9 (struct mlx5_core_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_3,
     struct mlx5e_rep_priv *VAR_4)
{
 struct devlink *VAR_5 = FUNC_8(VAR_3);
 struct mlx5_eswitch_rep *VAR_6 = VAR_4->rep;
 struct netdev_phys_item_id VAR_7 = {};
 unsigned int VAR_8 = 0;

 if (!FUNC_5(VAR_3, VAR_4))
  return 0;

 FUNC_7(VAR_4->netdev, &VAR_7);

 if (VAR_6->vport == VAR_2) {
  FUNC_3(&VAR_4->dl_port,
           VAR_0,
           FUNC_0(VAR_3->pdev->devfn), 0, 0,
           &VAR_7.id[0], VAR_7.id_len);
  VAR_8 = FUNC_9(VAR_3, VAR_6->vport);
 } else if (VAR_6->vport == VAR_1) {
  FUNC_1(&VAR_4->dl_port,
           &VAR_7.id[0], VAR_7.id_len,
           VAR_3->pdev->devfn);
  VAR_8 = VAR_6->vport;
 } else if (FUNC_6(VAR_3->priv.eswitch,
         VAR_4->rep->vport)) {
  FUNC_2(&VAR_4->dl_port,
           &VAR_7.id[0], VAR_7.id_len,
           VAR_3->pdev->devfn,
           VAR_6->vport - 1);
  VAR_8 = FUNC_9(VAR_3, VAR_6->vport);
 }

 return FUNC_4(VAR_5, &VAR_4->dl_port, VAR_8);
}
