
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {int blank; int lcd_supply; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct fb_info *VAR_3)
{
 struct da8xx_fb_par *VAR_4 = VAR_3->par;
 int VAR_5 = 0;

 if (VAR_4->blank == VAR_2)
  return 0;

 VAR_4->blank = VAR_2;
 switch (VAR_2) {
 case 129:
  FUNC_1();

  if (VAR_4->lcd_supply) {
   VAR_5 = FUNC_3(VAR_4->lcd_supply);
   if (VAR_5)
    return VAR_5;
  }
  break;
 case 131:
 case 128:
 case 132:
 case 130:
  if (VAR_4->lcd_supply) {
   VAR_5 = FUNC_2(VAR_4->lcd_supply);
   if (VAR_5)
    return VAR_5;
  }

  FUNC_0(VAR_0);
  break;
 default:
  VAR_5 = -VAR_1;
 }

 return VAR_5;
}
