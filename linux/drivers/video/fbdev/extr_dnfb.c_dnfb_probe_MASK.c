
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct platform_device {int dev; } ;
struct TYPE_6__ {scalar_t__ smem_start; } ;
struct TYPE_4__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {TYPE_1__ red; TYPE_1__ blue; TYPE_1__ green; } ;
struct fb_info {int cmap; TYPE_3__ fix; int * screen_base; TYPE_2__ var; int * fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 TYPE_2__ VAR_15 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 struct fb_info* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct platform_device*,struct fb_info*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct fb_info*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_16)
{
 struct fb_info *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_3(0, &VAR_16->dev);
 if (!VAR_17)
  return -VAR_8;

 VAR_17->fbops = &VAR_13;
 VAR_17->fix = VAR_14;
 VAR_17->var = VAR_15;
 VAR_17->var.red.length = 1;
 VAR_17->var.red.offset = 0;
 VAR_17->var.green = VAR_17->var.blue = VAR_17->var.red;
 VAR_17->screen_base = (u_char *) VAR_17->fix.smem_start;

 VAR_18 = FUNC_1(&VAR_17->cmap, 2, 0);
 if (VAR_18 < 0)
  goto release_framebuffer;

 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18 < 0) {
  FUNC_2(&VAR_17->cmap);
  goto release_framebuffer;
 }
 FUNC_7(VAR_16, VAR_17);


 FUNC_5(VAR_4, VAR_11);
 FUNC_6(VAR_6, 0x0);
 FUNC_5(VAR_1, VAR_9);
 FUNC_5(VAR_2, (VAR_0 | VAR_7 | VAR_10));
 FUNC_5(VAR_3, VAR_12);
 FUNC_6(VAR_5, FUNC_0(0x3));

 FUNC_8("apollo frame buffer alive and kicking !\n");
 return VAR_18;

release_framebuffer:
 FUNC_4(VAR_17);
 return VAR_18;
}
