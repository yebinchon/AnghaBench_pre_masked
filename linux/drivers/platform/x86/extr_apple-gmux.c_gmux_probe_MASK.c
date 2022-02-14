
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct pnp_device_id {int dummy; } ;
struct pnp_dev {int dev; } ;
struct backlight_properties {scalar_t__ max_brightness; int type; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct apple_gmux_data {scalar_t__ iostart; scalar_t__ iolen; int indexed; int gpe; int external_switchable; int dhandle; int powerchange_done; int power_state; struct backlight_device* bdev; int index_lock; } ;
typedef int props ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct backlight_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_18 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,int *,unsigned long long*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *,struct pnp_dev*) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 struct apple_gmux_data* VAR_19 ;
 struct backlight_device* FUNC_14 (char*,int *,struct apple_gmux_data*,int *,struct backlight_properties*) ;
 int FUNC_15 (struct backlight_device*) ;
 int FUNC_16 (struct backlight_device*) ;
 int FUNC_17 (int *,int *,int *,int ) ;
 int FUNC_18 (int *) ;
 int VAR_20 ;
 int FUNC_19 (struct apple_gmux_data*) ;
 int FUNC_20 (struct apple_gmux_data*) ;
 int FUNC_21 (struct backlight_device*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_22 (struct apple_gmux_data*) ;
 int VAR_23 ;
 void* FUNC_23 (struct apple_gmux_data*,int ) ;
 int FUNC_24 (struct apple_gmux_data*,int ) ;
 int FUNC_25 (struct apple_gmux_data*) ;
 int FUNC_26 (struct apple_gmux_data*,int ,int) ;
 int FUNC_27 (int *) ;
 int VAR_24 ;
 int FUNC_28 (struct apple_gmux_data*) ;
 struct apple_gmux_data* FUNC_29 (int,int ) ;
 int FUNC_30 (struct backlight_properties*,int ,int) ;
 int FUNC_31 (int *) ;
 int VAR_25 ;
 struct resource* FUNC_32 (struct pnp_dev*,int ,int ) ;
 int FUNC_33 (struct pnp_dev*,struct apple_gmux_data*) ;
 int FUNC_34 (char*,...) ;
 int FUNC_35 (char*,...) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (scalar_t__,scalar_t__) ;
 int FUNC_38 (scalar_t__,scalar_t__,char*) ;
 int FUNC_39 (int *,int ) ;

__attribute__((used)) static int FUNC_40(struct pnp_dev *VAR_26, const struct pnp_device_id *VAR_27)
{
 struct apple_gmux_data *VAR_28;
 struct resource *VAR_29;
 struct backlight_properties VAR_30;
 struct backlight_device *VAR_31;
 u8 VAR_32, VAR_33, VAR_34;
 int VAR_35 = -VAR_5;
 acpi_status VAR_36;
 unsigned long long VAR_37;

 if (VAR_19)
  return -VAR_2;

 VAR_28 = FUNC_29(sizeof(*VAR_28), VAR_6);
 if (!VAR_28)
  return -VAR_4;
 FUNC_33(VAR_26, VAR_28);

 VAR_29 = FUNC_32(VAR_26, VAR_14, 0);
 if (!VAR_29) {
  FUNC_34("Failed to find gmux I/O resource\n");
  goto err_free;
 }

 VAR_28->iostart = VAR_29->start;
 VAR_28->iolen = VAR_29->end - VAR_29->start;

 if (VAR_28->iolen < VAR_8) {
  FUNC_34("gmux I/O region too small (%lu < %u)\n",
         VAR_28->iolen, VAR_8);
  goto err_free;
 }

 if (!FUNC_38(VAR_28->iostart, VAR_28->iolen,
       "Apple gmux")) {
  FUNC_34("gmux I/O already in use\n");
  goto err_free;
 }







 VAR_32 = FUNC_24(VAR_28, VAR_11);
 VAR_33 = FUNC_24(VAR_28, VAR_12);
 VAR_34 = FUNC_24(VAR_28, VAR_13);
 if (VAR_32 == 0xff && VAR_33 == 0xff && VAR_34 == 0xff) {
  if (FUNC_22(VAR_28)) {
   u32 VAR_38;
   FUNC_31(&VAR_28->index_lock);
   VAR_28->indexed = 1;
   VAR_38 = FUNC_23(VAR_28,
    VAR_11);
   VAR_32 = (VAR_38 >> 24) & 0xff;
   VAR_33 = (VAR_38 >> 16) & 0xff;
   VAR_34 = (VAR_38 >> 8) & 0xff;
  } else {
   FUNC_35("gmux device not present\n");
   VAR_35 = -VAR_3;
   goto err_release;
  }
 }
 FUNC_35("Found gmux version %d.%d.%d [%s]\n", VAR_32, VAR_33,
  VAR_34, (VAR_28->indexed ? "indexed" : "classic"));

 FUNC_30(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.type = VAR_1;
 VAR_30.max_brightness = FUNC_23(VAR_28, VAR_9);







 if (FUNC_5(VAR_30.max_brightness > VAR_7))
  VAR_30.max_brightness = VAR_7;

 VAR_31 = FUNC_14("gmux_backlight", &VAR_26->dev,
      VAR_28, &VAR_20, &VAR_30);
 if (FUNC_3(VAR_31)) {
  VAR_35 = FUNC_4(VAR_31);
  goto err_release;
 }

 VAR_28->bdev = VAR_31;
 VAR_31->props.brightness = FUNC_21(VAR_31);
 FUNC_16(VAR_31);







 FUNC_12(VAR_18);
 FUNC_13();

 VAR_28->power_state = VAR_17;

 VAR_28->dhandle = FUNC_1(&VAR_26->dev);
 if (!VAR_28->dhandle) {
  FUNC_34("Cannot find acpi handle for pnp device %s\n",
         FUNC_18(&VAR_26->dev));
  VAR_35 = -VAR_3;
  goto err_notify;
 }

 VAR_36 = FUNC_8(VAR_28->dhandle, "GMGP", ((void*)0), &VAR_37);
 if (FUNC_2(VAR_36)) {
  VAR_28->gpe = (int)VAR_37;

  VAR_36 = FUNC_10(VAR_28->dhandle,
           VAR_0,
           &VAR_23, VAR_26);
  if (FUNC_0(VAR_36)) {
   FUNC_34("Install notify handler failed: %s\n",
          FUNC_9(VAR_36));
   VAR_35 = -VAR_3;
   goto err_notify;
  }

  VAR_36 = FUNC_7(((void*)0), VAR_28->gpe);
  if (FUNC_0(VAR_36)) {
   FUNC_34("Cannot enable gpe: %s\n",
          FUNC_9(VAR_36));
   goto err_enable_gpe;
  }
 } else {
  FUNC_36("No GPE found for gmux\n");
  VAR_28->gpe = -1;
 }





 VAR_28->external_switchable =
  !FUNC_17(&VAR_25, ((void*)0), ((void*)0), VAR_24);
 if (!VAR_28->external_switchable)
  FUNC_26(VAR_28, VAR_10, 3);

 VAR_19 = VAR_28;
 FUNC_27(&VAR_28->powerchange_done);
 FUNC_20(VAR_28);
 FUNC_25(VAR_28);
 if (VAR_28->indexed)
  VAR_35 = FUNC_39(&VAR_22,
           VAR_16);
 else
  VAR_35 = FUNC_39(&VAR_21,
           VAR_15);
 if (VAR_35) {
  FUNC_34("Failed to register vga_switcheroo handler\n");
  goto err_register_handler;
 }

 return 0;

err_register_handler:
 FUNC_19(VAR_28);
 VAR_19 = ((void*)0);
 if (VAR_28->gpe >= 0)
  FUNC_6(((void*)0), VAR_28->gpe);
err_enable_gpe:
 if (VAR_28->gpe >= 0)
  FUNC_11(VAR_28->dhandle,
        VAR_0,
        &VAR_23);
err_notify:
 FUNC_15(VAR_31);
err_release:
 FUNC_37(VAR_28->iostart, VAR_28->iolen);
err_free:
 FUNC_28(VAR_28);
 return VAR_35;
}
