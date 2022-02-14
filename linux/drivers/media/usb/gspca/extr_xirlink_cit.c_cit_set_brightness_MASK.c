
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;
 int VAR_3;

 switch (VAR_2->model) {
 case 132:
 case 133:

  break;
 case 131:

  FUNC_0(VAR_0, 0x0031, VAR_1);
  FUNC_0(VAR_0, 0x0032, VAR_1);
  FUNC_0(VAR_0, 0x0033, VAR_1);
  break;
 case 130:


  VAR_3 = 0x60 + VAR_1 * 2254 / 1000;
  FUNC_1(VAR_0, 0x001a, VAR_3);
  break;
 case 129:

  VAR_3 = VAR_1;
  if (VAR_3 < 0x0c)
   VAR_3 = 0x0c;
  FUNC_2(VAR_0, 0x0036, VAR_3);
  break;
 case 128:


  VAR_3 = 0x04 + VAR_1 * 2794 / 1000;
  FUNC_3(VAR_0, VAR_3);
  break;
 }

 return 0;
}
