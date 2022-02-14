
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410fb_info {int dev; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {int screen_base; TYPE_1__ fix; struct s3c2410fb_info* par; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int *,int ) ;
 int FUNC_2 (char*,struct s3c2410fb_info*,unsigned int,...) ;
 int FUNC_3 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_2)
{
 struct s3c2410fb_info *VAR_3 = VAR_2->par;
 dma_addr_t VAR_4;
 unsigned VAR_5 = FUNC_0(VAR_2->fix.smem_len);

 FUNC_2("map_video_memory(fbi=%p) map_size %u\n", VAR_3, VAR_5);

 VAR_2->screen_base = FUNC_1(VAR_3->dev, VAR_5, &VAR_4,
      VAR_1);

 if (VAR_2->screen_base) {

  FUNC_2("map_video_memory: clear %p:%08x\n",
   VAR_2->screen_base, VAR_5);
  FUNC_3(VAR_2->screen_base, 0x00, VAR_5);

  VAR_2->fix.smem_start = VAR_4;

  FUNC_2("map_video_memory: dma=%08lx cpu=%p size=%08x\n",
   VAR_2->fix.smem_start, VAR_2->screen_base, VAR_5);
 }

 return VAR_2->screen_base ? 0 : -VAR_0;
}
