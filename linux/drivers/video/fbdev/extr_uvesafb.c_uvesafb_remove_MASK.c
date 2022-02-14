
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvesafb_par {int vbe_state_saved; int vbe_state_orig; int vbe_modes; int mtrr_handle; } ;
struct TYPE_4__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int modedb; } ;
struct TYPE_5__ {int smem_len; int smem_start; } ;
struct fb_info {int cmap; TYPE_3__ monspecs; TYPE_2__ fix; int screen_base; struct uvesafb_par* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct fb_info* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct fb_info*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_6(VAR_1);

 if (VAR_2) {
  struct uvesafb_par *VAR_3 = VAR_2->par;

  FUNC_9(&VAR_1->dev.kobj, &VAR_0);
  FUNC_10(VAR_2);
  FUNC_8(0x3c0, 32);
  FUNC_4(VAR_2->screen_base);
  FUNC_0(VAR_3->mtrr_handle);
  FUNC_7(VAR_2->fix.smem_start, VAR_2->fix.smem_len);
  FUNC_2(VAR_2->monspecs.modedb);
  FUNC_1(&VAR_2->cmap);

  FUNC_5(VAR_3->vbe_modes);
  FUNC_5(VAR_3->vbe_state_orig);
  FUNC_5(VAR_3->vbe_state_saved);

  FUNC_3(VAR_2);
 }
 return 0;
}
