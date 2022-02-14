
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct fb_var_screeninfo {size_t xres; size_t yres; int pixclock; size_t right_margin; int hsync_len; size_t left_margin; size_t lower_margin; int vsync_len; size_t upper_margin; int sync; } ;
struct TYPE_2__ {int cr00; int cr35; int pixclock; int cr04; int cr05; int msr; int cr06; int cr30; int cr10; int cr32; int cr11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,size_t,size_t) ;
 TYPE_1__* VAR_3 ;

void FUNC_1(struct fb_var_screeninfo *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 VAR_6 = VAR_4->xres;
 VAR_7 = VAR_4->yres;

 VAR_9 = 1000000000 / VAR_4->pixclock;
 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_9);

 VAR_5 = (VAR_3[VAR_8].cr00 | (VAR_3[VAR_8].cr35 & 1) << 8) + 3;
 VAR_5 <<= 3;

 VAR_4->pixclock = 1000000000 / VAR_3[VAR_8].pixclock;
 VAR_4->right_margin = (VAR_3[VAR_8].cr04 << 3) - VAR_6;
 VAR_4->hsync_len = ((VAR_3[VAR_8].cr05 & 0x1F) -
    (VAR_3[VAR_8].cr04 & 0x1F)) << 3;
 VAR_4->left_margin = (VAR_5 - (VAR_6 + VAR_4->right_margin +
         VAR_4->hsync_len));
 VAR_4->sync = VAR_1;
 if (~(VAR_3[VAR_8].msr & (1 << 6)))
  VAR_4->sync |= VAR_0;
 if (~(VAR_3[VAR_8].msr & (1 << 7)))
  VAR_4->sync |= VAR_2;

 VAR_5 = (VAR_3[VAR_8].cr06 | (VAR_3[VAR_8].cr30 & 0xF) << 8) + 2;
 VAR_4->lower_margin = (VAR_3[VAR_8].cr10 |
       (VAR_3[VAR_8].cr32 & 0x0F) << 8) - VAR_7;
 VAR_4->vsync_len = (VAR_3[VAR_8].cr11 & 0x0F) -
    (VAR_4->lower_margin & 0x0F);
 VAR_4->upper_margin = VAR_5 - (VAR_7 + VAR_4->lower_margin + VAR_4->vsync_len);
}
