
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct wm8350* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5)
{
 struct wm8350 *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(VAR_6, VAR_3);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_6, VAR_4);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8 & VAR_1) {
  switch (VAR_8 & VAR_2) {
  case 0:
   return 0;
  case 1:
   return 1950;
  case 2:
   return 3910;
  case 3:
   return 7800;
  }
 } else {
  switch (VAR_8 & VAR_2) {
  case 0:
   return 0;
  case 1:
   return 250000;
  case 2:
   return 500000;
  case 3:
   return 1000000;
  }
 }

 return -VAR_0;
}
