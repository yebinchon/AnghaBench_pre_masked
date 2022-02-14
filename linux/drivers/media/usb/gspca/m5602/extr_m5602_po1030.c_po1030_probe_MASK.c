
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 scalar_t__ FUNC_2 (struct sd*,int ,size_t*,int) ;
 int FUNC_3 (struct sd*,scalar_t__,size_t) ;
 int FUNC_4 (struct sd*,scalar_t__,size_t*,int) ;
 TYPE_3__ VAR_6 ;
 scalar_t__** VAR_7 ;
 int FUNC_5 (char*,...) ;
 scalar_t__** VAR_8 ;

int FUNC_6(struct sd *VAR_9)
{
 int VAR_10 = 0;
 u8 VAR_11 = 0, VAR_12;
 struct gspca_dev *VAR_13 = (struct gspca_dev *)VAR_9;

 if (VAR_5) {
  if (VAR_5 == VAR_3) {
   FUNC_5("Forcing a %s sensor\n", VAR_6);
   goto sensor_found;
  }


  return -VAR_1;
 }

 FUNC_1(VAR_13, VAR_0, "Probing for a po1030 sensor\n");


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
  u8 VAR_14 = VAR_8[VAR_12][2];
  if (VAR_8[VAR_12][0] == VAR_4)
   VAR_10 |= FUNC_4(VAR_9,
    VAR_8[VAR_12][1], &VAR_14, 1);
  else
   VAR_10 |= FUNC_3(VAR_9, VAR_8[VAR_12][1],
      VAR_14);
 }
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_2(VAR_9, VAR_2, &VAR_11, 1))
  return -VAR_1;

 if (VAR_11 == 0x30) {
  FUNC_5("Detected a po1030 sensor\n");
  goto sensor_found;
 }
 return -VAR_1;

sensor_found:
 VAR_9->gspca_dev.cam.cam_mode = VAR_7;
 VAR_9->gspca_dev.cam.nmodes = FUNC_0(VAR_7);

 return 0;
}
