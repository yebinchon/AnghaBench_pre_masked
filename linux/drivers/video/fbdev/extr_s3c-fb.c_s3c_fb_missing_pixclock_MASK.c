
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct fb_videomode {int left_margin; int hsync_len; int right_margin; int xres; int upper_margin; int vsync_len; int lower_margin; int yres; unsigned long long pixclock; scalar_t__ refresh; } ;


 int FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static void FUNC_1(struct fb_videomode *VAR_0)
{
 u64 VAR_1 = 1000000000000ULL;
 u32 VAR_2;

 VAR_2 = VAR_0->left_margin + VAR_0->hsync_len + VAR_0->right_margin +
        VAR_0->xres;
 VAR_2 *= VAR_0->upper_margin + VAR_0->vsync_len + VAR_0->lower_margin +
        VAR_0->yres;
 VAR_2 *= VAR_0->refresh ? : 60;

 FUNC_0(VAR_1, VAR_2);

 VAR_0->pixclock = VAR_1;
}
