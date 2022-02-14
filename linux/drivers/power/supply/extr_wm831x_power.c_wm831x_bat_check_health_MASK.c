
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;

 int FUNC_0 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_10, int *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12 & VAR_6) {
  *VAR_11 = VAR_2;
  return 0;
 }

 if (VAR_12 & VAR_5) {
  *VAR_11 = VAR_0;
  return 0;
 }

 if (VAR_12 & VAR_7) {
  *VAR_11 = VAR_3;
  return 0;
 }

 switch (VAR_12 & VAR_9) {
 case 128:
 case 129:
  *VAR_11 = VAR_2;
  break;
 case 130:
  *VAR_11 = VAR_4;
  break;
 default:
  *VAR_11 = VAR_1;
  break;
 }

 return 0;
}
