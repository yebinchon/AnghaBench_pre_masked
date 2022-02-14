
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__** cam_mode; int nmodes; } ;
struct TYPE_5__ {TYPE_1__ cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sd*,int ,int*,int) ;
 int FUNC_3 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sd*,scalar_t__,int*,int) ;
 TYPE_3__ VAR_6 ;
 scalar_t__** VAR_7 ;
 int FUNC_5 (char*,...) ;
 scalar_t__** VAR_8 ;

int FUNC_6(struct sd *VAR_9)
{
 u8 VAR_10[2] = {0x00, 0x00};
 int VAR_11, VAR_12 = 0;
 struct gspca_dev *VAR_13 = (struct gspca_dev *)VAR_9;

 if (VAR_5) {
  if (VAR_5 == VAR_4) {
   FUNC_5("Forcing a %s sensor\n", VAR_6);
   goto sensor_found;
  }


  return -VAR_2;
 }

 FUNC_1(VAR_13, VAR_1, "Probing for a mt9m111 sensor\n");


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  if (VAR_8[VAR_11][0] == VAR_0) {
   VAR_12 |= FUNC_3(VAR_9,
    VAR_8[VAR_11][1],
    VAR_8[VAR_11][2]);
  } else {
   VAR_10[0] = VAR_8[VAR_11][2];
   VAR_10[1] = VAR_8[VAR_11][3];
   VAR_12 |= FUNC_4(VAR_9,
    VAR_8[VAR_11][1], VAR_10, 2);
  }
 }
 if (VAR_12 < 0)
  return VAR_12;

 if (FUNC_2(VAR_9, VAR_3, VAR_10, 2))
  return -VAR_2;

 if ((VAR_10[0] == 0x14) && (VAR_10[1] == 0x3a)) {
  FUNC_5("Detected a mt9m111 sensor\n");
  goto sensor_found;
 }

 return -VAR_2;

sensor_found:
 VAR_9->gspca_dev.cam.cam_mode = VAR_7;
 VAR_9->gspca_dev.cam.nmodes = FUNC_0(VAR_7);

 return 0;
}
