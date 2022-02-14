
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfd_cell {int version; int outsize; int insize; char* name; int sensor_num; int id; int pdata_size; struct mfd_cell* platform_data; int result; scalar_t__ data; scalar_t__ command; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int sensor_count; } ;
struct ec_response_motion_sense {TYPE_3__ info; TYPE_1__ dump; } ;
struct TYPE_5__ {int sensor_num; } ;
struct ec_params_motion_sense {TYPE_2__ info; int cmd; } ;
struct cros_ec_sensor_platform {int version; int outsize; int insize; char* name; int sensor_num; int id; int pdata_size; struct cros_ec_sensor_platform* platform_data; int result; scalar_t__ data; scalar_t__ command; } ;
struct cros_ec_dev {int has_kb_wake_angle; int dev; int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int version; int outsize; int insize; char* name; int sensor_num; int id; int pdata_size; struct cros_ec_command* platform_data; int result; scalar_t__ data; scalar_t__ command; } ;
typedef int sensor_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;

 scalar_t__ FUNC_0 (struct cros_ec_dev*,int ) ;
 int FUNC_1 (int ,struct mfd_cell*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct mfd_cell* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mfd_cell*) ;
 struct mfd_cell* FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,int ,struct mfd_cell*,int,int *,int ,int *) ;

__attribute__((used)) static void FUNC_10(struct cros_ec_dev *VAR_7)
{




 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct mfd_cell *VAR_12;
 struct cros_ec_sensor_platform *VAR_13;
 int VAR_14[VAR_6];
 struct ec_params_motion_sense *VAR_15;
 struct ec_response_motion_sense *VAR_16;
 struct cros_ec_command *VAR_17;

 VAR_17 = FUNC_6(sizeof(struct cros_ec_command) +
        FUNC_7(sizeof(*VAR_15), sizeof(*VAR_16)), VAR_3);
 if (VAR_17 == ((void*)0))
  return;

 VAR_17->version = 2;
 VAR_17->command = VAR_0 + VAR_7->cmd_offset;
 VAR_17->outsize = sizeof(*VAR_15);
 VAR_17->insize = sizeof(*VAR_16);

 VAR_15 = (struct ec_params_motion_sense *)VAR_17->data;
 VAR_15->cmd = VAR_4;

 VAR_8 = FUNC_1(VAR_7->ec_dev, VAR_17);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7->dev, "cannot get EC sensor information: %d/%d\n",
    VAR_8, VAR_17->result);
  goto error;
 }

 VAR_16 = (struct ec_response_motion_sense *)VAR_17->data;
 VAR_11 = VAR_16->dump.sensor_count;



 VAR_12 = FUNC_4(VAR_11 + 2, sizeof(struct mfd_cell),
          VAR_3);
 if (VAR_12 == ((void*)0))
  goto error;

 VAR_13 = FUNC_4(VAR_11,
       sizeof(struct cros_ec_sensor_platform),
       VAR_3);
 if (VAR_13 == ((void*)0))
  goto error_platforms;

 FUNC_8(VAR_14, 0, sizeof(VAR_14));
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_15->cmd = VAR_5;
  VAR_15->info.sensor_num = VAR_9;
  VAR_8 = FUNC_1(VAR_7->ec_dev, VAR_17);
  if (VAR_8 < 0) {
   FUNC_3(VAR_7->dev, "no info for EC sensor %d : %d/%d\n",
     VAR_9, VAR_8, VAR_17->result);
   continue;
  }
  switch (VAR_16->info.type) {
  case 134:
   VAR_12[VAR_10].name = "cros-ec-accel";
   break;
  case 132:
   VAR_12[VAR_10].name = "cros-ec-baro";
   break;
  case 131:
   VAR_12[VAR_10].name = "cros-ec-gyro";
   break;
  case 129:
   VAR_12[VAR_10].name = "cros-ec-mag";
   break;
  case 128:
   VAR_12[VAR_10].name = "cros-ec-prox";
   break;
  case 130:
   VAR_12[VAR_10].name = "cros-ec-light";
   break;
  case 133:
   VAR_12[VAR_10].name = "cros-ec-activity";
   break;
  default:
   FUNC_3(VAR_7->dev, "unknown type %d\n", VAR_16->info.type);
   continue;
  }
  VAR_13[VAR_10].sensor_num = VAR_9;
  VAR_12[VAR_10].id = VAR_14[VAR_16->info.type];
  VAR_12[VAR_10].platform_data = &VAR_13[VAR_10];
  VAR_12[VAR_10].pdata_size =
   sizeof(struct cros_ec_sensor_platform);

  VAR_14[VAR_16->info.type]++;
  VAR_10++;
 }

 if (VAR_14[134] >= 2)
  VAR_7->has_kb_wake_angle = 1;

 if (FUNC_0(VAR_7, VAR_1)) {
  VAR_12[VAR_10].name = "cros-ec-ring";
  VAR_10++;
 }
 if (FUNC_0(VAR_7,
    VAR_2)) {
  VAR_12[VAR_10].name = "cros-ec-lid-angle";
  VAR_10++;
 }

 VAR_8 = FUNC_9(VAR_7->dev, 0, VAR_12, VAR_10,
         ((void*)0), 0, ((void*)0));
 if (VAR_8)
  FUNC_2(VAR_7->dev, "failed to add EC sensors\n");

 FUNC_5(VAR_13);
error_platforms:
 FUNC_5(VAR_12);
error:
 FUNC_5(VAR_17);
}
