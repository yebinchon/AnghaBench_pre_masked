
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int owner; int * confops; int * pctlops; int name; } ;
struct da850_pupd_data {int pinctrl; TYPE_1__ desc; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct da850_pupd_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*,struct da850_pupd_data*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct da850_pupd_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct da850_pupd_data *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_6, VAR_2, 0);
 VAR_8->base = FUNC_4(VAR_7, VAR_9);
 if (FUNC_0(VAR_8->base)) {
  FUNC_2(VAR_7, "Could not map resource\n");
  return FUNC_1(VAR_8->base);
 }

 VAR_8->desc.name = FUNC_3(VAR_7);
 VAR_8->desc.pctlops = &VAR_5;
 VAR_8->desc.confops = &VAR_4;
 VAR_8->desc.owner = VAR_3;

 VAR_8->pinctrl = FUNC_6(VAR_7, &VAR_8->desc, VAR_8);
 if (FUNC_0(VAR_8->pinctrl)) {
  FUNC_2(VAR_7, "Failed to register pinctrl\n");
  return FUNC_1(VAR_8->pinctrl);
 }

 FUNC_8(VAR_6, VAR_8);

 return 0;
}
