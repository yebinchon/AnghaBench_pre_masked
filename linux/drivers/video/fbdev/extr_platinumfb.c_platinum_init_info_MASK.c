
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info_platinum {scalar_t__ total_vram; scalar_t__ frame_buffer_phys; int platinum_regs_phys; scalar_t__ frame_buffer; int pseudo_palette; } ;
struct TYPE_2__ {int mmio_len; int accel; scalar_t__ type_aux; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ ywrapstep; scalar_t__ smem_len; scalar_t__ smem_start; int type; int mmio_start; int id; } ;
struct fb_info {TYPE_1__ fix; int cmap; scalar_t__ screen_base; int flags; int pseudo_palette; int * fbops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_4,
          struct fb_info_platinum *VAR_5)
{

 VAR_4->fbops = &VAR_3;
 VAR_4->pseudo_palette = VAR_5->pseudo_palette;
        VAR_4->flags = VAR_0;
 VAR_4->screen_base = VAR_5->frame_buffer + 0x20;

 FUNC_0(&VAR_4->cmap, 256, 0);


 FUNC_1(VAR_4->fix.id, "platinum");
 VAR_4->fix.mmio_start = VAR_5->platinum_regs_phys;
 VAR_4->fix.mmio_len = 0x1000;
 VAR_4->fix.type = VAR_2;
 VAR_4->fix.smem_start = VAR_5->frame_buffer_phys + 0x20;
 VAR_4->fix.smem_len = VAR_5->total_vram - 0x20;
        VAR_4->fix.ywrapstep = 0;
 VAR_4->fix.xpanstep = 0;
 VAR_4->fix.ypanstep = 0;
        VAR_4->fix.type_aux = 0;
        VAR_4->fix.accel = VAR_1;
}
