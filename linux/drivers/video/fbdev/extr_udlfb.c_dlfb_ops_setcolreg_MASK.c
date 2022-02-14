
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {TYPE_1__ red; } ;
struct TYPE_6__ {unsigned int len; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; TYPE_3__ cmap; } ;



__attribute__((used)) static int
FUNC_0(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
        unsigned VAR_3, unsigned VAR_4, struct fb_info *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_0 >= VAR_5->cmap.len)
  return 1;

 if (VAR_0 < 16) {
  if (VAR_5->var.red.offset == 10) {

   ((u32 *) (VAR_5->pseudo_palette))[VAR_0] =
       ((VAR_1 & 0xf800) >> 1) |
       ((VAR_2 & 0xf800) >> 6) | ((VAR_3 & 0xf800) >> 11);
  } else {

   ((u32 *) (VAR_5->pseudo_palette))[VAR_0] =
       ((VAR_1 & 0xf800)) |
       ((VAR_2 & 0xfc00) >> 5) | ((VAR_3 & 0xf800) >> 11);
  }
 }

 return VAR_6;
}
