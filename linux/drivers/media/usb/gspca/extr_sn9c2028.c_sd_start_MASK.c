
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; int avg_lum; scalar_t__ sof_read; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 VAR_2->sof_read = 0;

 switch (VAR_2->model) {
 case 0x7005:
  VAR_3 = FUNC_2(VAR_1);
  break;
 case 0x7003:
  VAR_3 = FUNC_3(VAR_1);
  break;
 case 0x8001:
  VAR_3 = FUNC_5(VAR_1);
  break;
 case 0x8003:
  VAR_3 = FUNC_1(VAR_1);
  break;
 case 0x8008:
  VAR_3 = FUNC_4(VAR_1);
  break;
 case 0x800a:
  VAR_3 = FUNC_6(VAR_1);
  break;
 default:
  FUNC_0("Starting unknown camera, please report this\n");
  return -VAR_0;
 }

 VAR_2->avg_lum = -1;

 return VAR_3;
}
