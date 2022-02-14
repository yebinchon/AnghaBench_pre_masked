
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct sh_mobile_lcdc_overlay {int fb_size; int dma_handle; int fb_mem; TYPE_2__* channel; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;
struct TYPE_4__ {TYPE_1__* lcdc; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct sh_mobile_lcdc_overlay *VAR_2 = VAR_0->par;

 return FUNC_0(VAR_2->channel->lcdc->dev, VAR_1, VAR_2->fb_mem,
     VAR_2->dma_handle, VAR_2->fb_size);
}
