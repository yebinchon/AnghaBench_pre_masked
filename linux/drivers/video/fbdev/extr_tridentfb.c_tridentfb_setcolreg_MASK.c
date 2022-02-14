
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tridentfb_par {int dummy; } ;
struct TYPE_4__ {unsigned int len; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ cmap; struct tridentfb_par* par; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tridentfb_par*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
          unsigned VAR_6, unsigned VAR_7,
          struct fb_info *VAR_8)
{
 int VAR_9 = VAR_8->var.bits_per_pixel;
 struct tridentfb_par *VAR_10 = VAR_8->par;

 if (VAR_3 >= VAR_8->cmap.len)
  return 1;

 if (VAR_9 == 8) {
  FUNC_0(VAR_10, 0xFF, VAR_2);
  FUNC_0(VAR_10, VAR_3, VAR_1);

  FUNC_0(VAR_10, VAR_4 >> 10, VAR_0);
  FUNC_0(VAR_10, VAR_5 >> 10, VAR_0);
  FUNC_0(VAR_10, VAR_6 >> 10, VAR_0);

 } else if (VAR_3 < 16) {
  if (VAR_9 == 16) {
   u32 VAR_11;

   VAR_11 = (VAR_4 & 0xF800) | ((VAR_5 & 0xFC00) >> 5) |
    ((VAR_6 & 0xF800) >> 11);
   VAR_11 |= VAR_11 << 16;
   ((u32 *)(VAR_8->pseudo_palette))[VAR_3] = VAR_11;
  } else if (VAR_9 == 32)
   ((u32 *)VAR_8->pseudo_palette)[VAR_3] =
    ((VAR_7 & 0xFF00) << 16) |
    ((VAR_4 & 0xFF00) << 8) |
    ((VAR_5 & 0xFF00)) |
    ((VAR_6 & 0xFF00) >> 8);
 }

 return 0;
}
