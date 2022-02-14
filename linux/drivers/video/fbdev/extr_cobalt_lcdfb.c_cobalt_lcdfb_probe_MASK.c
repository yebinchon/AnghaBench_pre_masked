
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int smem_len; int smem_start; } ;
struct fb_info {int flags; int * par; int * pseudo_palette; int screen_size; TYPE_1__ fix; int * fbops; int screen_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct fb_info*,char*) ;
 struct fb_info* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct fb_info*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct fb_info *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(0, &VAR_6->dev);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_6, VAR_3, 0);
 if (!VAR_8) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 VAR_7->screen_size = FUNC_8(VAR_8);
 VAR_7->screen_base = FUNC_0(&VAR_6->dev, VAR_8->start,
      VAR_7->screen_size);
 if (!VAR_7->screen_base) {
  FUNC_3(VAR_7);
  return -VAR_1;
 }

 VAR_7->fbops = &VAR_4;
 VAR_7->fix = VAR_5;
 VAR_7->fix.smem_start = VAR_8->start;
 VAR_7->fix.smem_len = VAR_7->screen_size;
 VAR_7->pseudo_palette = ((void*)0);
 VAR_7->par = ((void*)0);
 VAR_7->flags = VAR_2;

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9 < 0) {
  FUNC_3(VAR_7);
  return VAR_9;
 }

 FUNC_6(VAR_6, VAR_7);

 FUNC_4(VAR_7);

 FUNC_1(VAR_7, "Cobalt server LCD frame buffer device\n");

 return 0;
}
