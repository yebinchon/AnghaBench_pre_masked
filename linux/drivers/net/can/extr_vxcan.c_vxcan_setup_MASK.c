
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxcan_priv {int dummy; } ;
struct net_device {int flags; int needs_free_netdev; scalar_t__ ml_priv; int * netdev_ops; scalar_t__ tx_queue_len; scalar_t__ addr_len; scalar_t__ hard_header_len; int mtu; int type; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 VAR_6->type = VAR_0;
 VAR_6->mtu = VAR_1;
 VAR_6->hard_header_len = 0;
 VAR_6->addr_len = 0;
 VAR_6->tx_queue_len = 0;
 VAR_6->flags = (VAR_3|VAR_2);
 VAR_6->netdev_ops = &VAR_5;
 VAR_6->needs_free_netdev = 1;
 VAR_6->ml_priv = FUNC_1(VAR_6) + FUNC_0(sizeof(struct vxcan_priv), VAR_4);
}
