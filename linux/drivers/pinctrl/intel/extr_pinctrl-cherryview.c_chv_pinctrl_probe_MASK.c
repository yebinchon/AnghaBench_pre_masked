
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_7__ {int npins; int pins; int name; } ;
struct chv_pinctrl {TYPE_4__* community; int pctldev; TYPE_2__ pctldesc; int regs; int saved_pin_context; int * dev; } ;
struct TYPE_6__ {int unique_id; } ;
struct acpi_device {int handle; TYPE_1__ pnp; } ;
typedef int acpi_status ;
struct TYPE_8__ {int acpi_space_id; int npins; int pins; int uid; } ;


 struct acpi_device* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *,struct chv_pinctrl*) ;
 TYPE_4__** VAR_3 ;
 int FUNC_6 (struct chv_pinctrl*,int) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int,int ) ;
 struct chv_pinctrl* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,TYPE_2__*,struct chv_pinctrl*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct chv_pinctrl*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct chv_pinctrl *VAR_7;
 struct acpi_device *VAR_8;
 acpi_status VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_0(&VAR_6->dev);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_10(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_3); VAR_12++)
  if (!FUNC_15(VAR_8->pnp.unique_id, VAR_3[VAR_12]->uid)) {
   VAR_7->community = VAR_3[VAR_12];
   break;
  }
 if (VAR_12 == FUNC_2(VAR_3))
  return -VAR_0;

 VAR_7->dev = &VAR_6->dev;
 VAR_7->regs = FUNC_12(VAR_6, 0);
 if (FUNC_3(VAR_7->regs))
  return FUNC_4(VAR_7->regs);

 VAR_11 = FUNC_13(VAR_6, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7->pctldesc = VAR_4;
 VAR_7->pctldesc.name = FUNC_8(&VAR_6->dev);
 VAR_7->pctldesc.pins = VAR_7->community->pins;
 VAR_7->pctldesc.npins = VAR_7->community->npins;

 VAR_7->pctldev = FUNC_11(&VAR_6->dev, &VAR_7->pctldesc,
            VAR_7);
 if (FUNC_3(VAR_7->pctldev)) {
  FUNC_7(&VAR_6->dev, "failed to register pinctrl driver\n");
  return FUNC_4(VAR_7->pctldev);
 }

 VAR_10 = FUNC_6(VAR_7, VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_5(VAR_8->handle,
     VAR_7->community->acpi_space_id,
     VAR_5,
     ((void*)0), VAR_7);
 if (FUNC_1(VAR_9))
  FUNC_7(&VAR_6->dev, "failed to install ACPI addr space handler\n");

 FUNC_14(VAR_6, VAR_7);

 return 0;
}
