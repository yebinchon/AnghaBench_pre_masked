
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {int fb_size; TYPE_3__* lcdc; TYPE_1__* cfg; int bl; int sglist; struct fb_info* info; } ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {int bits_per_pixel; int yres; int xres; } ;
struct fb_info {scalar_t__ state; scalar_t__ fbdefio; TYPE_2__ var; int bl_dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct sh_mobile_lcdc_chan *VAR_4)
{
 struct fb_info *VAR_5 = VAR_4->info;
 int VAR_6;

 if (VAR_5->fbdefio) {
  VAR_4->sglist = FUNC_4(sizeof(struct scatterlist) *
         VAR_4->fb_size >> VAR_3);
  if (!VAR_4->sglist)
   return -VAR_0;
 }

 VAR_5->bl_dev = VAR_4->bl;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_4->lcdc->dev, "registered %s/%s as %dx%d %dbpp.\n",
   FUNC_1(VAR_4->lcdc->dev), (VAR_4->cfg->chan == VAR_2) ?
   "mainlcd" : "sublcd", VAR_5->var.xres, VAR_5->var.yres,
   VAR_5->var.bits_per_pixel);


 if (VAR_5->fbdefio || VAR_5->state == VAR_1)
  FUNC_3(VAR_4->lcdc);

 return VAR_6;
}
