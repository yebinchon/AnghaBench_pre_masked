
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; int subtype; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->bridge) {
 default:



  FUNC_0(VAR_1, 0x31, 0, 0);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_1, 0x00, 0x2000, 0x0000);

  if (VAR_2->subtype == VAR_0) {



   FUNC_1(VAR_1, 0x24,
       0x00, 0x00, 0x9d, 1);
   FUNC_1(VAR_1, 0x01,
       0x0f, 0x00, 0xff, 1);
  } else {
   FUNC_4(VAR_1, 0x24, 0, 0);
   FUNC_0(VAR_1, 0x01, 0x000f, 0x0000);
  }
  break;
 }
}
