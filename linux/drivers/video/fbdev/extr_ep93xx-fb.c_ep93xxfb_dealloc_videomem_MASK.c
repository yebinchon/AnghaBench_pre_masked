
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; int dev; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_0)
{
 if (VAR_0->screen_base)
  FUNC_0(VAR_0->dev, VAR_0->fix.smem_len,
      VAR_0->screen_base, VAR_0->fix.smem_start);
}
