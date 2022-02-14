
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {TYPE_1__* fbops; int count; } ;
struct TYPE_2__ {int (* fb_destroy ) (struct fb_info*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0)
{
 if (!FUNC_0(&VAR_0->count))
  return;
 if (VAR_0->fbops->fb_destroy)
  VAR_0->fbops->fb_destroy(VAR_0);
}
