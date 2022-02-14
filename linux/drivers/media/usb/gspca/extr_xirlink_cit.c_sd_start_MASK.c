
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_9(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 switch (VAR_1->model) {
 case 132:
  FUNC_3(VAR_0);
  break;
 case 131:
  FUNC_4(VAR_0);
  break;
 case 130:
  FUNC_5(VAR_0);
  break;
 case 129:
  FUNC_6(VAR_0);
  break;
 case 128:
  FUNC_7(VAR_0);
  break;
 case 133:
  FUNC_2(VAR_0);
  break;
 }


 FUNC_8(VAR_0, VAR_2 >> 8, 0x0106);
 FUNC_8(VAR_0, VAR_2 & 0xff, 0x0107);

 FUNC_1(VAR_0);

 return 0;
}
