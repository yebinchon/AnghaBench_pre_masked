
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int activate; } ;
struct fb_info {int cmap; int device; TYPE_1__ var; int screen_base; struct cirrusfb_info* par; } ;
struct cirrusfb_info {scalar_t__ btype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,struct fb_info*,int ,int *,int ,int *,int) ;
 int VAR_3 ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_4)
{
 struct cirrusfb_info *VAR_5 = VAR_4->par;
 int VAR_6;


 FUNC_0(VAR_5->btype != VAR_0);


 FUNC_2(VAR_4);

 FUNC_3(VAR_4->device, "(RAM start set to: 0x%p)\n", VAR_4->screen_base);

 VAR_6 = FUNC_6(&VAR_4->var, VAR_4, VAR_3, ((void*)0), 0, ((void*)0), 8);
 if (!VAR_6) {
  FUNC_3(VAR_4->device, "wrong initial video mode\n");
  VAR_6 = -VAR_1;
  goto err_dealloc_cmap;
 }

 VAR_4->var.activate = VAR_2;

 VAR_6 = FUNC_1(&VAR_4->var, VAR_4);
 if (VAR_6 < 0) {

  FUNC_3(VAR_4->device,
   "choking on default var... umm, no good.\n");
  goto err_dealloc_cmap;
 }

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6 < 0) {
  FUNC_4(VAR_4->device,
   "could not register fb device; err = %d!\n", VAR_6);
  goto err_dealloc_cmap;
 }

 return 0;

err_dealloc_cmap:
 FUNC_5(&VAR_4->cmap);
 return VAR_6;
}
