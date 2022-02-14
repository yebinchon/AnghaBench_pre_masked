
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct brcmstb_reset {TYPE_1__ rcdev; int base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct brcmstb_reset*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct brcmstb_reset* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct resource*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct brcmstb_reset *VAR_9;
 struct resource *VAR_10;

 VAR_9 = FUNC_7(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_7, VAR_3, 0);
 if (!FUNC_1(VAR_10->start, VAR_4) ||
     !FUNC_1(FUNC_10(VAR_10), VAR_4)) {
  FUNC_4(VAR_8, "incorrect register range\n");
  return -VAR_0;
 }

 VAR_9->base = FUNC_6(VAR_8, VAR_10);
 if (FUNC_2(VAR_9->base))
  return FUNC_3(VAR_9->base);

 FUNC_5(VAR_8, VAR_9);

 VAR_9->rcdev.owner = VAR_5;
 VAR_9->rcdev.nr_resets = FUNC_0(FUNC_10(VAR_10),
         VAR_4) * 32;
 VAR_9->rcdev.ops = &VAR_6;
 VAR_9->rcdev.of_node = VAR_8->of_node;


 return FUNC_8(VAR_8, &VAR_9->rcdev);
}
