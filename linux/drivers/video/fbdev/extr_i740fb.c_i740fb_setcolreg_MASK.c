
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_7__ {unsigned int offset; int length; } ;
struct TYPE_10__ {TYPE_4__ green; TYPE_3__ blue; TYPE_2__ red; int bits_per_pixel; } ;
struct TYPE_6__ {int visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_5__ var; int par; TYPE_1__ fix; int device; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      struct fb_info *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_8->device, "setcolreg: regno: %i, red=%d, green=%d, blue=%d, transp=%d, bpp=%d\n",
  VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8->var.bits_per_pixel);

 switch (VAR_8->fix.visual) {
 case 129:
  if (VAR_3 >= 256)
   return -VAR_0;
  FUNC_1(VAR_8->par, VAR_2, VAR_3);
  FUNC_1(VAR_8->par, VAR_1, VAR_4 >> 8);
  FUNC_1(VAR_8->par, VAR_1, VAR_5 >> 8);
  FUNC_1(VAR_8->par, VAR_1, VAR_6 >> 8);
  break;
 case 128:
  if (VAR_3 >= 16)
   return -VAR_0;
  VAR_9 = (VAR_4 >> (16 - VAR_8->var.red.length))
   << VAR_8->var.red.offset;
  VAR_11 = (VAR_6 >> (16 - VAR_8->var.blue.length))
   << VAR_8->var.blue.offset;
  VAR_10 = (VAR_5 >> (16 - VAR_8->var.green.length))
   << VAR_8->var.green.offset;
  ((u32 *) VAR_8->pseudo_palette)[VAR_3] = VAR_9 | VAR_10 | VAR_11;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
