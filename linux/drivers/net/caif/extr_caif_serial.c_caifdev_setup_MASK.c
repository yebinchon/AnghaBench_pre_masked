
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_frag; int use_fcs; int use_stx; int link_select; } ;
struct ser_device {struct net_device* dev; TYPE_1__ common; int head; } ;
struct net_device {int flags; int needs_free_netdev; int priv_flags; int mtu; int type; int * netdev_ops; scalar_t__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ser_device* FUNC_0 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9)
{
 struct ser_device *VAR_10 = FUNC_0(VAR_9);

 VAR_9->features = 0;
 VAR_9->netdev_ops = &VAR_6;
 VAR_9->type = VAR_0;
 VAR_9->flags = VAR_5 | VAR_3;
 VAR_9->mtu = VAR_2;
 VAR_9->priv_flags |= VAR_4;
 VAR_9->needs_free_netdev = 1;
 FUNC_1(&VAR_10->head);
 VAR_10->common.link_select = VAR_1;
 VAR_10->common.use_frag = 1;
 VAR_10->common.use_stx = VAR_8;
 VAR_10->common.use_fcs = VAR_7;
 VAR_10->dev = VAR_9;
}
