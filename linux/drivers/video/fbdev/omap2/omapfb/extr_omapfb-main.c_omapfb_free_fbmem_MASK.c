
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {scalar_t__ rotation_type; struct omapfb2_mem_region* region; struct omapfb2_device* fbdev; } ;
struct TYPE_2__ {int ** vaddr; } ;
struct omapfb2_mem_region {scalar_t__ size; scalar_t__ alloc; scalar_t__ paddr; int * vaddr; int * token; int attrs; int dma_handle; TYPE_1__ vrfb; int map_count; } ;
struct omapfb2_device {int dev; } ;
struct fb_info {int dummy; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_1)
{
 struct omapfb_info *VAR_2 = FUNC_0(VAR_1);
 struct omapfb2_device *VAR_3 = VAR_2->fbdev;
 struct omapfb2_mem_region *VAR_4;

 VAR_4 = VAR_2->region;

 if (VAR_4->token == ((void*)0))
  return;

 FUNC_1(FUNC_2(&VAR_4->map_count));

 if (VAR_2->rotation_type == VAR_0) {

  if (VAR_4->vrfb.vaddr[0]) {
   FUNC_4(VAR_4->vrfb.vaddr[0]);
   VAR_4->vrfb.vaddr[0] = ((void*)0);
  }

  FUNC_5(&VAR_4->vrfb);
 }

 FUNC_3(VAR_3->dev, VAR_4->size, VAR_4->token, VAR_4->dma_handle,
   VAR_4->attrs);

 VAR_4->token = ((void*)0);
 VAR_4->vaddr = ((void*)0);
 VAR_4->paddr = 0;
 VAR_4->alloc = 0;
 VAR_4->size = 0;
}
