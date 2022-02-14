
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int length; unsigned int offset; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_11__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_7__ {scalar_t__ visual; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; } ;
struct TYPE_12__ {int* palette; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
 unsigned VAR_7, unsigned VAR_8, struct fb_info *VAR_9)
{
 volatile u32 *VAR_10 = VAR_3->palette;
 u32 VAR_11;

 if (VAR_4 > (VAR_0 - 1))
  return -VAR_1;

 if (VAR_9->var.grayscale) {

  VAR_5 = VAR_6 = VAR_7 =
   (19595 * VAR_5 + 38470 * VAR_6 + 7471 * VAR_7) >> 16;
 }

 if (VAR_9->fix.visual == VAR_2) {

  if (VAR_4 > 16)
   return -VAR_1;

  VAR_10 = (u32*) VAR_9->pseudo_palette;

  VAR_5 >>= (16 - VAR_9->var.red.length);
  VAR_6 >>= (16 - VAR_9->var.green.length);
  VAR_7 >>= (16 - VAR_9->var.blue.length);

  VAR_11 = (VAR_5 << VAR_9->var.red.offset) |
   (VAR_6 << VAR_9->var.green.offset)|
   (VAR_7 << VAR_9->var.blue.offset);
  VAR_11 &= 0xFFFF;

 } else if (1 ) {

  VAR_11 = (VAR_5 & 0xF800)|((VAR_6 >> 5) &
    0x07E0)|((VAR_7 >> 11) & 0x001F);
  VAR_11 &= 0xFFFF;

 } else if (0 ) {

  VAR_11 = 0x1234;
  VAR_11 &= 0xFFF;
 } else {

  VAR_11 = (VAR_6 >> 12) & 0x000F;
  VAR_11 &= 0xF;
 }

 VAR_10[VAR_4] = VAR_11;

 return 0;
}
