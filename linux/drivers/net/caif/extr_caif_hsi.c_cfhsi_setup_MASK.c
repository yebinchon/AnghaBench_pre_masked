
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int needs_free_netdev; int * netdev_ops; int priv_flags; int mtu; int type; scalar_t__ features; } ;
struct TYPE_2__ {int use_frag; int use_stx; int use_fcs; int link_select; } ;
struct cfhsi {int cfg; struct net_device* ndev; TYPE_1__ cfdev; int * qhead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cfhsi* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9)
{
 int VAR_10;
 struct cfhsi *VAR_11 = FUNC_0(VAR_9);
 VAR_9->features = 0;
 VAR_9->type = VAR_0;
 VAR_9->flags = VAR_6 | VAR_4;
 VAR_9->mtu = VAR_2;
 VAR_9->priv_flags |= VAR_5;
 VAR_9->needs_free_netdev = 1;
 VAR_9->netdev_ops = &VAR_7;
 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10)
  FUNC_1(&VAR_11->qhead[VAR_10]);
 VAR_11->cfdev.link_select = VAR_1;
 VAR_11->cfdev.use_frag = 0;
 VAR_11->cfdev.use_stx = 0;
 VAR_11->cfdev.use_fcs = 0;
 VAR_11->ndev = VAR_9;
 VAR_11->cfg = VAR_8;
}
