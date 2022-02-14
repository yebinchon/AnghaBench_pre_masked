
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct resource {int flags; } ;
struct TYPE_3__ {int member_0; } ;
struct resource_win {struct resource res; int member_1; TYPE_1__ member_0; } ;
struct pnp_dev {int dev; int data; int capabilities; } ;
struct acpi_resource_vendor_typed {int dummy; } ;
struct acpi_resource_gpio {int shareable; int polarity; int triggering; } ;
struct acpi_resource_dma {int * channels; int transfer; int bus_master; int type; int channel_count; } ;
struct TYPE_4__ {struct acpi_resource_vendor_typed vendor_typed; struct acpi_resource_dma dma; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef int acpi_status ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_3 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_4 (struct acpi_resource*,int,struct resource*) ;
 int FUNC_5 (struct acpi_resource*,struct resource*) ;
 int FUNC_6 (struct acpi_resource*,struct resource*) ;
 scalar_t__ FUNC_7 (struct acpi_resource*,struct acpi_resource_gpio**) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_10 (struct pnp_dev*,int ,int) ;
 int FUNC_11 (struct pnp_dev*,int,int) ;
 int FUNC_12 (struct pnp_dev*,struct resource*) ;
 scalar_t__ FUNC_13 (struct pnp_dev*) ;
 int FUNC_14 (struct pnp_dev*,struct resource*) ;
 int FUNC_15 (struct pnp_dev*,struct acpi_resource_vendor_typed*) ;

__attribute__((used)) static acpi_status FUNC_16(struct acpi_resource *VAR_4,
           void *VAR_5)
{
 struct pnp_dev *VAR_6 = VAR_5;
 struct acpi_resource_dma *VAR_7;
 struct acpi_resource_vendor_typed *VAR_8;
 struct acpi_resource_gpio *VAR_9;
 struct resource_win VAR_10 = {{0}, 0};
 struct resource *VAR_11 = &VAR_10.res;
 int VAR_12, VAR_13;

 if (FUNC_2(VAR_4, &VAR_10)
     || FUNC_3(VAR_4, &VAR_10)) {
  FUNC_12(VAR_6, &VAR_10.res);
  return VAR_1;
 }

 VAR_11->flags = 0;
 if (FUNC_4(VAR_4, 0, VAR_11)) {
  FUNC_14(VAR_6, VAR_11);
  for (VAR_12 = 1; FUNC_4(VAR_4, VAR_12, VAR_11); VAR_12++)
   FUNC_14(VAR_6, VAR_11);

  if (VAR_12 > 1) {





   if (FUNC_13(VAR_6)) {
    FUNC_8(&VAR_6->dev,
      "multiple interrupts in _CRS descriptor; configuration can't be changed\n");
    VAR_6->capabilities &= ~VAR_3;
   }
  }
  return VAR_1;
 } else if (FUNC_7(VAR_4, &VAR_9)) {




  VAR_12 = FUNC_0(VAR_6->data, 0);
  if (VAR_12 >= 0) {
   VAR_13 = FUNC_1(VAR_9->triggering,
         VAR_9->polarity,
         VAR_9->shareable);
  } else {
   VAR_13 = VAR_2;
  }
  FUNC_11(VAR_6, VAR_12, VAR_13);
  return VAR_1;
 } else if (VAR_11->flags & VAR_2) {
  FUNC_11(VAR_6, 0, VAR_2);
  return VAR_1;
 }

 switch (VAR_4->type) {
 case 132:
 case 131:
 case 135:
  if (FUNC_6(VAR_4, VAR_11))
   FUNC_12(VAR_6, VAR_11);
  break;
 case 133:
 case 136:
  if (FUNC_5(VAR_4, VAR_11))
   FUNC_12(VAR_6, VAR_11);
  break;
 case 139:
  VAR_7 = &VAR_4->data.dma;
  if (VAR_7->channel_count > 0 && VAR_7->channels[0] != (u8) -1)
   VAR_13 = FUNC_9(VAR_6, VAR_7->type, VAR_7->bus_master,
       VAR_7->transfer);
  else
   VAR_13 = VAR_2;
  FUNC_10(VAR_6, VAR_7->channels[0], VAR_13);
  break;

 case 129:
 case 138:
  break;

 case 128:
  VAR_8 = &VAR_4->data.vendor_typed;
  FUNC_15(VAR_6, VAR_8);
  break;

 case 137:
  break;

 case 134:
  break;

 case 130:

  break;

 default:
  FUNC_8(&VAR_6->dev, "unknown resource type %d in _CRS\n",
    VAR_4->type);
  return VAR_0;
 }

 return VAR_1;
}
