
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct nvidia_par {int dummy; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {unsigned int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ green; TYPE_3__ blue; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; struct nvidia_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct nvidia_par*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct nvidia_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
         unsigned VAR_5, unsigned VAR_6,
         struct fb_info *VAR_7)
{
 struct nvidia_par *VAR_8 = VAR_7->par;
 int VAR_9;

 FUNC_0();
 if (VAR_2 >= (1 << VAR_7->var.green.length))
  return -VAR_0;

 if (VAR_7->var.grayscale) {

  VAR_3 = VAR_4 = VAR_5 = (VAR_3 * 77 + VAR_4 * 151 + VAR_5 * 28) >> 8;
 }

 if (VAR_2 < 16 && VAR_7->fix.visual == VAR_1) {
  ((u32 *) VAR_7->pseudo_palette)[VAR_2] =
      (VAR_2 << VAR_7->var.red.offset) |
      (VAR_2 << VAR_7->var.green.offset) |
      (VAR_2 << VAR_7->var.blue.offset);
 }

 switch (VAR_7->var.bits_per_pixel) {
 case 8:

  FUNC_3(VAR_8, VAR_2, VAR_3 >> 8, VAR_4 >> 8, VAR_5 >> 8);
  break;
 case 16:
  if (VAR_7->var.green.length == 5) {
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
    FUNC_3(VAR_8, VAR_2 * 8 + VAR_9, VAR_3 >> 8,
        VAR_4 >> 8, VAR_5 >> 8);
   }
  } else {
   u8 VAR_10, VAR_11, VAR_12;

   if (VAR_2 < 32) {
    for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
     FUNC_3(VAR_8, VAR_2 * 8 + VAR_9,
         VAR_3 >> 8, VAR_4 >> 8,
         VAR_5 >> 8);
    }
   }

   FUNC_2(VAR_8, VAR_2 * 4, &VAR_10, &VAR_11, &VAR_12);

   for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
    FUNC_3(VAR_8, VAR_2 * 4 + VAR_9, VAR_10,
        VAR_4 >> 8, VAR_12);
  }
  break;
 case 32:
  FUNC_3(VAR_8, VAR_2, VAR_3 >> 8, VAR_4 >> 8, VAR_5 >> 8);
  break;
 default:

  break;
 }

 FUNC_1();
 return 0;
}
