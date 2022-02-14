
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int needs_free_netdev; int mtu; int priv_flags; int type; int * netdev_ops; scalar_t__ features; } ;
struct TYPE_2__ {int use_frag; int use_stx; int use_fcs; int link_select; } ;
struct cfspi {struct net_device* ndev; TYPE_1__ cfdev; int chead; int qhead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cfspi* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct cfspi *VAR_8 = FUNC_0(VAR_7);
 VAR_7->features = 0;
 VAR_7->netdev_ops = &VAR_6;
 VAR_7->type = VAR_0;
 VAR_7->flags = VAR_2 | VAR_4;
 VAR_7->priv_flags |= VAR_3;
 VAR_7->mtu = VAR_5;
 VAR_7->needs_free_netdev = 1;
 FUNC_1(&VAR_8->qhead);
 FUNC_1(&VAR_8->chead);
 VAR_8->cfdev.link_select = VAR_1;
 VAR_8->cfdev.use_frag = 0;
 VAR_8->cfdev.use_stx = 0;
 VAR_8->cfdev.use_fcs = 0;
 VAR_8->ndev = VAR_7;
}
