
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct sh_mobile_lcdc_chan {int fb_size; int dma_handle; int fb_mem; TYPE_1__* lcdc; } ;
struct fb_info {struct sh_mobile_lcdc_chan* par; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct sh_mobile_lcdc_chan *VAR_2 = VAR_0->par;

 return FUNC_0(VAR_2->lcdc->dev, VAR_1, VAR_2->fb_mem,
     VAR_2->dma_handle, VAR_2->fb_size);
}
