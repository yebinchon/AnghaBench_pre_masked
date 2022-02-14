
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int width; } ;


 int FUNC_0 (int **) ;

 int VAR_0 ;
 int VAR_1 ;


 int ** VAR_2 ;
 int ** VAR_3 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct sd*,int ,int ) ;
 int FUNC_3 (struct sd*,int ,int *,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct sd *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 u8 VAR_7[2];
 struct cam *VAR_8 = &VAR_4->gspca_dev.cam;
 struct gspca_dev *VAR_9 = (struct gspca_dev *)VAR_4;

 switch (VAR_8->cam_mode[VAR_4->gspca_dev.curr_mode].width) {
 case 1280:
  FUNC_1(VAR_9, VAR_0, "Configuring camera for SXGA mode\n");

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
   switch (VAR_2[VAR_5][0]) {
   case 130:
    VAR_6 = FUNC_2(VAR_4,
       VAR_2[VAR_5][1],
       VAR_2[VAR_5][2]);
   break;

   case 129:
    VAR_7[0] = VAR_2[VAR_5][2];
    VAR_6 = FUNC_3(VAR_4,
       VAR_2[VAR_5][1],
       VAR_7, 1);
   break;

   case 128:
    VAR_7[0] = VAR_2[VAR_5][2];
    VAR_7[1] = VAR_2[VAR_5][3];
    VAR_6 = FUNC_3(VAR_4,
        VAR_2[VAR_5][1],
        VAR_7, 2);
   break;

   default:
    FUNC_4("Invalid stream command, exiting init\n");
    return -VAR_1;
   }
  }
  break;

 case 640:
  FUNC_1(VAR_9, VAR_0, "Configuring camera for VGA mode\n");

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
   switch (VAR_3[VAR_5][0]) {
   case 130:
    VAR_6 = FUNC_2(VAR_4,
       VAR_3[VAR_5][1],
       VAR_3[VAR_5][2]);
   break;

   case 129:
    VAR_7[0] = VAR_3[VAR_5][2];
    VAR_6 = FUNC_3(VAR_4,
       VAR_3[VAR_5][1],
       VAR_7, 1);
   break;

   case 128:
    VAR_7[0] = VAR_3[VAR_5][2];
    VAR_7[1] = VAR_3[VAR_5][3];
    VAR_6 = FUNC_3(VAR_4,
        VAR_3[VAR_5][1],
        VAR_7, 2);
   break;

   default:
    FUNC_4("Invalid stream command, exiting init\n");
    return -VAR_1;
   }
  }
  break;
 }
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
