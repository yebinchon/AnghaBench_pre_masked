
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct pci_dev {scalar_t__ vendor; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct acpi_device {int dummy; } ;
struct TYPE_14__ {int (* get_brightness ) (TYPE_2__*) ;} ;
struct TYPE_17__ {TYPE_10__ backlight_ops; int iolen; int iostart; int (* set_brightness ) (int) ;} ;
struct TYPE_15__ {int brightness; } ;
struct TYPE_16__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* FUNC_2 (char*,int *,int *,TYPE_10__*,struct backlight_properties*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_5__* VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 TYPE_5__ VAR_8 ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(struct acpi_device *VAR_9)
{
 struct backlight_properties VAR_10;
 struct pci_dev *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(0, 0, 0);

 if (!VAR_11) {
  FUNC_7("unable to find PCI host\n");
  return -VAR_1;
 }

 if (VAR_11->vendor == VAR_3)
  VAR_6 = &VAR_7;
 else if (VAR_11->vendor == VAR_4)
  VAR_6 = &VAR_8;

 FUNC_5(VAR_11);

 if (!VAR_6) {
  FUNC_7("unknown hardware\n");
  return -VAR_1;
 }



 VAR_12 = VAR_6->backlight_ops.get_brightness(((void*)0));

 if (!VAR_12) {
  VAR_6->set_brightness(1);
  if (!VAR_6->backlight_ops.get_brightness(((void*)0)))
   return -VAR_1;

  VAR_6->set_brightness(0);
 }

 if (!FUNC_9(VAR_6->iostart, VAR_6->iolen,
       "Apple backlight"))
  return -VAR_2;

 FUNC_4(&VAR_10, 0, sizeof(struct backlight_properties));
 VAR_10.type = VAR_0;
 VAR_10.max_brightness = 15;
 VAR_5 = FUNC_2("apple_backlight",
      ((void*)0), ((void*)0), &VAR_6->backlight_ops, &VAR_10);

 if (FUNC_0(VAR_5)) {
  FUNC_8(VAR_6->iostart, VAR_6->iolen);
  return FUNC_1(VAR_5);
 }

 VAR_5->props.brightness =
  VAR_6->backlight_ops.get_brightness(VAR_5);
 FUNC_3(VAR_5);

 return 0;
}
