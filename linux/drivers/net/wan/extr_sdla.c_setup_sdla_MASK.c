
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int type; int mtu; scalar_t__ addr_len; scalar_t__ hard_header_len; scalar_t__ flags; int * netdev_ops; } ;
struct TYPE_2__ {int expires; } ;
struct frad_local {TYPE_1__ timer; struct net_device* dev; int dlci_conf; int deassoc; int assoc; int deactivate; int activate; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8)
{
 struct frad_local *VAR_9 = FUNC_1(VAR_8);

 FUNC_0(VAR_8);

 VAR_8->netdev_ops = &VAR_6;
 VAR_8->flags = 0;
 VAR_8->type = 0xFFFF;
 VAR_8->hard_header_len = 0;
 VAR_8->addr_len = 0;
 VAR_8->mtu = VAR_0;

 VAR_9->activate = VAR_1;
 VAR_9->deactivate = VAR_3;
 VAR_9->assoc = VAR_2;
 VAR_9->deassoc = VAR_4;
 VAR_9->dlci_conf = VAR_5;
 VAR_9->dev = VAR_8;

 FUNC_2(&VAR_9->timer, VAR_7, 0);
 VAR_9->timer.expires = 1;
}
