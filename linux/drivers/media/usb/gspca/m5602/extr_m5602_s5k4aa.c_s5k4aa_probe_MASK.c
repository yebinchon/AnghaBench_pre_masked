
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int** cam_mode; int nmodes; } ;
struct TYPE_5__ {TYPE_1__ cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
typedef int prod_id ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int**) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sd*,int,int*,int) ;
 int FUNC_3 (struct sd*,int,int) ;
 int FUNC_4 (struct sd*,int,int*,int) ;
 scalar_t__ FUNC_5 (int*,int const*,int) ;
 int FUNC_6 (char*,...) ;
 int** VAR_5 ;
 TYPE_3__ VAR_6 ;
 int** VAR_7 ;

int FUNC_7(struct sd *VAR_8)
{
 u8 VAR_9[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
 const u8 VAR_10[6] = {0x00, 0x10, 0x00, 0x4b, 0x33, 0x75};
 struct gspca_dev *VAR_11 = (struct gspca_dev *)VAR_8;
 int VAR_12, VAR_13 = 0;

 if (VAR_4) {
  if (VAR_4 == VAR_3) {
   FUNC_6("Forcing a %s sensor\n", VAR_6.name);
   goto sensor_found;
  }


  return -VAR_2;
 }

 FUNC_1(VAR_11, VAR_0, "Probing for a s5k4aa sensor\n");


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5) && !VAR_13; VAR_12++) {
  u8 VAR_14[2] = {0x00, 0x00};

  switch (VAR_5[VAR_12][0]) {
  case 130:
   VAR_13 = FUNC_3(VAR_8,
       VAR_5[VAR_12][1],
       VAR_5[VAR_12][2]);
   break;

  case 129:
   VAR_14[0] = VAR_5[VAR_12][2];
   VAR_13 = FUNC_4(VAR_8,
        VAR_5[VAR_12][1],
        VAR_14, 1);
   break;

  case 128:
   VAR_14[0] = VAR_5[VAR_12][2];
   VAR_14[1] = VAR_5[VAR_12][3];
   VAR_13 = FUNC_4(VAR_8,
        VAR_5[VAR_12][1],
        VAR_14, 2);
   break;
  default:
   FUNC_6("Invalid stream command, exiting init\n");
   return -VAR_1;
  }
 }


 if (FUNC_2(VAR_8, 0x00, VAR_9, 2))
  return -VAR_2;
 if (FUNC_2(VAR_8, 0x02, VAR_9+2, 2))
  return -VAR_2;
 if (FUNC_2(VAR_8, 0x04, VAR_9+4, 2))
  return -VAR_2;

 if (FUNC_5(VAR_9, VAR_10, sizeof(VAR_9)))
  return -VAR_2;
 else
  FUNC_6("Detected a s5k4aa sensor\n");

sensor_found:
 VAR_8->gspca_dev.cam.cam_mode = VAR_7;
 VAR_8->gspca_dev.cam.nmodes = FUNC_0(VAR_7);

 return 0;
}
