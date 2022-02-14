
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_5__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_3__* vflip; TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_4__ {int width; int height; int priv; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gspca_dev*,int ,char*) ;
 int FUNC_3 (struct sd*,scalar_t__,int) ;
 int FUNC_4 (struct sd*,scalar_t__,int*,int) ;
 int VAR_14 ;
 scalar_t__** VAR_15 ;

int FUNC_5(struct sd *VAR_16)
{
 u8 VAR_17;
 int VAR_18, VAR_19 = 0;
 struct cam *VAR_20 = &VAR_16->gspca_dev.cam;

 int VAR_21 = VAR_20->cam_mode[VAR_16->gspca_dev.curr_mode].width;
 int VAR_22 = VAR_20->cam_mode[VAR_16->gspca_dev.curr_mode].height;
 int VAR_23 = VAR_20->cam_mode[VAR_16->gspca_dev.curr_mode].priv;
 int VAR_24 = VAR_7;
 struct gspca_dev *VAR_25 = (struct gspca_dev *)VAR_16;

 if ((!FUNC_1(VAR_14) &&
  VAR_16->vflip->val) ||
  (FUNC_1(VAR_14) &&
  !VAR_16->vflip->val))
  VAR_23--;

 if (VAR_21 <= 320)
  VAR_24 /= 2;


 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_15) && !VAR_19; VAR_18++) {
  if (VAR_15[VAR_18][0] == VAR_0)
   VAR_19 = FUNC_3(VAR_16, VAR_15[VAR_18][1],
    VAR_15[VAR_18][2]);
  else if (VAR_15[VAR_18][0] == VAR_13) {
   VAR_17 = VAR_15[VAR_18][2];
   VAR_19 = FUNC_4(VAR_16,
    VAR_15[VAR_18][1], &VAR_17, 1);
  }
 }
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_4,
     ((VAR_23 >> 8) & 0xff));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_4, (VAR_23 & 0xff));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_4, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_4, (VAR_22 >> 8) & 0xff);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_4, (VAR_22 & 0xff));
 if (VAR_19 < 0)
  return VAR_19;

 for (VAR_18 = 0; VAR_18 < 2 && !VAR_19; VAR_18++)
  VAR_19 = FUNC_3(VAR_16, VAR_4, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_3, 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_3, 2);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_2,
     (VAR_24 >> 8) & 0xff);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_2, VAR_24 & 0xff);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_2,
     ((VAR_21 + VAR_24) >> 8) & 0xff);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_2,
     ((VAR_21 + VAR_24) & 0xff));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_3, 0);
 if (VAR_19 < 0)
  return VAR_19;

 switch (VAR_21) {
 case 640:
  FUNC_2(VAR_25, VAR_1, "Configuring camera for VGA mode\n");

  VAR_17 = VAR_12 | VAR_11 |
         VAR_10;
  VAR_19 = FUNC_4(VAR_16, VAR_6, &VAR_17, 1);
  break;

 case 352:
  FUNC_2(VAR_25, VAR_1, "Configuring camera for CIF mode\n");

  VAR_17 = VAR_5 | VAR_11 |
    VAR_10;
  VAR_19 = FUNC_4(VAR_16, VAR_6, &VAR_17, 1);
  break;

 case 320:
  FUNC_2(VAR_25, VAR_1, "Configuring camera for QVGA mode\n");

  VAR_17 = VAR_9 | VAR_11 |
    VAR_10;
  VAR_19 = FUNC_4(VAR_16, VAR_6, &VAR_17, 1);
  break;

 case 176:
  FUNC_2(VAR_25, VAR_1, "Configuring camera for QCIF mode\n");

  VAR_17 = VAR_8 | VAR_11 |
   VAR_10;
  VAR_19 = FUNC_4(VAR_16, VAR_6, &VAR_17, 1);
  break;
 }
 return VAR_19;
}
