
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct fb_info {TYPE_1__ cmap; } ;
struct pxafb_info {int dma_buff_phys; int dma_buff; int dma_buff_size; int video_mem_size; int video_mem; struct fb_info fb; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 struct pxafb_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct pxafb_info*) ;
 int FUNC_5 (struct pxafb_info*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct pxafb_info *VAR_1 = FUNC_3(VAR_0);
 struct fb_info *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = &VAR_1->fb;

 FUNC_5(VAR_1);
 FUNC_6(VAR_2);

 FUNC_4(VAR_1);

 if (VAR_1->fb.cmap.len)
  FUNC_1(&VAR_1->fb.cmap);

 FUNC_2(VAR_1->video_mem, VAR_1->video_mem_size);

 FUNC_0(&VAR_0->dev, VAR_1->dma_buff_size, VAR_1->dma_buff,
      VAR_1->dma_buff_phys);

 return 0;
}
