
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct intel_pinctrl_soc_data {int uid; } ;
struct TYPE_7__ {int npins; int pins; int name; } ;
struct byt_gpio {int lock; int pctl_dev; TYPE_3__ pctl_desc; TYPE_2__* soc_data; struct platform_device* pdev; } ;
struct TYPE_5__ {int unique_id; } ;
struct acpi_device {TYPE_1__ pnp; } ;
struct TYPE_6__ {int npins; int pins; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct byt_gpio*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (struct byt_gpio*,struct intel_pinctrl_soc_data const*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 struct byt_gpio* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,TYPE_3__*,struct byt_gpio*) ;
 int FUNC_10 (struct platform_device*,struct byt_gpio*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 const struct intel_pinctrl_soc_data *VAR_5 = ((void*)0);
 const struct intel_pinctrl_soc_data **VAR_6;
 struct acpi_device *VAR_7;
 struct byt_gpio *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_0(&VAR_4->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = (const struct intel_pinctrl_soc_data **)FUNC_7(&VAR_4->dev);

 for (VAR_9 = 0; VAR_6[VAR_9]; VAR_9++) {
  if (!FUNC_13(VAR_7->pnp.unique_id, VAR_6[VAR_9]->uid)) {
   VAR_5 = VAR_6[VAR_9];
   break;
  }
 }

 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_8(&VAR_4->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->pdev = VAR_4;
 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (VAR_10) {
  FUNC_5(&VAR_4->dev, "failed to set soc data\n");
  return VAR_10;
 }

 VAR_8->pctl_desc = VAR_3;
 VAR_8->pctl_desc.name = FUNC_6(&VAR_4->dev);
 VAR_8->pctl_desc.pins = VAR_8->soc_data->pins;
 VAR_8->pctl_desc.npins = VAR_8->soc_data->npins;

 VAR_8->pctl_dev = FUNC_9(&VAR_4->dev, &VAR_8->pctl_desc, VAR_8);
 if (FUNC_1(VAR_8->pctl_dev)) {
  FUNC_5(&VAR_4->dev, "failed to register pinctrl driver\n");
  return FUNC_2(VAR_8->pctl_dev);
 }

 FUNC_12(&VAR_8->lock);

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_10(VAR_4, VAR_8);
 FUNC_11(&VAR_4->dev);

 return 0;
}
