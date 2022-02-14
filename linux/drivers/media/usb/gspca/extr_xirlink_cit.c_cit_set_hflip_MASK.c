
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 switch (VAR_2->model) {
 case 132:
  if (VAR_1)
   FUNC_0(VAR_0, 0x0020, 0x0115);
  else
   FUNC_0(VAR_0, 0x0040, 0x0115);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 133:
  break;
 }
}
