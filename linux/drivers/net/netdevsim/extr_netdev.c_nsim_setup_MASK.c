
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int features; int max_mtu; int hw_features; int flags; scalar_t__ tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_11)
{
 FUNC_1(VAR_11);
 FUNC_0(VAR_11);

 VAR_11->tx_queue_len = 0;
 VAR_11->flags |= VAR_3;
 VAR_11->flags &= ~VAR_2;
 VAR_11->priv_flags |= VAR_1 |
      VAR_4;
 VAR_11->features |= VAR_6 |
    VAR_9 |
    VAR_5 |
    VAR_7 |
    VAR_10;
 VAR_11->hw_features |= VAR_8;
 VAR_11->max_mtu = VAR_0;
}
