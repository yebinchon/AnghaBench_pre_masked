
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_mobile_lcdc_overlay {int base_addr_y; int dma_handle; int base_addr_c; int xres_virtual; int yres_virtual; int mode; int alpha; int rop3; int yres; int xres; int pos_y; int pos_x; int pitch; int index; TYPE_2__* channel; TYPE_1__* format; int enabled; } ;
struct TYPE_4__ {int lcdc; } ;
struct TYPE_3__ {int fourcc; } ;




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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_21 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct sh_mobile_lcdc_overlay*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct sh_mobile_lcdc_overlay *VAR_22)
{
 u32 VAR_23 = 0;

 if (!VAR_22->enabled) {
  FUNC_9(VAR_22->channel->lcdc, VAR_20, FUNC_0(VAR_22->index));
  FUNC_10(VAR_22, FUNC_6(VAR_22->index), 0);
  FUNC_9(VAR_22->channel->lcdc, VAR_20,
      FUNC_2(VAR_22->index) | FUNC_1(VAR_22->index));
  return;
 }

 VAR_22->base_addr_y = VAR_22->dma_handle;
 VAR_22->base_addr_c = VAR_22->dma_handle
    + VAR_22->xres_virtual * VAR_22->yres_virtual;

 switch (VAR_22->mode) {
 case 138:
  VAR_23 = VAR_8 | (VAR_22->alpha << VAR_9);
  break;

 case 137:
  VAR_23 = VAR_8 | VAR_4
         | (VAR_22->rop3 << VAR_10);
  break;
 }

 switch (VAR_22->format->fourcc) {
 case 128:
 case 132:
 case 129:
 case 130:
  VAR_23 |= VAR_15 | VAR_16;
  break;
 case 136:
 case 134:
 case 133:
 case 131:
  VAR_23 |= VAR_15 | VAR_16 | VAR_14;
  break;
 case 135:
 default:
  VAR_23 |= VAR_15;
  break;
 }

 switch (VAR_22->format->fourcc) {
 case 128:
  VAR_23 |= VAR_2 | VAR_13 | VAR_11;
  break;
 case 136:
  VAR_23 |= VAR_2 | VAR_13 | VAR_12;
  break;
 case 135:
  VAR_23 |= VAR_3 | VAR_13 | VAR_21;
  break;
 case 134:
 case 132:
  VAR_23 |= VAR_2 | VAR_5;
  break;
 case 133:
 case 129:
  VAR_23 |= VAR_2 | VAR_6;
  break;
 case 131:
 case 130:
  VAR_23 |= VAR_2 | VAR_7;
  break;
 }

 FUNC_9(VAR_22->channel->lcdc, VAR_20, FUNC_0(VAR_22->index));

 FUNC_10(VAR_22, FUNC_6(VAR_22->index), VAR_23);

 FUNC_10(VAR_22, FUNC_8(VAR_22->index),
  (VAR_22->yres << VAR_19) |
  (VAR_22->xres << VAR_18));
 FUNC_10(VAR_22, FUNC_3(VAR_22->index),
  (VAR_22->pos_y << VAR_1) |
  (VAR_22->pos_x << VAR_0));
 FUNC_10(VAR_22, FUNC_7(VAR_22->index),
  VAR_22->pitch << VAR_17);

 FUNC_10(VAR_22, FUNC_5(VAR_22->index), VAR_22->base_addr_y);
 FUNC_10(VAR_22, FUNC_4(VAR_22->index), VAR_22->base_addr_c);

 FUNC_9(VAR_22->channel->lcdc, VAR_20,
     FUNC_2(VAR_22->index) | FUNC_1(VAR_22->index));
}
