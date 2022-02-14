
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_features; int hw_enc_features; int vlan_features; int needs_free_netdev; scalar_t__ max_mtu; scalar_t__ min_mtu; int priv_destructor; int priv_flags; int flags; int tx_queue_len; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9)
{

 VAR_9->netdev_ops = &VAR_8;


 FUNC_1(VAR_9);
 VAR_9->tx_queue_len = VAR_6;

 VAR_9->features |= VAR_0;
 VAR_9->hw_features |= VAR_9->features;
 VAR_9->hw_enc_features |= VAR_9->features;
 VAR_9->vlan_features |= VAR_0 & ~(VAR_4 |
            VAR_5);

 VAR_9->flags |= VAR_2;
 VAR_9->flags &= ~VAR_1;
 VAR_9->priv_flags &= ~VAR_3;
 FUNC_2(VAR_9);
 FUNC_0(VAR_9);
 VAR_9->needs_free_netdev = 1;
 VAR_9->priv_destructor = VAR_7;

 VAR_9->min_mtu = 0;
 VAR_9->max_mtu = 0;
}
