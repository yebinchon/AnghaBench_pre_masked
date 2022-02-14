
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
struct grvga_par {TYPE_1__* regs; } ;
struct TYPE_13__ {unsigned int offset; int length; } ;
struct TYPE_12__ {unsigned int offset; int length; } ;
struct TYPE_11__ {unsigned int offset; int length; } ;
struct TYPE_10__ {unsigned int offset; int length; } ;
struct TYPE_14__ {TYPE_6__ transp; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; scalar_t__ grayscale; } ;
struct TYPE_9__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_7__ var; TYPE_2__ fix; struct grvga_par* par; } ;
struct TYPE_8__ {int clut; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, struct fb_info *VAR_8)
{
 struct grvga_par *VAR_9;
 VAR_9 = VAR_8->par;

 if (VAR_3 >= 256)
  return -VAR_0;

 if (VAR_8->var.grayscale) {

  VAR_4 = VAR_5 = VAR_6 = (VAR_4 * 77 + VAR_5 * 151 + VAR_6 * 28) >> 8;
 }





 VAR_4 = ((((VAR_4)<<(VAR_8->var.red.length))+0x7FFF-(VAR_4))>>16);
 VAR_5 = ((((VAR_5)<<(VAR_8->var.green.length))+0x7FFF-(VAR_5))>>16);
 VAR_6 = ((((VAR_6)<<(VAR_8->var.blue.length))+0x7FFF-(VAR_6))>>16);
 VAR_7 = ((((VAR_7)<<(VAR_8->var.transp.length))+0x7FFF-(VAR_7))>>16);




 if (VAR_8->fix.visual == VAR_1)
  FUNC_1((VAR_3 << 24) | (VAR_4 << 16) | (VAR_5 << 8) | VAR_6,
        &VAR_9->regs->clut);


 else if (VAR_8->fix.visual == VAR_2) {
  u32 VAR_10;
  if (VAR_3 >= 16)
   return -VAR_0;


  VAR_10 = (VAR_4 << VAR_8->var.red.offset) |
   (VAR_5 << VAR_8->var.green.offset) |
   (VAR_6 << VAR_8->var.blue.offset) |
   (VAR_7 << VAR_8->var.transp.offset);

  ((u32 *) (VAR_8->pseudo_palette))[VAR_3] = VAR_10;
 }
 return 0;
}
