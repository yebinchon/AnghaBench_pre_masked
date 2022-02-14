
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {int dev; } ;
struct sh_mobile_lcdc_overlay {int index; struct fb_info* info; TYPE_2__* channel; } ;
struct TYPE_3__ {int bits_per_pixel; int yres; int xres; } ;
struct fb_info {int dev; TYPE_1__ var; } ;
struct TYPE_4__ {struct sh_mobile_lcdc_priv* lcdc; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int * VAR_0 ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int
FUNC_5(struct sh_mobile_lcdc_overlay *VAR_1)
{
 struct sh_mobile_lcdc_priv *VAR_2 = VAR_1->channel->lcdc;
 struct fb_info *VAR_3 = VAR_1->info;
 unsigned int VAR_4;
 int VAR_5;

 if (VAR_3 == ((void*)0))
  return 0;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_2->dev, "registered %s/overlay %u as %dx%d %dbpp.\n",
   FUNC_2(VAR_2->dev), VAR_1->index, VAR_3->var.xres,
   VAR_3->var.yres, VAR_3->var.bits_per_pixel);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); ++VAR_4) {
  VAR_5 = FUNC_3(VAR_3->dev, &VAR_0[VAR_4]);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
