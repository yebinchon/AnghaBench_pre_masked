
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int * device; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct net_device {int base_addr; int irq; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct sonic_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct net_device*) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct net_device *VAR_5;
 struct sonic_local *VAR_6;
 struct resource *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_6(VAR_4, VAR_2, 0);
 if (!VAR_7)
  return -VAR_0;

 VAR_5 = FUNC_1(sizeof(struct sonic_local));
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_5);
 VAR_6->device = &VAR_4->dev;
 FUNC_0(VAR_5, &VAR_4->dev);
 FUNC_7(VAR_4, VAR_5);

 FUNC_3(VAR_5);

 VAR_5->base_addr = VAR_7->start;
 VAR_5->irq = FUNC_5(VAR_4, 0);
 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8)
  goto out;

 FUNC_8("SONIC ethernet @%08lx, MAC %pM, IRQ %d\n",
  VAR_5->base_addr, VAR_5->dev_addr, VAR_5->irq);

 FUNC_11(VAR_5);

 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8)
  goto out1;

 return 0;

out1:
 FUNC_10(VAR_5->base_addr, VAR_3);
out:
 FUNC_2(VAR_5);

 return VAR_8;
}
