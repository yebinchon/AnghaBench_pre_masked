
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ingenic_ecc {struct device* dev; int lock; int clk; TYPE_1__* ops; int base; } ;
struct TYPE_2__ {int (* disable ) (struct ingenic_ecc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct ingenic_ecc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct ingenic_ecc*) ;
 int FUNC_10 (struct ingenic_ecc*) ;

int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct ingenic_ecc *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_6(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->ops = FUNC_3(VAR_5);
 if (!VAR_6->ops)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_4, VAR_3, 0);
 VAR_6->base = FUNC_5(VAR_5, VAR_7);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->ops->disable(VAR_6);

 VAR_6->clk = FUNC_4(VAR_5, ((void*)0));
 if (FUNC_0(VAR_6->clk)) {
  FUNC_2(VAR_5, "failed to get clock: %ld\n", FUNC_1(VAR_6->clk));
  return FUNC_1(VAR_6->clk);
 }

 FUNC_7(&VAR_6->lock);

 VAR_6->dev = VAR_5;
 FUNC_9(VAR_4, VAR_6);

 return 0;
}
