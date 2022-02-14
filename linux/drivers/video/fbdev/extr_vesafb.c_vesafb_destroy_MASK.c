
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vesafb_par {int wc_cookie; } ;
struct fb_info {TYPE_1__* apertures; scalar_t__ screen_base; int cmap; struct vesafb_par* par; } ;
struct TYPE_4__ {int size; int base; } ;
struct TYPE_3__ {TYPE_2__* ranges; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_0)
{
 struct vesafb_par *VAR_1 = VAR_0->par;

 FUNC_1(&VAR_0->cmap);
 FUNC_0(VAR_1->wc_cookie);
 if (VAR_0->screen_base)
  FUNC_2(VAR_0->screen_base);
 FUNC_3(VAR_0->apertures->ranges[0].base, VAR_0->apertures->ranges[0].size);
}
