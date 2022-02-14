
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {char* name; char* default_trigger; int brightness_get; int brightness_set; } ;
struct wbcir_data {scalar_t__ ebase; scalar_t__ wbase; scalar_t__ sbase; int irq; TYPE_8__ led; TYPE_4__* dev; int spinlock; } ;
struct pnp_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
struct TYPE_10__ {int data; int mask; } ;
struct TYPE_12__ {struct device* parent; } ;
struct TYPE_11__ {int version; int product; int vendor; int bustype; } ;
struct TYPE_13__ {char* input_phys; int min_timeout; int timeout; int max_timeout; int allowed_wakeup_protocols; int s_wakeup_filter; TYPE_1__ scancode_wakeup_filter; int wakeup_protocol; int allowed_protocols; int rx_resolution; TYPE_3__ dev; struct wbcir_data* priv; int tx_ir; int s_tx_carrier; int s_tx_mask; int s_carrier_report; int s_idle; int map_name; TYPE_2__ input_id; int device_name; int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct device*,char*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct wbcir_data*) ;
 struct wbcir_data* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*,TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_9 (struct pnp_dev*,int) ;
 void* FUNC_10 (struct pnp_dev*,int) ;
 int FUNC_11 (struct pnp_dev*,struct wbcir_data*) ;
 TYPE_4__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int,int ,int ,int ,struct pnp_dev*) ;
 int FUNC_18 (scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (int *) ;
 int VAR_27 ;
 int FUNC_20 (struct wbcir_data*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static int
FUNC_21(struct pnp_dev *VAR_36, const struct pnp_device_id *VAR_37)
{
 struct device *VAR_38 = &VAR_36->dev;
 struct wbcir_data *VAR_39;
 int VAR_40;

 if (!(FUNC_9(VAR_36, 0) == VAR_3 &&
       FUNC_9(VAR_36, 1) == VAR_23 &&
       FUNC_9(VAR_36, 2) == VAR_22)) {
  FUNC_2(VAR_38, "Invalid resources\n");
  return -VAR_4;
 }

 VAR_39 = FUNC_5(sizeof(*VAR_39), VAR_6);
 if (!VAR_39) {
  VAR_40 = -VAR_5;
  goto exit;
 }

 FUNC_11(VAR_36, VAR_39);

 FUNC_19(&VAR_39->spinlock);
 VAR_39->ebase = FUNC_10(VAR_36, 0);
 VAR_39->wbase = FUNC_10(VAR_36, 1);
 VAR_39->sbase = FUNC_10(VAR_36, 2);
 VAR_39->irq = FUNC_8(VAR_36, 0);

 if (VAR_39->wbase == 0 || VAR_39->ebase == 0 ||
     VAR_39->sbase == 0 || VAR_39->irq == -1) {
  VAR_40 = -VAR_4;
  FUNC_2(VAR_38, "Invalid resources\n");
  goto exit_free_data;
 }

 FUNC_1(&VAR_36->dev, "Found device (w: 0x%lX, e: 0x%lX, s: 0x%lX, i: %u)\n",
  VAR_39->wbase, VAR_39->ebase, VAR_39->sbase, VAR_39->irq);

 VAR_39->led.name = "cir::activity";
 VAR_39->led.default_trigger = "rc-feedback";
 VAR_39->led.brightness_set = VAR_30;
 VAR_39->led.brightness_get = VAR_29;
 VAR_40 = FUNC_6(&VAR_36->dev, &VAR_39->led);
 if (VAR_40)
  goto exit_free_data;

 VAR_39->dev = FUNC_12(VAR_9);
 if (!VAR_39->dev) {
  VAR_40 = -VAR_5;
  goto exit_unregister_led;
 }

 VAR_39->dev->driver_name = VAR_1;
 VAR_39->dev->device_name = VAR_26;
 VAR_39->dev->input_phys = "wbcir/cir0";
 VAR_39->dev->input_id.bustype = VAR_0;
 VAR_39->dev->input_id.vendor = VAR_8;
 VAR_39->dev->input_id.product = VAR_25;
 VAR_39->dev->input_id.version = VAR_24;
 VAR_39->dev->map_name = VAR_10;
 VAR_39->dev->s_idle = VAR_27;
 VAR_39->dev->s_carrier_report = VAR_31;
 VAR_39->dev->s_tx_mask = VAR_35;
 VAR_39->dev->s_tx_carrier = VAR_34;
 VAR_39->dev->tx_ir = VAR_33;
 VAR_39->dev->priv = VAR_39;
 VAR_39->dev->dev.parent = &VAR_36->dev;
 VAR_39->dev->min_timeout = 1;
 VAR_39->dev->timeout = VAR_7;
 VAR_39->dev->max_timeout = 10 * VAR_7;
 VAR_39->dev->rx_resolution = FUNC_0(2);
 VAR_39->dev->allowed_protocols = VAR_11;
 VAR_39->dev->allowed_wakeup_protocols = VAR_12 |
  VAR_14 | VAR_13 | VAR_15 |
  VAR_16 | VAR_17 |
  VAR_18 | VAR_19 |
  VAR_20;
 VAR_39->dev->wakeup_protocol = VAR_21;
 VAR_39->dev->scancode_wakeup_filter.data = 0x800f040c;
 VAR_39->dev->scancode_wakeup_filter.mask = 0xffff7fff;
 VAR_39->dev->s_wakeup_filter = VAR_32;

 VAR_40 = FUNC_14(VAR_39->dev);
 if (VAR_40)
  goto exit_free_rc;

 if (!FUNC_18(VAR_39->wbase, VAR_23, VAR_1)) {
  FUNC_2(VAR_38, "Region 0x%lx-0x%lx already in use!\n",
   VAR_39->wbase, VAR_39->wbase + VAR_23 - 1);
  VAR_40 = -VAR_2;
  goto exit_unregister_device;
 }

 if (!FUNC_18(VAR_39->ebase, VAR_3, VAR_1)) {
  FUNC_2(VAR_38, "Region 0x%lx-0x%lx already in use!\n",
   VAR_39->ebase, VAR_39->ebase + VAR_3 - 1);
  VAR_40 = -VAR_2;
  goto exit_release_wbase;
 }

 if (!FUNC_18(VAR_39->sbase, VAR_22, VAR_1)) {
  FUNC_2(VAR_38, "Region 0x%lx-0x%lx already in use!\n",
   VAR_39->sbase, VAR_39->sbase + VAR_22 - 1);
  VAR_40 = -VAR_2;
  goto exit_release_ebase;
 }

 VAR_40 = FUNC_17(VAR_39->irq, VAR_28,
     0, VAR_1, VAR_36);
 if (VAR_40) {
  FUNC_2(VAR_38, "Failed to claim IRQ %u\n", VAR_39->irq);
  VAR_40 = -VAR_2;
  goto exit_release_sbase;
 }

 FUNC_3(&VAR_36->dev, 1);

 FUNC_20(VAR_39);

 return 0;

exit_release_sbase:
 FUNC_16(VAR_39->sbase, VAR_22);
exit_release_ebase:
 FUNC_16(VAR_39->ebase, VAR_3);
exit_release_wbase:
 FUNC_16(VAR_39->wbase, VAR_23);
exit_unregister_device:
 FUNC_15(VAR_39->dev);
 VAR_39->dev = ((void*)0);
exit_free_rc:
 FUNC_13(VAR_39->dev);
exit_unregister_led:
 FUNC_7(&VAR_39->led);
exit_free_data:
 FUNC_4(VAR_39);
 FUNC_11(VAR_36, ((void*)0));
exit:
 return VAR_40;
}
