
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int work_struct; int work_thread; int gspca_dev; } ;
struct gspca_dev {int curr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 int VAR_7;


 switch (VAR_5->curr_mode) {
 default:

  FUNC_1(VAR_5, VAR_0, "Start streaming at high resolution\n");
  VAR_7 = FUNC_4(&VAR_6->gspca_dev, VAR_2);
  break;
 case 1:
  FUNC_1(VAR_5, VAR_0, "Start streaming at medium resolution\n");
  VAR_7 = FUNC_4(&VAR_6->gspca_dev, VAR_4);
  break;
 case 0:
  FUNC_1(VAR_5, VAR_0, "Start streaming at low resolution\n");
  VAR_7 = FUNC_4(&VAR_6->gspca_dev, VAR_3);
 }

 if (VAR_7 < 0) {
  FUNC_2(VAR_5, "Start streaming command failed\n");
  return VAR_7;
 }

 VAR_6->work_thread = FUNC_0(VAR_1);
 FUNC_3(VAR_6->work_thread, &VAR_6->work_struct);

 return 0;
}
