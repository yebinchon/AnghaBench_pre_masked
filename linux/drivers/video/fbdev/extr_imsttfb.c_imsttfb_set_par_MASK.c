
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imstt_par {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int pixclock; int bits_per_pixel; TYPE_1__ green; int yres; int xres; } ;
struct fb_info {TYPE_2__ var; struct imstt_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct imstt_par*,int ,int ) ;
 int FUNC_1 (struct imstt_par*) ;
 int FUNC_2 (struct imstt_par*) ;
 int FUNC_3 (struct imstt_par*) ;
 int FUNC_4 (struct fb_info*,int ) ;

__attribute__((used)) static int
FUNC_5(struct fb_info *VAR_1)
{
 struct imstt_par *VAR_2 = VAR_1->par;

 if (!FUNC_0(VAR_2, VAR_1->var.xres, VAR_1->var.yres))
  return -VAR_0;

 if (VAR_1->var.green.length == 6)
  FUNC_3(VAR_2);
 else
  FUNC_2(VAR_2);
 FUNC_4(VAR_1, VAR_1->var.bits_per_pixel);
 VAR_1->var.pixclock = 1000000 / FUNC_1(VAR_2);
 return 0;
}
