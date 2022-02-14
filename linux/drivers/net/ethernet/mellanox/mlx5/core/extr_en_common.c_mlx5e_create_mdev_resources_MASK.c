
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tdn; int list_lock; int tirs_list; } ;
struct mlx5e_resources {int pdn; TYPE_1__ td; int mkey; int bfreg; } ;
struct mlx5_core_dev {struct mlx5e_resources mlx5e_res; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int *,int,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int *) ;
 int FUNC_7 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_8 (struct mlx5_core_dev*,int ,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct mlx5_core_dev *VAR_0)
{
 struct mlx5e_resources *VAR_1 = &VAR_0->mlx5e_res;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->pdn);
 if (VAR_2) {
  FUNC_7(VAR_0, "alloc pd failed, %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_0, &VAR_1->td.tdn);
 if (VAR_2) {
  FUNC_7(VAR_0, "alloc td failed, %d\n", VAR_2);
  goto err_dealloc_pd;
 }

 VAR_2 = FUNC_8(VAR_0, VAR_1->pdn, &VAR_1->mkey);
 if (VAR_2) {
  FUNC_7(VAR_0, "create mkey failed, %d\n", VAR_2);
  goto err_dealloc_transport_domain;
 }

 VAR_2 = FUNC_1(VAR_0, &VAR_1->bfreg, 0, 0);
 if (VAR_2) {
  FUNC_7(VAR_0, "alloc bfreg failed, %d\n", VAR_2);
  goto err_destroy_mkey;
 }

 FUNC_0(&VAR_0->mlx5e_res.td.tirs_list);
 FUNC_9(&VAR_0->mlx5e_res.td.list_lock);

 return 0;

err_destroy_mkey:
 FUNC_6(VAR_0, &VAR_1->mkey);
err_dealloc_transport_domain:
 FUNC_5(VAR_0, VAR_1->td.tdn);
err_dealloc_pd:
 FUNC_4(VAR_0, VAR_1->pdn);
 return VAR_2;
}
