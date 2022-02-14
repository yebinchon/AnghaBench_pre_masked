
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slvl_device {TYPE_1__* chan; } ;
struct net_device {int base_addr; int irq; int * netdev_ops; } ;
struct TYPE_4__ {int xmit; int attach; } ;
struct TYPE_3__ {struct net_device* netdevice; } ;


 struct net_device* FUNC_0 (struct slvl_device*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct slvl_device *VAR_3, int VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  return -1;

 FUNC_1(VAR_6)->attach = VAR_0;
 FUNC_1(VAR_6)->xmit = VAR_2;
 VAR_6->netdev_ops = &VAR_1;
 VAR_6->base_addr = VAR_4;
 VAR_6->irq = VAR_5;

 if (FUNC_4(VAR_6)) {
  FUNC_3("unable to register HDLC device\n");
  FUNC_2(VAR_6);
  return -1;
 }

 VAR_3->chan->netdevice = VAR_6;
 return 0;
}
