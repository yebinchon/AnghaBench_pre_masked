
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_vxlan_port {int hlist; int refcount; } ;
struct mlx5_vxlan {int sync_lock; int num_ports; int mdev; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_vxlan_port*) ;
 int FUNC_2 (int ,int ) ;
 struct mlx5_vxlan_port* FUNC_3 (struct mlx5_vxlan*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx5_vxlan *VAR_1, u16 VAR_2)
{
 struct mlx5_vxlan_port *VAR_3;
 bool VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_4(&VAR_1->sync_lock);

 FUNC_7(&VAR_1->lock);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_3) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }

 if (FUNC_6(&VAR_3->refcount)) {
  FUNC_0(&VAR_3->hlist);
  VAR_4 = 1;
 }

out_unlock:
 FUNC_8(&VAR_1->lock);

 if (VAR_4) {
  FUNC_2(VAR_1->mdev, VAR_2);
  FUNC_1(VAR_3);
  VAR_1->num_ports--;
 }

 FUNC_5(&VAR_1->sync_lock);

 return VAR_5;
}
