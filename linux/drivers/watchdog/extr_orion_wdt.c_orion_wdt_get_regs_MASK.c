
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct orion_watchdog {void* rstout_mask; void* rstout; void* reg; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_1__*,int,int ) ;
 void* FUNC_3 (struct platform_device*,int) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 void* FUNC_5 (struct platform_device*,int) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4,
         struct orion_watchdog *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct resource *VAR_7;

 VAR_7 = FUNC_6(VAR_4, VAR_3, 0);
 if (!VAR_7)
  return -VAR_0;
 VAR_5->reg = FUNC_2(&VAR_4->dev, VAR_7->start,
    FUNC_7(VAR_7));
 if (!VAR_5->reg)
  return -VAR_1;


 if (FUNC_4(VAR_6, "marvell,orion-wdt")) {

  VAR_5->rstout = FUNC_5(VAR_4, VAR_7->start &
             VAR_2);
  if (!VAR_5->rstout)
   return -VAR_0;

 } else if (FUNC_4(VAR_6, "marvell,armada-370-wdt") ||
     FUNC_4(VAR_6, "marvell,armada-xp-wdt")) {


  VAR_5->rstout = FUNC_3(VAR_4, 1);
  if (FUNC_0(VAR_5->rstout))
   return FUNC_1(VAR_5->rstout);

 } else if (FUNC_4(VAR_6, "marvell,armada-375-wdt") ||
     FUNC_4(VAR_6, "marvell,armada-380-wdt")) {


  VAR_5->rstout = FUNC_3(VAR_4, 1);
  if (FUNC_0(VAR_5->rstout))
   return FUNC_1(VAR_5->rstout);

  VAR_7 = FUNC_6(VAR_4, VAR_3, 2);
  if (!VAR_7)
   return -VAR_0;
  VAR_5->rstout_mask = FUNC_2(&VAR_4->dev, VAR_7->start,
      FUNC_7(VAR_7));
  if (!VAR_5->rstout_mask)
   return -VAR_1;

 } else {
  return -VAR_0;
 }

 return 0;
}
