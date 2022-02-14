
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
typedef int parent_id ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
      struct netdev_phys_item_id *VAR_1)
{
 struct mlx5e_priv *VAR_2;
 u64 VAR_3;

 VAR_2 = FUNC_2(VAR_0);

 VAR_3 = FUNC_1(VAR_2->mdev);
 VAR_1->id_len = sizeof(VAR_3);
 FUNC_0(VAR_1->id, &VAR_3, sizeof(VAR_3));
}
