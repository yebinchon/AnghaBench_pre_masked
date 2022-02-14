
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* unregister_backlight ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;
struct fb_info {struct fbtft_par* par; } ;


 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fb_info*) ;

int FUNC_3(struct fb_info *VAR_0)
{
 struct fbtft_par *VAR_1 = VAR_0->par;

 if (VAR_1->fbtftops.unregister_backlight)
  VAR_1->fbtftops.unregister_backlight(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0);

 return 0;
}
