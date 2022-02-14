
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_base; int var; } ;


 int FUNC_0 (TYPE_1__*,struct fb_info*) ;
 int FUNC_1 (int *,struct fb_info*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_2)
{
 FUNC_1(&VAR_2->var, VAR_2);
 FUNC_0(&VAR_2->fix, VAR_2);


 VAR_2->screen_base = (VAR_0 ? VAR_1 :
    FUNC_2(VAR_2->fix.smem_start));
}
