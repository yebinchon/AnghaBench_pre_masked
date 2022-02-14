
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int dummy; } ;
struct fb_info {struct sh_mobile_lcdc_chan* par; } ;


 int VAR_0 ;

 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = VAR_1->par;
 int VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_4);
  break;

 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
