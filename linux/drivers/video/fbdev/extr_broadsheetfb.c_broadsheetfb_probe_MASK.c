
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {struct broadsheet_board* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_11__ {int* red; int blue; int green; } ;
struct TYPE_13__ {int line_length; int smem_len; } ;
struct TYPE_12__ {int xres; int yres; int xres_virtual; int yres_virtual; } ;
struct fb_info {char* screen_base; int flags; TYPE_3__ cmap; int * fbdefio; struct broadsheetfb_par* par; TYPE_8__ fix; TYPE_7__ var; int * fbops; } ;
struct broadsheetfb_par {int panel_index; struct broadsheet_board* board; int io_lock; int waitq; int read_reg; int write_reg; struct fb_info* info; } ;
struct broadsheet_board {int (* get_panel_type ) () ;int (* setup_irq ) (struct fb_info*) ;int (* init ) (struct broadsheetfb_par*) ;int owner; int (* cleanup ) (struct broadsheetfb_par*) ;} ;
struct TYPE_9__ {int w; int h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct broadsheetfb_par*) ;
 int FUNC_1 (struct broadsheetfb_par*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_8__ VAR_9 ;
 int VAR_10 ;
 TYPE_7__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (struct fb_info*,char*,int) ;
 struct fb_info* FUNC_8 (int,TYPE_2__*) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 TYPE_1__* VAR_13 ;
 int FUNC_14 (struct platform_device*,struct fb_info*) ;
 int FUNC_15 (struct fb_info*) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (struct fb_info*) ;
 int FUNC_19 (struct broadsheetfb_par*) ;
 int FUNC_20 (struct broadsheetfb_par*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct fb_info*) ;
 int FUNC_23 (unsigned char*) ;
 unsigned char* FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_14)
{
 struct fb_info *VAR_15;
 struct broadsheet_board *VAR_16;
 int VAR_17 = -VAR_2;
 int VAR_18;
 unsigned char *VAR_19;
 struct broadsheetfb_par *VAR_20;
 int VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;


 VAR_16 = VAR_14->dev.platform_data;
 if (!VAR_16)
  return -VAR_0;


 if (!FUNC_21(VAR_16->owner))
  return -VAR_1;

 VAR_15 = FUNC_8(sizeof(struct broadsheetfb_par), &VAR_14->dev);
 if (!VAR_15)
  goto err;

 switch (VAR_16->get_panel_type()) {
 case 37:
  VAR_24 = 1;
  break;
 case 97:
  VAR_24 = 2;
  break;
 case 6:
 default:
  VAR_24 = 0;
  break;
 }

 VAR_22 = VAR_13[VAR_24].w;
 VAR_23 = VAR_13[VAR_24].h;

 VAR_18 = FUNC_16((VAR_22*VAR_23), VAR_5);

 VAR_19 = FUNC_24(VAR_18);
 if (!VAR_19)
  goto err_fb_rel;

 VAR_15->screen_base = (char *)VAR_19;
 VAR_15->fbops = &VAR_10;

 VAR_11.xres = VAR_22;
 VAR_11.yres = VAR_23;
 VAR_11.xres_virtual = VAR_22;
 VAR_11.yres_virtual = VAR_23;
 VAR_15->var = VAR_11;

 VAR_9.line_length = VAR_22;
 VAR_15->fix = VAR_9;
 VAR_15->fix.smem_len = VAR_18;
 VAR_20 = VAR_15->par;
 VAR_20->panel_index = VAR_24;
 VAR_20->info = VAR_15;
 VAR_20->board = VAR_16;
 VAR_20->write_reg = VAR_7;
 VAR_20->read_reg = VAR_6;
 FUNC_10(&VAR_20->waitq);

 FUNC_13(&VAR_20->io_lock);

 VAR_15->flags = VAR_3 | VAR_4;

 VAR_15->fbdefio = &VAR_8;
 FUNC_6(VAR_15);

 VAR_17 = FUNC_4(&VAR_15->cmap, 16, 0);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->dev, "Failed to allocate colormap\n");
  goto err_vfree;
 }


 for (VAR_21 = 0; VAR_21 < 16; VAR_21++)
  VAR_15->cmap.red[VAR_21] = (((2*VAR_21)+1)*(0xFFFF))/32;
 FUNC_11(VAR_15->cmap.green, VAR_15->cmap.red, sizeof(u16)*16);
 FUNC_11(VAR_15->cmap.blue, VAR_15->cmap.red, sizeof(u16)*16);

 VAR_17 = VAR_20->board->setup_irq(VAR_15);
 if (VAR_17 < 0)
  goto err_cmap;


 VAR_17 = VAR_16->init(VAR_20);
 if (VAR_17 < 0)
  goto err_free_irq;

 FUNC_0(VAR_20);

 FUNC_1(VAR_20);

 VAR_17 = FUNC_15(VAR_15);
 if (VAR_17 < 0)
  goto err_free_irq;

 FUNC_14(VAR_14, VAR_15);

 VAR_17 = FUNC_3(&VAR_14->dev, &VAR_12);
 if (VAR_17 < 0)
  goto err_unreg_fb;

 FUNC_7(VAR_15, "Broadsheet frame buffer, using %dK of video memory\n",
  VAR_18 >> 10);


 return 0;

err_unreg_fb:
 FUNC_22(VAR_15);
err_free_irq:
 VAR_16->cleanup(VAR_20);
err_cmap:
 FUNC_5(&VAR_15->cmap);
err_vfree:
 FUNC_23(VAR_19);
err_fb_rel:
 FUNC_9(VAR_15);
err:
 FUNC_12(VAR_16->owner);
 return VAR_17;

}
