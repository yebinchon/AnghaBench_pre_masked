
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct net_device {int base_addr; int irq; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct resource*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct net_device *VAR_6;
 struct resource *VAR_7, *VAR_8;
 resource_size_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_5, VAR_3, 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(&VAR_5->dev, "no IRQ specified?\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_4, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(&VAR_5->dev, "no memory address specified?\n");
  return -VAR_2;
 }
 VAR_9 = FUNC_9(VAR_7);
 if (!FUNC_8(VAR_7->start, VAR_9, VAR_5->name))
  return -VAR_0;

 VAR_6 = FUNC_1(0);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_7->start, VAR_9);
  return -VAR_1;
 }

 FUNC_0(VAR_6, &VAR_5->dev);
 FUNC_6(VAR_5, VAR_6);

 VAR_6->irq = VAR_8->start;
 VAR_6->base_addr = VAR_7->start;

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10) {
  FUNC_7(VAR_7->start, VAR_9);
  FUNC_3(VAR_6);
  return VAR_10;
 }
 return 0;
}
