
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_resource {int dummy; } ;
struct platform_device {scalar_t__ id; int dev; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct irq_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (struct irq_domain*,struct device*,int) ;
 int FUNC_3 (struct device*,struct ti_sci_resource*) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device*) ;

int FUNC_6(struct device *VAR_2,
          struct ti_sci_resource *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_5(VAR_2);
 struct irq_domain *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_4->id < 0)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (VAR_7 <= 0)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_2, "Failed to allocate IRQs %d\n", VAR_6);
  goto cleanup;
 }

 return 0;

cleanup:
 FUNC_4(&VAR_4->dev);
 return VAR_6;
}
