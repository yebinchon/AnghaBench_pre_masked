
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_vxlan_port {int hlist; int refcount; int udp_port; } ;
struct mlx5_vxlan {scalar_t__ num_ports; int sync_lock; int mdev; int lock; int htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 struct mlx5_vxlan_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct mlx5_vxlan_port* FUNC_5 (struct mlx5_vxlan*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct mlx5_vxlan *VAR_3, u16 VAR_4)
{
 struct mlx5_vxlan_port *VAR_5;
 int VAR_6 = -VAR_1;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_9(&VAR_5->refcount);
  return 0;
 }

 FUNC_7(&VAR_3->sync_lock);
 if (VAR_3->num_ports >= FUNC_6(VAR_3->mdev)) {
  FUNC_2(VAR_3->mdev,
          "UDP port (%d) not offloaded, max number of UDP ports (%d) are already offloaded\n",
          VAR_4, FUNC_6(VAR_3->mdev));
  VAR_6 = -VAR_1;
  goto unlock;
 }

 VAR_6 = FUNC_3(VAR_3->mdev, VAR_4);
 if (VAR_6)
  goto unlock;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err_delete_port;
 }

 VAR_5->udp_port = VAR_4;
 FUNC_10(&VAR_5->refcount, 1);

 FUNC_11(&VAR_3->lock);
 FUNC_0(VAR_3->htable, &VAR_5->hlist, VAR_4);
 FUNC_12(&VAR_3->lock);

 VAR_3->num_ports++;
 FUNC_8(&VAR_3->sync_lock);
 return 0;

err_delete_port:
 FUNC_4(VAR_3->mdev, VAR_4);

unlock:
 FUNC_8(&VAR_3->sync_lock);
 return VAR_6;
}
