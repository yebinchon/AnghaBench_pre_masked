
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct au1100fb_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int lcd_control; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int,struct fb_info*) ;
 struct au1100fb_device* FUNC_1 (struct fb_info*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct fb_info *VAR_2)
{
 struct au1100fb_device *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("fb_blank %d %p", VAR_1, VAR_2);

 switch (VAR_1) {

 case 130:

  VAR_3->regs->lcd_control |= VAR_0;
  FUNC_2();
  break;

 case 128:
 case 131:
 case 129:

  VAR_3->regs->lcd_control &= ~VAR_0;
  FUNC_2();
  break;
 default:
  break;

 }
 return 0;
}
