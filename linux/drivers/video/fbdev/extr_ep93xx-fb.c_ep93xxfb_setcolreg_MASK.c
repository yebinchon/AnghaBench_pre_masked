
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


struct TYPE_11__ {unsigned int offset; int length; } ;
struct TYPE_10__ {unsigned int offset; int length; } ;
struct TYPE_9__ {unsigned int offset; int length; } ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_12__ {TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_7__ {int visual; } ;
struct fb_info {unsigned int* pseudo_palette; TYPE_6__ var; TYPE_1__ fix; struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct ep93xx_fbi*,int ) ;
 int FUNC_2 (struct ep93xx_fbi*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, unsigned int VAR_7,
         unsigned int VAR_8, struct fb_info *VAR_9)
{
 struct ep93xx_fbi *VAR_10 = VAR_9->par;
 unsigned int *VAR_11 = VAR_9->pseudo_palette;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 switch (VAR_9->fix.visual) {
 case 129:
  if (VAR_4 > 255)
   return 1;
  VAR_14 = ((VAR_5 & 0xff00) << 8) | (VAR_6 & 0xff00) |
   ((VAR_7 & 0xff00) >> 8);

  VAR_11[VAR_4] = VAR_14;
  FUNC_2(VAR_10, VAR_14, (VAR_0 + (VAR_4 << 2)));
  VAR_12 = FUNC_1(VAR_10, VAR_1);
  VAR_16 = !!(VAR_12 & VAR_2);
  VAR_15 = !!(VAR_12 & VAR_3);

  if (VAR_16 == VAR_15) {
   for (VAR_13 = 0; VAR_13 < 256; VAR_13++) {
    FUNC_2(VAR_10, VAR_11[VAR_13],
     VAR_0 + (VAR_13 << 2));
   }

   FUNC_2(VAR_10,
     VAR_12 ^ VAR_3,
     VAR_1);
  }
  break;

 case 128:
  if (VAR_4 > 16)
   return 1;

  VAR_5 = FUNC_0(VAR_5, VAR_9->var.red.length);
  VAR_6 = FUNC_0(VAR_6, VAR_9->var.green.length);
  VAR_7 = FUNC_0(VAR_7, VAR_9->var.blue.length);
  VAR_8 = FUNC_0(VAR_8,
      VAR_9->var.transp.length);

  VAR_11[VAR_4] = (VAR_5 << VAR_9->var.red.offset) |
   (VAR_6 << VAR_9->var.green.offset) |
   (VAR_7 << VAR_9->var.blue.offset) |
   (VAR_8 << VAR_9->var.transp.offset);
  break;

 default:
  return 1;
 }

 return 0;
}
