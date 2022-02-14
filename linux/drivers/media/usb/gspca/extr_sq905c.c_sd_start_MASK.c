
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int work_struct; int work_thread; int cap_mode; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_3__ {int cam_mode; } ;
struct gspca_dev {TYPE_2__ pixfmt; TYPE_1__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 int VAR_7;

 VAR_6->cap_mode = VAR_5->cam.cam_mode;

 switch (VAR_5->pixfmt.width) {
 case 640:
  FUNC_1(VAR_5, VAR_0, "Start streaming at high resolution\n");
  VAR_6->cap_mode++;
  VAR_7 = FUNC_4(VAR_5, VAR_2,
      VAR_3);
  break;
 default:
  FUNC_1(VAR_5, VAR_0, "Start streaming at medium resolution\n");
  VAR_7 = FUNC_4(VAR_5, VAR_4,
      VAR_3);
 }

 if (VAR_7 < 0) {
  FUNC_2(VAR_5, "Start streaming command failed\n");
  return VAR_7;
 }

 VAR_6->work_thread = FUNC_0(VAR_1);
 FUNC_3(VAR_6->work_thread, &VAR_6->work_struct);

 return 0;
}
