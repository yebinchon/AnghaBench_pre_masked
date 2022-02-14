
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {scalar_t__** cam_mode; size_t nmodes; } ;
struct TYPE_5__ {TYPE_1__ cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_6__ {int name; } ;


 size_t FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sd*,int ,size_t*,int) ;
 int FUNC_3 (struct sd*,scalar_t__,size_t) ;
 int FUNC_4 (struct sd*,scalar_t__,size_t*,int) ;
 TYPE_3__ VAR_7 ;
 scalar_t__** VAR_8 ;
 int FUNC_5 (char*,...) ;
 scalar_t__** VAR_9 ;

int FUNC_6(struct sd *VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0, VAR_14;
 struct gspca_dev *VAR_15 = (struct gspca_dev *)VAR_10;

 if (VAR_6) {
  if (VAR_6 == VAR_3) {
   FUNC_5("Forcing an %s sensor\n", VAR_7);
   goto sensor_found;
  }


  return -VAR_1;
 }

 FUNC_1(VAR_15, VAR_0, "Probing for an ov9650 sensor\n");


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9) && !VAR_11; VAR_14++) {
  u8 VAR_16 = VAR_9[VAR_14][2];
  if (VAR_9[VAR_14][0] == VAR_5)
   VAR_11 = FUNC_4(VAR_10,
    VAR_9[VAR_14][1], &VAR_16, 1);
  else
   VAR_11 = FUNC_3(VAR_10,
    VAR_9[VAR_14][1], VAR_16);
 }

 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_2(VAR_10, VAR_2, &VAR_12, 1))
  return -VAR_1;

 if (FUNC_2(VAR_10, VAR_4, &VAR_13, 1))
  return -VAR_1;

 if ((VAR_12 == 0x96) && (VAR_13 == 0x52)) {
  FUNC_5("Detected an ov9650 sensor\n");
  goto sensor_found;
 }
 return -VAR_1;

sensor_found:
 VAR_10->gspca_dev.cam.cam_mode = VAR_8;
 VAR_10->gspca_dev.cam.nmodes = FUNC_0(VAR_8);

 return 0;
}
