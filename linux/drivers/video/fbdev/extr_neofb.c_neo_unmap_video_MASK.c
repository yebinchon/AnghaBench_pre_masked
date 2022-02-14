
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neofb_par {int wc_cookie; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ fix; int * screen_base; struct neofb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_0)
{
 struct neofb_par *VAR_1 = VAR_0->par;

 FUNC_0("neo_unmap_video");

 FUNC_1(VAR_1->wc_cookie);
 FUNC_2(VAR_0->screen_base);
 VAR_0->screen_base = ((void*)0);

 FUNC_3(VAR_0->fix.smem_start,
      VAR_0->fix.smem_len);
}
