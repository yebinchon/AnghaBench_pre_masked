
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct au1200_lcd_window_regs_t {int flags; int xpos; int ypos; int alpha_color; int alpha_mode; int priority; int channel; int buffer_format; int color_order; int pixel_order; int xsize; int ysize; int colorkey_mode; int double_buffer_mode; int ram_array_mode; int enable; } ;
struct TYPE_4__ {unsigned int winenable; TYPE_1__* window; } ;
struct TYPE_3__ {int winctrl0; int winctrl1; unsigned int winctrl2; } ;


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
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_2__* VAR_31 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_32,
 struct au1200_lcd_window_regs_t *VAR_33)
{
 unsigned int VAR_34, VAR_35;


 if (VAR_33->flags & VAR_27) {
  VAR_34 = VAR_31->window[VAR_32].winctrl0 & ~(VAR_2 |
    VAR_3);
  VAR_34 |= ((VAR_33->xpos << 21) & VAR_2);
  VAR_34 |= ((VAR_33->ypos << 10) & VAR_3);
  VAR_31->window[VAR_32].winctrl0 = VAR_34;
 }
 if (VAR_33->flags & VAR_17) {
  VAR_34 = VAR_31->window[VAR_32].winctrl0 & ~(VAR_0);
  VAR_34 |= ((VAR_33->alpha_color << 2) & VAR_0);
  VAR_31->window[VAR_32].winctrl0 = VAR_34;
 }
 if (VAR_33->flags & VAR_18) {
  VAR_34 = VAR_31->window[VAR_32].winctrl0 & ~(VAR_1);
  VAR_34 |= ((VAR_33->alpha_mode << 1) & VAR_1);
  VAR_31->window[VAR_32].winctrl0 = VAR_34;
 }


 if (VAR_33->flags & VAR_28) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_8);
  VAR_34 |= ((VAR_33->priority << 30) & VAR_8);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;
 }
 if (VAR_33->flags & VAR_21) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_6);
  VAR_34 |= ((VAR_33->channel << 29) & VAR_6);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;
 }
 if (VAR_33->flags & VAR_19) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_5);
  VAR_34 |= ((VAR_33->buffer_format << 25) & VAR_5);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;
 }
 if (VAR_33->flags & VAR_23) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_4);
  VAR_34 |= ((VAR_33->color_order << 24) & VAR_4);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;
 }
 if (VAR_33->flags & VAR_26) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_7);
  VAR_34 |= ((VAR_33->pixel_order << 22) & VAR_7);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;
 }
 if (VAR_33->flags & VAR_30) {
  VAR_34 = VAR_31->window[VAR_32].winctrl1 & ~(VAR_9 |
    VAR_10);
  VAR_34 |= (((VAR_33->xsize << 11) - 1) & VAR_9);
  VAR_34 |= (((VAR_33->ysize) - 1) & VAR_10);
  VAR_31->window[VAR_32].winctrl1 = VAR_34;

  VAR_35 = FUNC_0(VAR_34) / 8;
  VAR_34 = VAR_31->window[VAR_32].winctrl2 & ~(VAR_11);
  VAR_34 |= (((VAR_33->xsize * VAR_35) << 8) & VAR_11);
  VAR_31->window[VAR_32].winctrl2 = VAR_34;
 }


 if (VAR_33->flags & VAR_22) {
  VAR_34 = VAR_31->window[VAR_32].winctrl2 & ~(VAR_12);
  VAR_34 |= ((VAR_33->colorkey_mode << 24) & VAR_12);
  VAR_31->window[VAR_32].winctrl2 = VAR_34;
 }
 if (VAR_33->flags & VAR_24) {
  VAR_34 = VAR_31->window[VAR_32].winctrl2 & ~(VAR_13);
  VAR_34 |= ((VAR_33->double_buffer_mode << 23) & VAR_13);
  VAR_31->window[VAR_32].winctrl2 = VAR_34;
 }
 if (VAR_33->flags & VAR_29) {
  VAR_34 = VAR_31->window[VAR_32].winctrl2 & ~(VAR_14);
  VAR_34 |= ((VAR_33->ram_array_mode << 21) & VAR_14);
  VAR_31->window[VAR_32].winctrl2 = VAR_34;
 }



 if (VAR_33->flags & VAR_20) {
  VAR_34 = VAR_31->window[VAR_32].winctrl2 & ~(VAR_15 |
    VAR_16);
  VAR_34 |= ((VAR_33->xsize << 11) & VAR_15);
  VAR_34 |= ((VAR_33->ysize) & VAR_16);
  VAR_31->window[VAR_32].winctrl2 = VAR_34;
 }

 if (VAR_33->flags & VAR_25) {
  VAR_34 = VAR_31->winenable;
  VAR_34 &= ~(1<<VAR_32);
  VAR_34 |= (VAR_33->enable & 1) << VAR_32;
  VAR_31->winenable = VAR_34;
 }
 FUNC_1();
}
