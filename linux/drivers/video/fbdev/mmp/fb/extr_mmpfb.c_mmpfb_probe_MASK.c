
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {struct mmp_buffer_driver_mach_info* platform_data; } ;
struct platform_device {TYPE_5__ dev; } ;
struct mmpfb_info {int fb_size; TYPE_5__* dev; int access_ok; int fb_start_dma; int * fb_start; int overlay; TYPE_3__* path; int pix_fmt; int name; struct fb_info* fb_info; } ;
struct mmp_buffer_driver_mach_info {int dmafetch_id; int overlay_id; int path_name; int default_pixfmt; int name; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {int yres_virtual; int yres; int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ fix; int node; TYPE_2__ var; struct mmpfb_info* par; } ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (TYPE_5__*,char*,int,...) ;
 int * FUNC_3 (TYPE_5__*,int ,int *,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int *,int ) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*,struct mmpfb_info*) ;
 int FUNC_7 (struct fb_info*,int ) ;
 int FUNC_8 (struct fb_info*,int ) ;
 struct fb_info* FUNC_9 (int,TYPE_5__*) ;
 int FUNC_10 (struct fb_info*) ;
 TYPE_3__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (struct mmpfb_info*,int) ;
 int FUNC_15 (struct mmpfb_info*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (struct platform_device*,struct mmpfb_info*) ;
 int FUNC_20 (struct fb_info*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_5)
{
 struct mmp_buffer_driver_mach_info *VAR_6;
 struct fb_info *VAR_7;
 struct mmpfb_info *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = VAR_5->dev.platform_data;
 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_5->dev, "no platform data defined\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_9(sizeof(struct mmpfb_info), &VAR_5->dev);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 VAR_8 = VAR_7->par;


 VAR_8->fb_info = VAR_7;
 FUNC_19(VAR_5, VAR_8);
 VAR_8->dev = &VAR_5->dev;
 VAR_8->name = VAR_6->name;
 VAR_8->pix_fmt = VAR_6->default_pixfmt;
 FUNC_18(&VAR_7->var, VAR_8->pix_fmt);
 FUNC_17(&VAR_8->access_ok);


 VAR_8->path = FUNC_11(VAR_6->path_name);
 if (!VAR_8->path) {
  FUNC_1(&VAR_5->dev, "can't get the path %s\n", VAR_6->path_name);
  VAR_9 = -VAR_0;
  goto failed_destroy_mutex;
 }

 FUNC_2(VAR_8->dev, "path %s get\n", VAR_8->path->name);


 VAR_8->overlay = FUNC_13(VAR_8->path, VAR_6->overlay_id);
 if (!VAR_8->overlay) {
  VAR_9 = -VAR_0;
  goto failed_destroy_mutex;
 }

 FUNC_12(VAR_8->overlay, VAR_6->dmafetch_id);

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10 < 0) {
  VAR_9 = VAR_10;
  goto failed_destroy_mutex;
 }





 if (VAR_10 > 0) {

  VAR_7->var.yres_virtual = VAR_7->var.yres * 2;


  VAR_8->fb_size = VAR_7->var.xres_virtual * VAR_7->var.yres_virtual
    * VAR_7->var.bits_per_pixel / 8;
 } else {
  VAR_8->fb_size = VAR_4;
 }

 VAR_8->fb_start = FUNC_3(&VAR_5->dev, FUNC_0(VAR_8->fb_size),
    &VAR_8->fb_start_dma, VAR_3);
 if (VAR_8->fb_start == ((void*)0)) {
  FUNC_1(&VAR_5->dev, "can't alloc framebuffer\n");
  VAR_9 = -VAR_1;
  goto failed_destroy_mutex;
 }
 FUNC_2(VAR_8->dev, "fb %dk allocated\n", VAR_8->fb_size/1024);


 if (VAR_10 > 0)
  FUNC_14(VAR_8, 1);

 VAR_9 = FUNC_6(VAR_7, VAR_8);
 if (VAR_9 < 0)
  goto failed_free_buff;

 VAR_9 = FUNC_20(VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_5->dev, "Failed to register fb: %d\n", VAR_9);
  VAR_9 = -VAR_2;
  goto failed_clear_info;
 }

 FUNC_2(VAR_8->dev, "loaded to /dev/fb%d <%s>.\n",
  VAR_7->node, VAR_7->fix.id);
 return 0;

failed_clear_info:
 FUNC_5(VAR_7);
failed_free_buff:
 FUNC_4(&VAR_5->dev, FUNC_0(VAR_8->fb_size), VAR_8->fb_start,
  VAR_8->fb_start_dma);
failed_destroy_mutex:
 FUNC_16(&VAR_8->access_ok);
 FUNC_1(VAR_8->dev, "mmp-fb: frame buffer device init failed\n");

 FUNC_10(VAR_7);

 return VAR_9;
}
