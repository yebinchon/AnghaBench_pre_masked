
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa168fb_mach_info {int dumb_mode; int gpio_output_data; int gpio_output_mask; scalar_t__ invert_pixclock; scalar_t__ invert_pix_val_ena; scalar_t__ invert_composite_blank; scalar_t__ panel_rgb_reverse_lanes; } ;
struct pxa168fb_info {scalar_t__ reg_base; scalar_t__ is_blanked; int dev; } ;
struct TYPE_2__ {int sync; } ;
struct fb_info {TYPE_1__ var; struct pxa168fb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pxa168fb_mach_info* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_4)
{
 struct pxa168fb_info *VAR_5 = VAR_4->par;
 struct pxa168fb_mach_info *VAR_6 = FUNC_0(VAR_5->dev);
 u32 VAR_7;




 VAR_7 = FUNC_1(VAR_5->reg_base + VAR_3) & 0x00000001;

 VAR_7 |= (VAR_5->is_blanked ? 0x7 : VAR_6->dumb_mode) << 28;
 VAR_7 |= VAR_6->gpio_output_data << 20;
 VAR_7 |= VAR_6->gpio_output_mask << 12;
 VAR_7 |= VAR_6->panel_rgb_reverse_lanes ? 0x00000080 : 0;
 VAR_7 |= VAR_6->invert_composite_blank ? 0x00000040 : 0;
 VAR_7 |= (VAR_4->var.sync & VAR_0) ? 0x00000020 : 0;
 VAR_7 |= VAR_6->invert_pix_val_ena ? 0x00000010 : 0;
 VAR_7 |= (VAR_4->var.sync & VAR_2) ? 0 : 0x00000008;
 VAR_7 |= (VAR_4->var.sync & VAR_1) ? 0 : 0x00000004;
 VAR_7 |= VAR_6->invert_pixclock ? 0x00000002 : 0;

 FUNC_2(VAR_7, VAR_5->reg_base + VAR_3);
}
