
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


typedef int u32 ;
struct tdfx_par {int* palette; } ;
struct TYPE_13__ {int offset; int length; } ;
struct TYPE_12__ {int offset; int length; } ;
struct TYPE_11__ {int offset; int length; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_14__ {int bits_per_pixel; TYPE_6__ transp; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; scalar_t__ grayscale; } ;
struct TYPE_9__ {int visual; } ;
struct TYPE_8__ {unsigned int len; } ;
struct fb_info {TYPE_7__ var; TYPE_2__ fix; TYPE_1__ cmap; struct tdfx_par* par; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,int ) ;


 int FUNC_2 (struct tdfx_par*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
       unsigned VAR_3, unsigned VAR_4,
       struct fb_info *VAR_5)
{
 struct tdfx_par *VAR_6 = VAR_5->par;
 u32 VAR_7;

 if (VAR_0 >= VAR_5->cmap.len || VAR_0 > 255)
  return 1;


 if (VAR_5->var.grayscale) {

  VAR_3 = (VAR_1 * 77 + VAR_2 * 151 + VAR_3 * 28) >> 8;
  VAR_2 = VAR_3;
  VAR_1 = VAR_3;
 }

 switch (VAR_5->fix.visual) {
 case 129:
  VAR_7 = (((u32)VAR_1 & 0xff00) << 8) |
    (((u32)VAR_2 & 0xff00) << 0) |
    (((u32)VAR_3 & 0xff00) >> 8);
  FUNC_2(VAR_6, VAR_0, VAR_7);
  break;

 case 128:
  if (VAR_0 < 16) {
   VAR_7 = (FUNC_0(VAR_1, VAR_5->var.red.length) <<
      VAR_5->var.red.offset) |
    (FUNC_0(VAR_2, VAR_5->var.green.length) <<
     VAR_5->var.green.offset) |
    (FUNC_0(VAR_3, VAR_5->var.blue.length) <<
     VAR_5->var.blue.offset) |
    (FUNC_0(VAR_4, VAR_5->var.transp.length) <<
     VAR_5->var.transp.offset);
   VAR_6->palette[VAR_0] = VAR_7;
  }

  break;
 default:
  FUNC_1("bad depth %u\n", VAR_5->var.bits_per_pixel);
  break;
 }

 return 0;
}
