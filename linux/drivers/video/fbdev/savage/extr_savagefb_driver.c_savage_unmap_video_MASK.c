
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vbase; int wc_cookie; } ;
struct savagefb_par {TYPE_1__ video; } ;
struct fb_info {int * screen_base; struct savagefb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct savagefb_par *VAR_1 = VAR_0->par;

 FUNC_0("savage_unmap_video");

 if (VAR_1->video.vbase) {
  FUNC_1(VAR_1->video.wc_cookie);
  FUNC_2(VAR_1->video.vbase);
  VAR_1->video.vbase = ((void*)0);
  VAR_0->screen_base = ((void*)0);
 }
}
