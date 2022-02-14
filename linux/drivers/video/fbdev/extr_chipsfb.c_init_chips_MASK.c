
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long smem_start; } ;
struct fb_info {int cmap; int flags; int * fbops; int var; TYPE_1__ fix; int screen_base; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_4, unsigned long VAR_5)
{
 FUNC_2(VAR_4->screen_base, 0, 0x100000);

 VAR_4->fix = VAR_1;
 VAR_4->fix.smem_start = VAR_5;

 VAR_4->var = VAR_3;

 VAR_4->fbops = &VAR_2;
 VAR_4->flags = VAR_0;

 FUNC_1(&VAR_4->cmap, 256, 0);

 FUNC_0();
}
