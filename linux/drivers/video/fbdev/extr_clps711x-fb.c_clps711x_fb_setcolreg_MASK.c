
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u32 ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; struct clps711x_fb_info* par; } ;
struct clps711x_fb_info {scalar_t__ base; scalar_t__ cmap_invert; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(u_int VAR_3, u_int VAR_4, u_int VAR_5,
     u_int VAR_6, u_int VAR_7, struct fb_info *VAR_8)
{
 struct clps711x_fb_info *VAR_9 = VAR_8->par;
 u32 VAR_10, VAR_11, VAR_12;

 if (VAR_3 >= FUNC_0(VAR_8->var.bits_per_pixel))
  return -VAR_2;

 VAR_12 = 4 * (VAR_3 & 7);
 VAR_11 = 0xf << VAR_12;

 VAR_10 = (((VAR_4 * 77 + VAR_5 * 151 + VAR_6 * 28) >> 20) << VAR_12) & VAR_11;
 if (VAR_9->cmap_invert)
  VAR_10 = 0xf - VAR_10;

 VAR_3 = (VAR_3 < 8) ? VAR_0 : VAR_1;

 FUNC_2((FUNC_1(VAR_9->base + VAR_3) & ~VAR_11) | VAR_10, VAR_9->base + VAR_3);

 return 0;
}
