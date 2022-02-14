
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t1_rx_mode {struct net_device* dev; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct cmac {TYPE_2__* ops; } ;
struct adapter {TYPE_1__* port; } ;
struct TYPE_4__ {int (* set_rx_mode ) (struct cmac*,struct t1_rx_mode*) ;} ;
struct TYPE_3__ {struct cmac* mac; } ;


 int FUNC_0 (struct cmac*,struct t1_rx_mode*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->ml_priv;
 struct cmac *VAR_2 = VAR_1->port[VAR_0->if_port].mac;
 struct t1_rx_mode VAR_3;

 VAR_3.dev = VAR_0;
 VAR_2->ops->set_rx_mode(VAR_2, &VAR_3);
}
