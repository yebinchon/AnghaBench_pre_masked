
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_dev {int * fdb_head; int * hash_lock; int gro_cells; struct net_device* dev; int age_timer; int next; } ;
struct net_device {int needs_free_netdev; int features; int vlan_features; int hw_features; int max_mtu; int min_mtu; int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net_device*,int *) ;
 int VAR_9 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,struct net_device*) ;
 struct vxlan_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_12)
{
 struct vxlan_dev *VAR_13 = FUNC_6(VAR_12);
 unsigned int VAR_14;

 FUNC_3(VAR_12);
 FUNC_4(VAR_12);

 VAR_12->needs_free_netdev = 1;
 FUNC_2(VAR_12, &VAR_11);

 VAR_12->features |= VAR_6;
 VAR_12->features |= VAR_8 | VAR_5;
 VAR_12->features |= VAR_7;
 VAR_12->features |= VAR_4;

 VAR_12->vlan_features = VAR_12->features;
 VAR_12->hw_features |= VAR_8 | VAR_5 | VAR_7;
 VAR_12->hw_features |= VAR_4;
 FUNC_7(VAR_12);
 VAR_12->priv_flags |= VAR_3;


 VAR_12->min_mtu = VAR_1;
 VAR_12->max_mtu = VAR_0;

 FUNC_1(&VAR_13->next);

 FUNC_9(&VAR_13->age_timer, VAR_10, VAR_9);

 VAR_13->dev = VAR_12;

 FUNC_5(&VAR_13->gro_cells, VAR_12);

 for (VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14) {
  FUNC_8(&VAR_13->hash_lock[VAR_14]);
  FUNC_0(&VAR_13->fdb_head[VAR_14]);
 }
}
