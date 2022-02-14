
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvfb_par {TYPE_1__* mem; } ;
struct fb_info {int screen_base; struct hvfb_par* par; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1)
{
 struct hvfb_par *VAR_2 = VAR_1->par;

 FUNC_0(VAR_1->screen_base);
 FUNC_1(VAR_2->mem->start, VAR_0);
 VAR_2->mem = ((void*)0);
}
