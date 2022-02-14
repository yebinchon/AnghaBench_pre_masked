
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_9__ {int priority; int notifier_call; } ;
struct dcon_priv {int bl_val; TYPE_1__ reboot_nb; int * bl_dev; int fbinfo; int switch_source; int waitq; struct i2c_client* client; } ;
struct TYPE_11__ {int brightness; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (char*,int *,struct dcon_priv*,int *,TYPE_7__*) ;
 int VAR_6 ;
 TYPE_7__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;
 int FUNC_6 (struct dcon_priv*,int) ;
 int VAR_10 ;
 int FUNC_7 (struct dcon_priv*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,struct dcon_priv*) ;
 int FUNC_12 (struct i2c_client*,struct dcon_priv*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct dcon_priv*) ;
 struct dcon_priv* FUNC_15 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_2__* FUNC_17 (char*,int) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,struct dcon_priv*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (TYPE_1__*) ;
 int * VAR_16 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_17, const struct i2c_device_id *VAR_18)
{
 struct dcon_priv *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if (!VAR_15)
  return -VAR_4;

 VAR_19 = FUNC_15(sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return -VAR_3;

 VAR_19->client = VAR_17;
 FUNC_13(&VAR_19->waitq);
 FUNC_1(&VAR_19->switch_source, VAR_12);
 VAR_19->reboot_nb.notifier_call = VAR_11;
 VAR_19->reboot_nb.priority = -1;

 FUNC_12(VAR_17, VAR_19);

 if (VAR_13 < 1) {
  FUNC_8(&VAR_17->dev, "DCON driver requires a registered fb\n");
  VAR_20 = -VAR_2;
  goto einit;
 }
 VAR_19->fbinfo = VAR_16[0];

 VAR_20 = FUNC_6(VAR_19, 1);
 if (VAR_20)
  goto einit;



 VAR_8 = FUNC_17("dcon", -1);

 if (!VAR_8) {
  FUNC_20("Unable to create the DCON device\n");
  VAR_20 = -VAR_3;
  goto eirq;
 }
 VAR_20 = FUNC_16(VAR_8);
 FUNC_19(VAR_8, VAR_19);

 if (VAR_20) {
  FUNC_20("Unable to add the DCON device\n");
  goto edev;
 }

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_9); VAR_21++) {
  VAR_20 = FUNC_9(&VAR_8->dev,
     &VAR_9[VAR_21]);
  if (VAR_20) {
   FUNC_8(&VAR_8->dev, "Cannot create sysfs file\n");
   goto ecreate;
  }
 }

 VAR_19->bl_val = FUNC_7(VAR_19, VAR_1) & 0x0F;


 VAR_7.brightness = VAR_19->bl_val;
 VAR_19->bl_dev = FUNC_5("dcon-bl", &VAR_8->dev,
       VAR_19, &VAR_6,
       &VAR_7);
 if (FUNC_2(VAR_19->bl_dev)) {
  FUNC_8(&VAR_17->dev, "cannot register backlight dev (%ld)\n",
   FUNC_3(VAR_19->bl_dev));
  VAR_19->bl_dev = ((void*)0);
 }

 FUNC_21(&VAR_19->reboot_nb);
 FUNC_4(&VAR_14, &VAR_10);

 return 0;

 ecreate:
 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
  FUNC_10(&VAR_8->dev, &VAR_9[VAR_22]);
 edev:
 FUNC_18(VAR_8);
 VAR_8 = ((void*)0);
 eirq:
 FUNC_11(VAR_0, VAR_19);
 einit:
 FUNC_14(VAR_19);
 return VAR_20;
}
