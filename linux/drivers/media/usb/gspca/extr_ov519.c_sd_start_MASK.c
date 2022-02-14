
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {TYPE_2__ pixfmt; } ;
struct sd {int bridge; int snapshot_needs_reset; int first_frame; TYPE_1__ gspca_dev; int sensor_height; int sensor_width; } ;
struct gspca_dev {int usb_err; } ;
 int FUNC_0 (struct sd*) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct sd*) ;
 int FUNC_7 (struct sd*) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;


 VAR_1->sensor_width = VAR_1->gspca_dev.pixfmt.width;
 VAR_1->sensor_height = VAR_1->gspca_dev.pixfmt.height;

 switch (VAR_1->bridge) {
 case 133:
 case 132:
  FUNC_0(VAR_1);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_1);
  break;
 case 129:
  FUNC_2(VAR_1);
  break;

 case 128:
  FUNC_7(VAR_1);
  break;
 }

 FUNC_6(VAR_1);



 VAR_1->snapshot_needs_reset = 1;
 FUNC_5(VAR_0);

 VAR_1->first_frame = 3;

 FUNC_4(VAR_1);
 FUNC_3(VAR_1, 1);
 return VAR_0->usb_err;
}
