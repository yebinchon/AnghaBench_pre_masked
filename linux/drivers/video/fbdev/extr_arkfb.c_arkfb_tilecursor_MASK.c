
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_tilecursor {int dummy; } ;
struct fb_info {struct arkfb_info* par; } ;
struct TYPE_2__ {int vgabase; } ;
struct arkfb_info {TYPE_1__ state; } ;


 int FUNC_0 (int ,struct fb_info*,struct fb_tilecursor*) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_0, struct fb_tilecursor *VAR_1)
{
 struct arkfb_info *VAR_2 = VAR_0->par;

 FUNC_0(VAR_2->state.vgabase, VAR_0, VAR_1);
}
