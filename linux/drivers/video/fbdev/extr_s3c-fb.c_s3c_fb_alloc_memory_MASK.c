
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_fb_win {struct fb_info* fbinfo; struct s3c_fb_pd_win* windata; } ;
struct s3c_fb_pd_win {unsigned int xres; unsigned int yres; unsigned int virtual_x; unsigned int virtual_y; int max_bpp; } ;
struct s3c_fb {int dev; } ;
struct TYPE_2__ {unsigned int smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_buffer; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,unsigned int,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct s3c_fb *VAR_2, struct s3c_fb_win *VAR_3)
{
 struct s3c_fb_pd_win *VAR_4 = VAR_3->windata;
 unsigned int VAR_5, VAR_6, VAR_7;
 struct fb_info *VAR_8 = VAR_3->fbinfo;
 dma_addr_t VAR_9;

 FUNC_1(VAR_2->dev, "allocating memory for display\n");

 VAR_5 = VAR_4->xres * VAR_4->yres;
 VAR_6 = VAR_4->virtual_x * VAR_4->virtual_y;

 FUNC_1(VAR_2->dev, "real_size=%u (%u.%u), virt_size=%u (%u.%u)\n",
  VAR_5, VAR_4->xres, VAR_4->yres,
  VAR_6, VAR_4->virtual_x, VAR_4->virtual_y);

 VAR_7 = (VAR_5 > VAR_6) ? VAR_5 : VAR_6;
 VAR_7 *= (VAR_4->max_bpp > 16) ? 32 : VAR_4->max_bpp;
 VAR_7 /= 8;

 VAR_8->fix.smem_len = VAR_7;
 VAR_7 = FUNC_0(VAR_7);

 FUNC_1(VAR_2->dev, "want %u bytes for window\n", VAR_7);

 VAR_8->screen_buffer = FUNC_2(VAR_2->dev, VAR_7, &VAR_9, VAR_1);
 if (!VAR_8->screen_buffer)
  return -VAR_0;

 FUNC_1(VAR_2->dev, "mapped %x to %p\n",
  (unsigned int)VAR_9, VAR_8->screen_buffer);

 FUNC_3(VAR_8->screen_buffer, 0x0, VAR_7);
 VAR_8->fix.smem_start = VAR_9;

 return 0;
}
