
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;
struct fb_par_valkyrie {int cmode; int vmode; } ;


 int FUNC_0 (int ,int ,struct fb_var_screeninfo*) ;

__attribute__((used)) static inline int FUNC_1(struct fb_par_valkyrie *VAR_0,
          struct fb_var_screeninfo *VAR_1)
{
 return FUNC_0(VAR_0->vmode, VAR_0->cmode, VAR_1);
}
