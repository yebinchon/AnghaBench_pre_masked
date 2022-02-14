
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_12__ {int mmio_len; int smem_len; unsigned short line_length; int id; void* smem_start; int visual; void* mmio_start; } ;
struct TYPE_10__ {int length; int offset; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_11__ {int bits_per_pixel; unsigned short xres; unsigned short yres; unsigned short xres_virtual; unsigned short yres_virtual; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int flags; int cmap; TYPE_6__ fix; void* screen_base; int par; int pseudo_palette; TYPE_5__ var; int * fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (struct fb_info*,char*,int ) ;
 unsigned short FUNC_5 (int ) ;
 struct fb_info* FUNC_6 (int,int *) ;
 int FUNC_7 (struct fb_info*) ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 TYPE_5__ VAR_13 ;
 int FUNC_8 (struct platform_device*,struct fb_info*) ;
 int FUNC_9 (struct fb_info*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_14)
{
 unsigned short VAR_15, VAR_16, VAR_17;
 struct fb_info *VAR_18;
 int VAR_19;

 if (FUNC_3("hitfb", ((void*)0)))
  return -VAR_0;

 VAR_11.mmio_start = FUNC_0(0x1000);
 VAR_11.mmio_len = 0x1000;
 VAR_11.smem_start = FUNC_0(0x02000000);
 VAR_11.smem_len = 512 * 1024;

 VAR_15 = FUNC_5(VAR_8);
 VAR_17 = FUNC_5(VAR_10);
 VAR_16 = FUNC_5(VAR_9);

 switch (VAR_16 & 15) {
 default:
 case 4:
  VAR_13.bits_per_pixel = 8;
  VAR_13.xres = VAR_15;
  break;
 case 8:
  VAR_13.bits_per_pixel = 16;
  VAR_13.xres = VAR_15 / 2;
  break;
 }
 VAR_11.line_length = VAR_15;
 VAR_11.visual = (VAR_13.bits_per_pixel == 8) ?
     VAR_6 : VAR_7;
 VAR_13.yres = VAR_17 + 1;
 VAR_13.xres_virtual = VAR_13.xres;
 VAR_13.yres_virtual = VAR_11.smem_len / VAR_15;
 switch (VAR_13.bits_per_pixel) {
 case 8:
  VAR_13.red.offset = 0;
  VAR_13.red.length = 8;
  VAR_13.green.offset = 0;
  VAR_13.green.length = 8;
  VAR_13.blue.offset = 0;
  VAR_13.blue.length = 8;
  VAR_13.transp.offset = 0;
  VAR_13.transp.length = 0;
  break;
 case 16:
  VAR_13.red.offset = 11;
  VAR_13.red.length = 5;
  VAR_13.green.offset = 5;
  VAR_13.green.length = 6;
  VAR_13.blue.offset = 0;
  VAR_13.blue.length = 5;
  VAR_13.transp.offset = 0;
  VAR_13.transp.length = 0;
  break;
 }

 VAR_18 = FUNC_6(sizeof(u32) * 16, &VAR_14->dev);
 if (FUNC_10(!VAR_18))
  return -VAR_1;

 VAR_18->fbops = &VAR_12;
 VAR_18->var = VAR_13;
 VAR_18->fix = VAR_11;
 VAR_18->pseudo_palette = VAR_18->par;
 VAR_18->flags = VAR_2 | VAR_5 |
  VAR_4 | VAR_3;

 VAR_18->screen_base = (void *)VAR_11.smem_start;

 VAR_19 = FUNC_1(&VAR_18->cmap, 256, 0);
 if (FUNC_10(VAR_19 < 0))
  goto err_fb;

 VAR_19 = FUNC_9(VAR_18);
 if (FUNC_10(VAR_19 < 0))
  goto err;

 FUNC_8(VAR_14, VAR_18);

 FUNC_4(VAR_18, "%s frame buffer device\n", VAR_18->fix.id);

 return 0;

err:
 FUNC_2(&VAR_18->cmap);
err_fb:
 FUNC_7(VAR_18);
 return VAR_19;
}
