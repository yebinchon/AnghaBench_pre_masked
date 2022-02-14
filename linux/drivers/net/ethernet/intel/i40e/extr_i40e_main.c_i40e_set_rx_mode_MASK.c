
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {scalar_t__ current_netdev_flags; TYPE_2__* back; int flags; TYPE_1__* netdev; int mac_filter_hash_lock; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4)
{
 struct i40e_netdev_priv *VAR_5 = FUNC_2(VAR_4);
 struct i40e_vsi *VAR_6 = VAR_5->vsi;

 FUNC_4(&VAR_6->mac_filter_hash_lock);

 FUNC_1(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_2, VAR_3);

 FUNC_5(&VAR_6->mac_filter_hash_lock);


 if (VAR_6->current_netdev_flags != VAR_6->netdev->flags) {
  VAR_6->flags |= VAR_0;
  FUNC_3(VAR_1, VAR_6->back->state);
 }
}
