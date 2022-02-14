
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int vmode; int yoffset; int xoffset; } ;
struct fb_info {struct amifb_par* par; } ;
struct amifb_par {int vmode; int yoffset; int xoffset; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo *VAR_2, struct fb_info *VAR_3)
{
 struct amifb_par *VAR_4 = VAR_3->par;

 VAR_4->xoffset = VAR_2->xoffset;
 VAR_4->yoffset = VAR_2->yoffset;
 if (VAR_2->vmode & VAR_0)
  VAR_4->vmode |= VAR_0;
 else
  VAR_4->vmode &= ~VAR_0;

 VAR_1 = 0;
 FUNC_0(VAR_3);
 VAR_1 = 1;
}
