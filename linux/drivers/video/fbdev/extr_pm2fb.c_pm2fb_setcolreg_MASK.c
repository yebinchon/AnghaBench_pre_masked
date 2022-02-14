
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pm2fb_par {unsigned int* palette; } ;
struct TYPE_14__ {int visual; } ;
struct TYPE_12__ {int length; unsigned int offset; } ;
struct TYPE_11__ {int length; unsigned int offset; } ;
struct TYPE_10__ {int length; unsigned int offset; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_13__ {int bits_per_pixel; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_8__ {unsigned int len; } ;
struct fb_info {TYPE_7__ fix; TYPE_6__ var; TYPE_1__ cmap; struct pm2fb_par* par; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;



 int FUNC_1 (struct pm2fb_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      struct fb_info *VAR_6)
{
 struct pm2fb_par *VAR_7 = VAR_6->par;

 if (VAR_1 >= VAR_6->cmap.len)
  return -VAR_0;






 if (VAR_6->var.grayscale)
  VAR_2 = VAR_3 = VAR_4 = (VAR_2 * 77 + VAR_3 * 151 + VAR_4 * 28) >> 8;
 switch (VAR_6->fix.visual) {
 case 128:
 case 129:
  VAR_2 = ((((VAR_2) << (VAR_6->var.red.length)) + 0x7FFF -(VAR_2)) >> 16);
  VAR_3 = ((((VAR_3) << (VAR_6->var.green.length)) + 0x7FFF -(VAR_3)) >> 16);
  VAR_4 = ((((VAR_4) << (VAR_6->var.blue.length)) + 0x7FFF -(VAR_4)) >> 16);
  VAR_5 = ((((VAR_5) << (VAR_6->var.transp.length)) + 0x7FFF -(VAR_5)) >> 16);
  break;
 case 130:


  VAR_2 = ((((VAR_2) << (8)) + 0x7FFF -(VAR_2)) >> 16);
  VAR_3 = ((((VAR_3) << (8)) + 0x7FFF -(VAR_3)) >> 16);
  VAR_4 = ((((VAR_4) << (8)) + 0x7FFF -(VAR_4)) >> 16);

  VAR_5 = ((((VAR_5) << (8)) + 0x7FFF -(VAR_5)) >> 16);
  break;
 }


 if (VAR_6->fix.visual == 128) {
  u32 VAR_8;

  if (VAR_1 >= 16)
   return -VAR_0;

  VAR_8 = (VAR_2 << VAR_6->var.red.offset) |
   (VAR_3 << VAR_6->var.green.offset) |
   (VAR_4 << VAR_6->var.blue.offset) |
   (VAR_5 << VAR_6->var.transp.offset);

  switch (VAR_6->var.bits_per_pixel) {
  case 8:
   break;
  case 16:
  case 24:
  case 32:
   VAR_7->palette[VAR_1] = VAR_8;
   break;
  }
  return 0;
 } else if (VAR_6->fix.visual == 129)
  FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4);

 return 0;
}
