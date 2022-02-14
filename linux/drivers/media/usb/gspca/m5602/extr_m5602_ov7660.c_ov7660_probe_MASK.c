
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
struct TYPE_6__ {int name; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct sd*,int ,int*,int) ;
 int FUNC_2 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sd*,scalar_t__,int*,int) ;
 TYPE_3__ VAR_6 ;
 scalar_t__** VAR_7 ;
 int FUNC_4 (char*,...) ;
 scalar_t__** VAR_8 ;

int FUNC_5(struct sd *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 u8 VAR_12 = 0, VAR_13 = 0;

 if (VAR_5) {
  if (VAR_5 == VAR_3) {
   FUNC_4("Forcing an %s sensor\n", VAR_6);
   goto sensor_found;
  }


  return -VAR_1;
 }


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8) && !VAR_10; VAR_11++) {
  u8 VAR_14[2];

  if (VAR_8[VAR_11][0] == VAR_0) {
   VAR_10 = FUNC_2(VAR_9,
    VAR_8[VAR_11][1],
    VAR_8[VAR_11][2]);
  } else {
   VAR_14[0] = VAR_8[VAR_11][2];
   VAR_10 = FUNC_3(VAR_9,
    VAR_8[VAR_11][1], VAR_14, 1);
  }
 }
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_1(VAR_9, VAR_2, &VAR_12, 1))
  return -VAR_1;

 if (FUNC_1(VAR_9, VAR_4, &VAR_13, 1))
  return -VAR_1;

 FUNC_4("Sensor reported 0x%x%x\n", VAR_12, VAR_13);

 if ((VAR_12 == 0x76) && (VAR_13 == 0x60)) {
  FUNC_4("Detected a ov7660 sensor\n");
  goto sensor_found;
 }
 return -VAR_1;

sensor_found:
 VAR_9->gspca_dev.cam.cam_mode = VAR_7;
 VAR_9->gspca_dev.cam.nmodes = FUNC_0(VAR_7);

 return 0;
}
