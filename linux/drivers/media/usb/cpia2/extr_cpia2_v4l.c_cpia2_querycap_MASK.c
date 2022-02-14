
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int sensor_flags; } ;
struct TYPE_4__ {int product; int device_type; } ;
struct TYPE_6__ {TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {int dev; TYPE_3__ params; } ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 struct camera_data* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1, struct v4l2_capability *VAR_2)
{
 struct camera_data *VAR_3 = FUNC_4(VAR_0);

 FUNC_2(VAR_2->driver, "cpia2", sizeof(VAR_2->driver));

 if (VAR_3->params.pnp_id.product == 0x151)
  FUNC_2(VAR_2->card, "QX5 Microscope", sizeof(VAR_2->card));
 else
  FUNC_2(VAR_2->card, "CPiA2 Camera", sizeof(VAR_2->card));
 switch (VAR_3->params.pnp_id.device_type) {
 case 129:
  FUNC_1(VAR_2->card, " (672/");
  break;
 case 128:
  FUNC_1(VAR_2->card, " (676/");
  break;
 default:
  FUNC_1(VAR_2->card, " (XXX/");
  break;
 }
 switch (VAR_3->params.version.sensor_flags) {
 case 134:
  FUNC_1(VAR_2->card, "404)");
  break;
 case 133:
  FUNC_1(VAR_2->card, "407)");
  break;
 case 132:
  FUNC_1(VAR_2->card, "409)");
  break;
 case 131:
  FUNC_1(VAR_2->card, "410)");
  break;
 case 130:
  FUNC_1(VAR_2->card, "500)");
  break;
 default:
  FUNC_1(VAR_2->card, "XXX)");
  break;
 }

 if (FUNC_3(VAR_3->dev, VAR_2->bus_info, sizeof(VAR_2->bus_info)) <0)
  FUNC_0(VAR_2->bus_info,0, sizeof(VAR_2->bus_info));
 return 0;
}
