
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int width; int height; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct sd*,scalar_t__,int) ;
 int FUNC_3 (struct sd*,scalar_t__,scalar_t__*,int) ;
 scalar_t__** VAR_5 ;

int FUNC_4(struct sd *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u8 VAR_9[2];
 struct cam *VAR_10 = &VAR_6->gspca_dev.cam;
 struct gspca_dev *VAR_11 = (struct gspca_dev *)VAR_6;

 int VAR_12 = VAR_10->cam_mode[VAR_6->gspca_dev.curr_mode].width - 1;
 int VAR_13 = VAR_10->cam_mode[VAR_6->gspca_dev.curr_mode].height;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5) && !VAR_8; VAR_7++) {
  if (VAR_5[VAR_7][0] == VAR_0) {
   VAR_8 = FUNC_2(VAR_6,
    VAR_5[VAR_7][1],
    VAR_5[VAR_7][2]);
  } else {
   VAR_9[0] = VAR_5[VAR_7][2];
   VAR_9[1] = VAR_5[VAR_7][3];
   VAR_8 = FUNC_3(VAR_6,
    VAR_5[VAR_7][1], VAR_9, 2);
  }
 }
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_4, (VAR_13 >> 8) & 0xff);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_4, (VAR_13 & 0xff));
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < 2 && !VAR_8; VAR_7++)
  VAR_8 = FUNC_2(VAR_6, VAR_4, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_3, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_3, 2);
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < 2 && !VAR_8; VAR_7++)
  VAR_8 = FUNC_2(VAR_6, VAR_2, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_2,
     (VAR_12 >> 8) & 0xff);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_12 & 0xff);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_3, 0);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_12) {
 case 640:
  FUNC_1(VAR_11, VAR_1, "Configuring camera for VGA mode\n");
  break;

 case 320:
  FUNC_1(VAR_11, VAR_1, "Configuring camera for QVGA mode\n");
  break;
 }
 return VAR_8;
}
