
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int qpn; } ;
struct mlx5i_priv {TYPE_2__ qp; } ;
struct mlx5e_priv {int state_lock; int state; int ** tisn; TYPE_1__* profile; int channels; struct mlx5_core_dev* mdev; struct mlx5i_priv* ppriv; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {int (* update_rx ) (struct mlx5e_priv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ) ;
 int FUNC_6 (struct mlx5e_priv*,int *) ;
 int FUNC_7 (struct mlx5_core_dev*,int ,int *) ;
 struct mlx5e_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct mlx5e_priv*) ;
 int FUNC_10 (struct mlx5e_priv*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_8(VAR_1);
 struct mlx5i_priv *VAR_3 = VAR_2->ppriv;
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;
 int VAR_5;

 FUNC_11(&VAR_2->state_lock);

 FUNC_13(VAR_0, &VAR_2->state);

 VAR_5 = FUNC_9(VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_4, "prepare child underlay qp state failed, %d\n", VAR_5);
  goto err_release_lock;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_3->qp.qpn);
 if (VAR_5) {
  FUNC_1(VAR_4, "attach child underlay qp to ft failed, %d\n", VAR_5);
  goto err_unint_underlay_qp;
 }

 VAR_5 = FUNC_7(VAR_4, VAR_3->qp.qpn, &VAR_2->tisn[0][0]);
 if (VAR_5) {
  FUNC_1(VAR_4, "create child tis failed, %d\n", VAR_5);
  goto err_remove_rx_uderlay_qp;
 }

 VAR_5 = FUNC_6(VAR_2, &VAR_2->channels);
 if (VAR_5) {
  FUNC_1(VAR_4, "opening child channels failed, %d\n", VAR_5);
  goto err_clear_state_opened_flag;
 }
 VAR_2->profile->update_rx(VAR_2);
 FUNC_4(VAR_2);
 FUNC_12(&VAR_2->state_lock);

 return 0;

err_clear_state_opened_flag:
 FUNC_5(VAR_4, VAR_2->tisn[0][0]);
err_remove_rx_uderlay_qp:
 FUNC_3(VAR_4, VAR_3->qp.qpn);
err_unint_underlay_qp:
 FUNC_10(VAR_2);
err_release_lock:
 FUNC_0(VAR_0, &VAR_2->state);
 FUNC_12(&VAR_2->state_lock);
 return VAR_5;
}
