
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {int mmio_base_phys; int video_ram; int fb_base_phys; int name; int mapped_vram; int fb_base; int pseudo_palette; struct fb_info* info; } ;
struct TYPE_2__ {int xpanstep; int ypanstep; int accel; int mmio_len; int mmio_start; scalar_t__ type_aux; scalar_t__ ywrapstep; int visual; int type; int smem_len; int smem_start; int id; } ;
struct fb_info {int flags; int cmap; TYPE_1__ fix; int screen_size; int screen_base; int * fbops; int pseudo_palette; struct radeonfb_info* par; } ;


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
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct radeonfb_info *VAR_12)
{
 struct fb_info *VAR_13 = VAR_12->info;

 VAR_13->par = VAR_12;
 VAR_13->pseudo_palette = VAR_12->pseudo_palette;
 VAR_13->flags = VAR_0
      | VAR_1
      | VAR_3
      | VAR_4
      | VAR_5;
 VAR_13->fbops = &VAR_11;
 VAR_13->screen_base = VAR_12->fb_base;
 VAR_13->screen_size = VAR_12->mapped_vram;

 FUNC_1(VAR_13->fix.id, VAR_12->name, sizeof(VAR_13->fix.id));
        VAR_13->fix.smem_start = VAR_12->fb_base_phys;
        VAR_13->fix.smem_len = VAR_12->video_ram;
        VAR_13->fix.type = VAR_7;
        VAR_13->fix.visual = VAR_8;
        VAR_13->fix.xpanstep = 8;
        VAR_13->fix.ypanstep = 1;
        VAR_13->fix.ywrapstep = 0;
        VAR_13->fix.type_aux = 0;
        VAR_13->fix.mmio_start = VAR_12->mmio_base_phys;
        VAR_13->fix.mmio_len = VAR_9;
 VAR_13->fix.accel = VAR_6;

 FUNC_0(&VAR_13->cmap, 256, 0);

 if (VAR_10)
  VAR_13->flags |= VAR_2;

        return 0;
}
