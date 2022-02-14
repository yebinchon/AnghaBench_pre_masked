
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {TYPE_1__* netdev; int mdev; struct mlx5e_ipsec* ipsec; } ;
struct mlx5e_ipsec {int no_trailer; int wq; struct mlx5e_priv* en_priv; int halloc; int sadb_rx_lock; int sadb_rx; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5e_ipsec*) ;
 struct mlx5e_ipsec* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx5e_priv *VAR_3)
{
 struct mlx5e_ipsec *VAR_4 = ((void*)0);

 if (!FUNC_0(VAR_3->mdev)) {
  FUNC_7(VAR_3->netdev, "Not an IPSec offload device\n");
  return 0;
 }

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_4->sadb_rx);
 FUNC_8(&VAR_4->sadb_rx_lock);
 FUNC_3(&VAR_4->halloc);
 VAR_4->en_priv = VAR_3;
 VAR_4->en_priv->ipsec = VAR_4;
 VAR_4->no_trailer = !!(FUNC_6(VAR_3->mdev) &
          VAR_2);
 VAR_4->wq = FUNC_1("mlx5e_ipsec: %s", 0,
         VAR_3->netdev->name);
 if (!VAR_4->wq) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }
 FUNC_7(VAR_3->netdev, "IPSec attached to netdevice\n");
 return 0;
}
