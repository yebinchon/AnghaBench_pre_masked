
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {int channel; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, unsigned int VAR_2,
          unsigned long VAR_3)
{
 struct sh_mobile_lcdc_overlay *VAR_4 = VAR_1->par;

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_4->channel);

 default:
  return -VAR_0;
 }
}
