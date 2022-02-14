
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_7__ {int length; unsigned int offset; } ;
struct TYPE_10__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {unsigned int len; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ cmap; } ;



__attribute__((used)) static int FUNC_0(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      struct fb_info *VAR_5)
{







 if (VAR_0 >= VAR_5->cmap.len)
  return 1;

 if (VAR_0 < 16) {
  VAR_1 >>= 16 - VAR_5->var.red.length;
  VAR_2 >>= 16 - VAR_5->var.green.length;
  VAR_3 >>= 16 - VAR_5->var.blue.length;
  ((u32 *)(VAR_5->pseudo_palette))[VAR_0] =
   (VAR_1 << VAR_5->var.red.offset) |
   (VAR_2 << VAR_5->var.green.offset) |
   (VAR_3 << VAR_5->var.blue.offset);
 }
 return 0;
}
