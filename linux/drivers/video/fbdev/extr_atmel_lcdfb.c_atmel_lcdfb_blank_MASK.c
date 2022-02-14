
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_info {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct atmel_lcdfb_info*) ;
 int FUNC_1 (struct atmel_lcdfb_info*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct fb_info *VAR_2)
{
 struct atmel_lcdfb_info *VAR_3 = VAR_2->par;

 switch (VAR_1) {
 case 129:
 case 131:
  FUNC_0(VAR_3);
  break;
 case 128:
 case 132:
  break;
 case 130:
  FUNC_1(VAR_3);
  break;
 default:
  return -VAR_0;
 }


 return ((VAR_1 == 131) ? 1 : 0);
}
