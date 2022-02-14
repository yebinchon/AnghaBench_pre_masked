
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgastate {int vgabase; } ;
struct neofb_par {struct vgastate state; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_2__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; struct neofb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct vgastate*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct fb_var_screeninfo *VAR_0,
        struct fb_info *VAR_1)
{
 struct neofb_par *VAR_2 = VAR_1->par;
 struct vgastate *VAR_3 = &VAR_2->state;
 int VAR_4;
 int VAR_5;

 FUNC_0("neofb_update_start");

 VAR_5 = (VAR_0->yoffset * VAR_1->var.xres_virtual + VAR_0->xoffset) >> 2;
 VAR_5 *= (VAR_1->var.bits_per_pixel + 7) / 8;

 FUNC_2();




 FUNC_4(VAR_3->vgabase, 0x0C, (VAR_5 & 0x00FF00) >> 8);
 FUNC_4(VAR_3->vgabase, 0x0D, (VAR_5 & 0x00FF));






 VAR_4 = FUNC_3(((void*)0), 0x0E);
 FUNC_5(VAR_3->vgabase, 0x0E, (((VAR_5 >> 16) & 0x0f) | (VAR_4 & 0xf0)));

 FUNC_1(VAR_3);

 return 0;
}
