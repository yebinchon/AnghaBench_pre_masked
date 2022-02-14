
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
struct TYPE_11__ {int offset; int length; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_12__ {int bits_per_pixel; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_7__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_6__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
      u_int VAR_6, struct fb_info *VAR_7)
{
 u32 VAR_8;

 if (VAR_2 >= 16)
  return -VAR_0;

 if (VAR_7->var.grayscale) {
  VAR_3 = VAR_4 = VAR_5 = (VAR_3 * 77 + VAR_4 * 151 + VAR_5 * 28) >> 8;
 }

 if (VAR_7->fix.visual != VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_3, VAR_7->var.red.length);
 VAR_5 = FUNC_0(VAR_5, VAR_7->var.blue.length);
 VAR_4 = FUNC_0(VAR_4, VAR_7->var.green.length);
 VAR_6 = FUNC_0(VAR_6, VAR_7->var.transp.length);

 VAR_8 = (VAR_3 << VAR_7->var.red.offset) |
     (VAR_4 << VAR_7->var.green.offset) |
     (VAR_5 << VAR_7->var.blue.offset) |
     (VAR_6 << VAR_7->var.transp.offset);

 switch (VAR_7->var.bits_per_pixel) {
 case 16:
  ((u32 *) VAR_7->pseudo_palette)[VAR_2] = VAR_8;
  break;
 case 24:
 case 32:
  ((u32 *) VAR_7->pseudo_palette)[VAR_2] = VAR_8;
  break;
 }
 return 0;
}
