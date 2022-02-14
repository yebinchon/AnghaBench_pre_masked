
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int cmap; int screen_base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 FUNC_2(VAR_0->screen_base);
 FUNC_0(&VAR_0->cmap);

 FUNC_1(VAR_0);
}
