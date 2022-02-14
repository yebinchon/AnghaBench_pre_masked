
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int work_struct; int cap_mode; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_3__ {int cam_mode; } ;
struct gspca_dev {TYPE_2__ pixfmt; TYPE_1__ cam; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_1)
{

 struct sd *VAR_2 = (struct sd *) VAR_1;
 VAR_2->cap_mode = VAR_1->cam.cam_mode;

 switch (VAR_1->pixfmt.width) {
 case 640:
  FUNC_0(VAR_1, VAR_0, "Start streaming at vga resolution\n");
  FUNC_3(VAR_1);
  break;
 case 320:
  FUNC_0(VAR_1, VAR_0, "Start streaming at qvga resolution\n");
  FUNC_4(VAR_1);
  break;
 case 352:
  FUNC_0(VAR_1, VAR_0, "Start streaming at cif resolution\n");
  FUNC_1(VAR_1);
  break;
 case 176:
  FUNC_0(VAR_1, VAR_0, "Start streaming at qcif resolution\n");
  FUNC_2(VAR_1);
  break;
 default:
  FUNC_5("Unknown resolution specified\n");
  return -1;
 }

 FUNC_6(&VAR_2->work_struct);

 return 0;
}
