
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


typedef int u_int ;
typedef int u32 ;
struct TYPE_11__ {int length; int offset; } ;
struct TYPE_10__ {int length; int offset; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_12__ {int bits_per_pixel; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_7__ {int visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_6__ var; TYPE_1__ fix; } ;


 int FUNC_0 (int,int) ;




__attribute__((used)) static int FUNC_1(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, struct fb_info *VAR_5)
{
 if (VAR_0 >= 256)
  return 1;


 if (VAR_5->var.grayscale) {

  VAR_1 = VAR_2 = VAR_3 =
      (VAR_1 * 77 + VAR_2 * 151 + VAR_3 * 28) >> 8;
 }


 switch (VAR_5->fix.visual) {
 case 128:
 case 129:
  VAR_1 = ((((VAR_1)<<(VAR_5->var.red.length))+0x7FFF-(VAR_1))>>16);
  VAR_2 = ((((VAR_2)<<(VAR_5->var.green.length))+0x7FFF-(VAR_2))>>16);
  VAR_3 = ((((VAR_3)<<(VAR_5->var.blue.length))+0x7FFF-(VAR_3))>>16);
  VAR_4 = ((((VAR_4)<<(VAR_5->var.transp.length))+0x7FFF-(VAR_4))>>16);
  break;
 case 130:
  VAR_1 = ((((VAR_1)<<(8))+0x7FFF-(VAR_1))>>16);
  VAR_2 = ((((VAR_2)<<(8))+0x7FFF-(VAR_2))>>16);
  VAR_3 = ((((VAR_3)<<(8))+0x7FFF-(VAR_3))>>16);

  VAR_4 = ((((VAR_4)<<(8))+0x7FFF-(VAR_4))>>16);
  break;
 }


 if (VAR_5->fix.visual == 128) {
  u32 VAR_6;

  if (VAR_0 >= 16)
   return 1;

  VAR_6 = (VAR_1 << VAR_5->var.red.offset) |
      (VAR_2 << VAR_5->var.green.offset) |
      (VAR_3 << VAR_5->var.blue.offset) |
      (VAR_4 << VAR_5->var.transp.offset);
  switch (VAR_5->var.bits_per_pixel) {
  case 8:
   break;
  case 16:
  case 24:
  case 32:
   ((u32 *) (VAR_5->pseudo_palette))[VAR_0] = VAR_6;
   break;
  default:
   return 1;
  }
  return 0;
 }
 return 0;
}
