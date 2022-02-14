
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int device; int cmap; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int (* unmap ) (struct fb_info*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct cirrusfb_info*,int ) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_0)
{
 struct cirrusfb_info *VAR_1 = VAR_0->par;

 FUNC_4(VAR_1, 0);
 FUNC_5(VAR_0);
 FUNC_1(&VAR_0->cmap);
 FUNC_0(VAR_0->device, "Framebuffer unregistered\n");
 VAR_1->unmap(VAR_0);
 FUNC_2(VAR_0);
}
