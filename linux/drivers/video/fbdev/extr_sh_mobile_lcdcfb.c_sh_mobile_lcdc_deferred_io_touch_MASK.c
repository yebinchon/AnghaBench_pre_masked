
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int deferred_work; struct fb_deferred_io* fbdefio; } ;
struct fb_deferred_io {int delay; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_0)
{
 struct fb_deferred_io *VAR_1 = VAR_0->fbdefio;

 if (VAR_1)
  FUNC_0(&VAR_0->deferred_work, VAR_1->delay);
}
