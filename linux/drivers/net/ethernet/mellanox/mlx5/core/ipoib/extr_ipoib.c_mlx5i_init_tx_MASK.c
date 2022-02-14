
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qpn; } ;
struct mlx5i_priv {TYPE_1__ qp; } ;
struct mlx5e_priv {int mdev; int ** tisn; struct mlx5i_priv* ppriv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_0)
{
 struct mlx5i_priv *VAR_1 = VAR_0->ppriv;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0->mdev, &VAR_1->qp);
 if (VAR_2) {
  FUNC_0(VAR_0->mdev, "create underlay QP failed, %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->mdev, VAR_1->qp.qpn, &VAR_0->tisn[0][0]);
 if (VAR_2) {
  FUNC_0(VAR_0->mdev, "create tis failed, %d\n", VAR_2);
  goto err_destroy_underlay_qp;
 }

 return 0;

err_destroy_underlay_qp:
 FUNC_3(VAR_0->mdev, &VAR_1->qp);
 return VAR_2;
}
