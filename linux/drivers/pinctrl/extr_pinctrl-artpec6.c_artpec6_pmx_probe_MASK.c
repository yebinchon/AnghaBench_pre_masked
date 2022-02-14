
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct artpec6_pmx {int pctl; void* num_pin_groups; void* pin_groups; void* num_functions; void* functions; void* num_pins; void* pins; int base; int * dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (struct artpec6_pmx*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,struct resource*) ;
 struct artpec6_pmx* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int *,struct artpec6_pmx*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct artpec6_pmx*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct artpec6_pmx *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_7(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = &VAR_7->dev;

 VAR_9 = FUNC_9(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_6(&VAR_7->dev, VAR_9);

 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 FUNC_3(VAR_8);

 VAR_8->pins = VAR_5;
 VAR_8->num_pins = FUNC_0(VAR_5);
 VAR_8->functions = VAR_6;
 VAR_8->num_functions = FUNC_0(VAR_6);
 VAR_8->pin_groups = VAR_4;
 VAR_8->num_pin_groups = FUNC_0(VAR_4);
 VAR_8->pctl = FUNC_8(&VAR_3, &VAR_7->dev, VAR_8);

 if (FUNC_1(VAR_8->pctl)) {
  FUNC_4(&VAR_7->dev, "could not register pinctrl driver\n");
  return FUNC_2(VAR_8->pctl);
 }

 FUNC_10(VAR_7, VAR_8);

 FUNC_5(&VAR_7->dev, "initialised Axis ARTPEC-6 pinctrl driver\n");

 return 0;
}
