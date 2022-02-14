
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vbe_mode_ib {int dummy; } ;
struct TYPE_5__ {int total_memory; } ;
struct uvesafb_par {struct vbe_mode_ib* vbe_modes; TYPE_1__ vbe_ib; } ;
struct TYPE_8__ {int kobj; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_7__ {int modedb; } ;
struct TYPE_6__ {int smem_len; int smem_start; int id; } ;
struct fb_info {int cmap; TYPE_3__ monspecs; int modelist; TYPE_2__ fix; int screen_base; int * fbops; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fb_info*,char*,int ) ;
 int FUNC_5 (struct fb_info*,char*) ;
 struct fb_info* FUNC_6 (int,TYPE_4__*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vbe_mode_ib*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct fb_info*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int ,int ,int,int) ;
 scalar_t__ FUNC_14 (struct fb_info*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int ,int,char*) ;
 int FUNC_18 (int,int,char*) ;
 int FUNC_19 (int *,int *) ;
 int VAR_4 ;
 int FUNC_20 (struct fb_info*,struct vbe_mode_ib*) ;
 int FUNC_21 (struct fb_info*) ;
 int FUNC_22 (struct fb_info*) ;
 int VAR_5 ;
 int FUNC_23 (struct fb_info*) ;
 int FUNC_24 (struct fb_info*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_6)
{
 struct fb_info *VAR_7;
 struct vbe_mode_ib *VAR_8 = ((void*)0);
 struct uvesafb_par *VAR_9;
 int VAR_10 = 0, VAR_11;

 VAR_7 = FUNC_6(sizeof(*VAR_9) + sizeof(u32) * 256, &VAR_6->dev);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = VAR_7->par;

 VAR_10 = FUNC_23(VAR_7);
 if (VAR_10) {
  FUNC_12("vbe_init() failed with %d\n", VAR_10);
  goto out;
 }

 VAR_7->fbops = &VAR_5;

 VAR_11 = FUNC_24(VAR_7);
 if (VAR_11 < 0) {
  VAR_10 = -VAR_0;
  goto out;
 } else {
  VAR_8 = &VAR_9->vbe_modes[VAR_11];
 }

 if (FUNC_0(&VAR_7->cmap, 256, 0) < 0) {
  VAR_10 = -VAR_3;
  goto out;
 }

 FUNC_20(VAR_7, VAR_8);

 if (!FUNC_18(0x3c0, 32, "uvesafb")) {
  FUNC_12("request region 0x3c0-0x3e0 failed\n");
  VAR_10 = -VAR_1;
  goto out_mode;
 }

 if (!FUNC_17(VAR_7->fix.smem_start, VAR_7->fix.smem_len,
    "uvesafb")) {
  FUNC_12("cannot reserve video memory at 0x%lx\n",
         VAR_7->fix.smem_start);
  VAR_10 = -VAR_1;
  goto out_reg;
 }

 FUNC_21(VAR_7);
 FUNC_22(VAR_7);

 if (!VAR_7->screen_base) {
  FUNC_12("abort, cannot ioremap 0x%x bytes of video memory at 0x%lx\n",
         VAR_7->fix.smem_len, VAR_7->fix.smem_start);
  VAR_10 = -VAR_1;
  goto out_mem;
 }

 FUNC_11(VAR_6, VAR_7);

 if (FUNC_14(VAR_7) < 0) {
  FUNC_12("failed to register framebuffer device\n");
  VAR_10 = -VAR_0;
  goto out_unmap;
 }

 FUNC_13("framebuffer at 0x%lx, mapped to 0x%p, using %dk, total %dk\n",
  VAR_7->fix.smem_start, VAR_7->screen_base,
  VAR_7->fix.smem_len / 1024, VAR_9->vbe_ib.total_memory * 64);
 FUNC_4(VAR_7, "%s frame buffer device\n", VAR_7->fix.id);

 VAR_10 = FUNC_19(&VAR_6->dev.kobj, &VAR_4);
 if (VAR_10 != 0)
  FUNC_5(VAR_7, "failed to register attributes\n");

 return 0;

out_unmap:
 FUNC_8(VAR_7->screen_base);
out_mem:
 FUNC_15(VAR_7->fix.smem_start, VAR_7->fix.smem_len);
out_reg:
 FUNC_16(0x3c0, 32);
out_mode:
 if (!FUNC_10(&VAR_7->modelist))
  FUNC_3(&VAR_7->modelist);
 FUNC_2(VAR_7->monspecs.modedb);
 FUNC_1(&VAR_7->cmap);
out:
 FUNC_9(VAR_9->vbe_modes);

 FUNC_7(VAR_7);
 return VAR_10;
}
