
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__** cam_mode; int nmodes; } ;
struct TYPE_5__ {TYPE_1__ cam; } ;
struct sd {int * rotation_thread; TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sd*,int,scalar_t__*,int) ;
 int FUNC_3 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sd*,scalar_t__,scalar_t__*,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__** VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__** VAR_7 ;

int FUNC_6(struct sd *VAR_8)
{
 u8 VAR_9 = 0, VAR_10 = 0;
 int VAR_11, VAR_12 = 0;
 struct gspca_dev *VAR_13 = (struct gspca_dev *)VAR_8;

 if (VAR_4) {
  if (VAR_4 == VAR_2) {
   FUNC_5("Forcing a %s sensor\n", VAR_6.name);
   goto sensor_found;
  }


  return -VAR_1;
 }

 FUNC_1(VAR_13, VAR_0, "Probing for a s5k83a sensor\n");


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5) && !VAR_12; VAR_11++) {
  u8 VAR_14[2] = {VAR_5[VAR_11][2], VAR_5[VAR_11][3]};
  if (VAR_5[VAR_11][0] == VAR_3)
   VAR_12 = FUNC_4(VAR_8, VAR_5[VAR_11][1],
    VAR_14, 2);
  else
   VAR_12 = FUNC_3(VAR_8, VAR_5[VAR_11][1],
    VAR_14[0]);
 }




 if (FUNC_2(VAR_8, 0x00, &VAR_9, 1))
  return -VAR_1;

 if (FUNC_2(VAR_8, 0x01, &VAR_10, 1))
  return -VAR_1;

 if ((VAR_9 == 0xff) || (VAR_10 == 0xff))
  return -VAR_1;
 else
  FUNC_5("Detected a s5k83a sensor\n");

sensor_found:
 VAR_8->gspca_dev.cam.cam_mode = VAR_7;
 VAR_8->gspca_dev.cam.nmodes = FUNC_0(VAR_7);


 VAR_8->rotation_thread = ((void*)0);

 return 0;
}
