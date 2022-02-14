
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int pixclock; } ;
struct i810fb_par {size_t ovract; TYPE_1__ regs; } ;
struct fb_var_screeninfo {size_t right_margin; size_t hsync_len; size_t left_margin; } ;


 size_t FUNC_0 (size_t,size_t,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(const struct fb_var_screeninfo *VAR_1,
        struct i810fb_par *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2->regs.pixclock);

 VAR_2->regs = VAR_0[VAR_5];


 VAR_2->ovract = ((VAR_3 + VAR_1->right_margin + VAR_1->hsync_len +
   VAR_1->left_margin - 32) | ((VAR_3 - 32) << 16));
}
