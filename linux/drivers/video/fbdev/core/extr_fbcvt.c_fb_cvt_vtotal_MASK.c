
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int yres; int interlace; int v_margin; } ;


 scalar_t__ FUNC_0 (struct fb_cvt_data*) ;

__attribute__((used)) static u32 FUNC_1(struct fb_cvt_data *VAR_0)
{
 u32 VAR_1 = VAR_0->yres/VAR_0->interlace;

 VAR_1 += 2 * VAR_0->v_margin + VAR_0->interlace/2 + FUNC_0(VAR_0);
 VAR_1 |= VAR_0->interlace/2;

 return VAR_1;
}
