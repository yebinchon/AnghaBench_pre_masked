
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_stats {int dummy; } ;
struct r8192_priv {int irq; int gpio_polling_timer; int watch_dog_timer; TYPE_1__* ops; int stats; } ;
struct net_device {int irq; int name; } ;
struct TYPE_2__ {int (* init_adapter_variable ) (struct net_device*) ;int (* get_eeprom_size ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct r8192_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (int ,struct net_device*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_4 ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 struct r8192_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *,int ,int ) ;

__attribute__((used)) static short FUNC_18(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_14(VAR_5);

 FUNC_9(&VAR_6->stats, 0, sizeof(struct rt_stats));

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
 FUNC_6(VAR_5);
 FUNC_4(VAR_6);
 FUNC_5(VAR_5);
 VAR_6->ops->get_eeprom_size(VAR_5);
 VAR_6->ops->init_adapter_variable(VAR_5);
 FUNC_1(VAR_5);

 FUNC_12(VAR_5);

 FUNC_17(&VAR_6->watch_dog_timer, VAR_3, 0);

 FUNC_17(&VAR_6->gpio_polling_timer, VAR_4,
      0);

 FUNC_13(VAR_5);
 if (FUNC_11(VAR_5->irq, VAR_2, VAR_1, VAR_5->name, VAR_5)) {
  FUNC_10(VAR_5, "Error allocating IRQ %d", VAR_5->irq);
  return -1;
 }

 VAR_6->irq = VAR_5->irq;
 FUNC_0(VAR_0, "IRQ %d\n", VAR_5->irq);

 if (FUNC_7(VAR_5) != 0) {
  FUNC_10(VAR_5, "Endopoints initialization failed");
  FUNC_8(VAR_5->irq, VAR_5);
  return -1;
 }

 return 0;
}
