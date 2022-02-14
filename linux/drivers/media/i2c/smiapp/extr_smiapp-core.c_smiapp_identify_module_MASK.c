
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smiapp_module_info {scalar_t__ manufacturer_id; scalar_t__ model_id; scalar_t__ revision_number_major; scalar_t__ revision_number_minor; scalar_t__ module_year; scalar_t__ module_month; scalar_t__ module_day; scalar_t__ sensor_manufacturer_id; scalar_t__ sensor_model_id; scalar_t__ sensor_revision_number; scalar_t__ sensor_firmware_version; scalar_t__ smia_version; scalar_t__ smiapp_version; int name; int quirk; } ;
struct smiapp_sensor {struct smiapp_module_info minfo; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {scalar_t__ manufacturer_id; scalar_t__ model_id; int flags; scalar_t__ revision_number_major; int quirk; int name; } ;
struct TYPE_4__ {int sd; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__* VAR_16 ;
 int FUNC_4 (struct smiapp_sensor*,int ,scalar_t__*) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct smiapp_sensor *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_5(&VAR_17->src->sd);
 struct smiapp_module_info *VAR_19 = &VAR_17->minfo;
 unsigned int VAR_20;
 int VAR_21 = 0;

 VAR_19->name = VAR_2;


 VAR_21 = FUNC_4(VAR_17, VAR_5,
     &VAR_19->manufacturer_id);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17, VAR_3,
      &VAR_19->model_id);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_9,
      &VAR_19->revision_number_major);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_10,
      &VAR_19->revision_number_minor);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_8,
      &VAR_19->module_year);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_7,
      &VAR_19->module_month);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17, VAR_6,
      &VAR_19->module_day);


 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_12,
      &VAR_19->sensor_manufacturer_id);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_4,
      &VAR_19->sensor_model_id);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_13,
      &VAR_19->sensor_revision_number);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17,
      VAR_11,
      &VAR_19->sensor_firmware_version);


 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17, VAR_15,
      &VAR_19->smia_version);
 if (!VAR_21)
  VAR_21 = FUNC_4(VAR_17, VAR_14,
      &VAR_19->smiapp_version);

 if (VAR_21) {
  FUNC_2(&VAR_18->dev, "sensor detection failed\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_18->dev, "module 0x%2.2x-0x%4.4x\n",
  VAR_19->manufacturer_id, VAR_19->model_id);

 FUNC_1(&VAR_18->dev,
  "module revision 0x%2.2x-0x%2.2x date %2.2d-%2.2d-%2.2d\n",
  VAR_19->revision_number_major, VAR_19->revision_number_minor,
  VAR_19->module_year, VAR_19->module_month, VAR_19->module_day);

 FUNC_1(&VAR_18->dev, "sensor 0x%2.2x-0x%4.4x\n",
  VAR_19->sensor_manufacturer_id, VAR_19->sensor_model_id);

 FUNC_1(&VAR_18->dev,
  "sensor revision 0x%2.2x firmware version 0x%2.2x\n",
  VAR_19->sensor_revision_number, VAR_19->sensor_firmware_version);

 FUNC_1(&VAR_18->dev, "smia version %2.2d smiapp version %2.2d\n",
  VAR_19->smia_version, VAR_19->smiapp_version);






 if (!VAR_19->manufacturer_id && !VAR_19->model_id) {
  VAR_19->manufacturer_id = VAR_19->sensor_manufacturer_id;
  VAR_19->model_id = VAR_19->sensor_model_id;
  VAR_19->revision_number_major = VAR_19->sensor_revision_number;
 }

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_16); VAR_20++) {
  if (VAR_16[VAR_20].manufacturer_id
      != VAR_19->manufacturer_id)
   continue;
  if (VAR_16[VAR_20].model_id != VAR_19->model_id)
   continue;
  if (VAR_16[VAR_20].flags
      & VAR_1) {
   if (VAR_16[VAR_20].revision_number_major
       < VAR_19->revision_number_major)
    continue;
  } else {
   if (VAR_16[VAR_20].revision_number_major
       != VAR_19->revision_number_major)
    continue;
  }

  VAR_19->name = VAR_16[VAR_20].name;
  VAR_19->quirk = VAR_16[VAR_20].quirk;
  break;
 }

 if (VAR_20 >= FUNC_0(VAR_16))
  FUNC_3(&VAR_18->dev,
    "no quirks for this module; let's hope it's fully compliant\n");

 FUNC_1(&VAR_18->dev, "the sensor is called %s, ident %2.2x%4.4x%2.2x\n",
  VAR_19->name, VAR_19->manufacturer_id, VAR_19->model_id,
  VAR_19->revision_number_major);

 return 0;
}
