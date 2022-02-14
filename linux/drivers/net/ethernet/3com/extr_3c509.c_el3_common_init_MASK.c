
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mem_start; int if_port; int irq; int dev_addr; int base_addr; int name; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct el3_private {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct el3_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6)
{
 struct el3_private *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;
 const char *VAR_9[] = {"10baseT", "AUI", "undefined", "BNC"};

 FUNC_5(&VAR_7->lock);

 if (VAR_6->mem_start & 0x05) {
  VAR_6->if_port = (VAR_6->mem_start & 0x0f);
 } else {

  VAR_6->if_port |= (VAR_6->mem_start & 0x08);
 }


 VAR_6->netdev_ops = &VAR_4;
 VAR_6->watchdog_timeo = VAR_1;
 VAR_6->ethtool_ops = &VAR_3;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8) {
  FUNC_1("Failed to register 3c5x9 at %#3.3lx, IRQ %d.\n",
   VAR_6->base_addr, VAR_6->irq);
  FUNC_4(VAR_6->base_addr, VAR_0);
  return VAR_8;
 }

 FUNC_2("%s: 3c5x9 found at %#3.3lx, %s port, address %pM, IRQ %d.\n",
        VAR_6->name, VAR_6->base_addr, VAR_9[(VAR_6->if_port & 0x03)],
        VAR_6->dev_addr, VAR_6->irq);

 if (VAR_2 > 0)
  FUNC_2("%s", VAR_5);
 return 0;

}
