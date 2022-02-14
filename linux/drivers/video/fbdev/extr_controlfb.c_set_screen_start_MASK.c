
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_par_control {int xoffset; int yoffset; int pitch; int cmode; } ;
struct fb_info_control {struct fb_par_control par; } ;


 int FUNC_0 (struct fb_info_control*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, int VAR_2,
 struct fb_info_control *VAR_3)
{
 struct fb_par_control *VAR_4 = &VAR_3->par;

 VAR_4->xoffset = VAR_1;
 VAR_4->yoffset = VAR_2;
 FUNC_1(FUNC_0(VAR_3,VAR_0),
   VAR_4->yoffset * VAR_4->pitch + (VAR_4->xoffset << VAR_4->cmode));
}
