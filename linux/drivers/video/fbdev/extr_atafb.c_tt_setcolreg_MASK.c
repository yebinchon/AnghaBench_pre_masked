
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {int tt_shiftmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, struct fb_info *VAR_9)
{
 if ((VAR_2.tt_shiftmode & VAR_0) == VAR_1)
  VAR_4 += 254;
 if (VAR_4 > 255)
  return 1;
 VAR_3[VAR_4] = (((VAR_5 >> 12) << 8) | ((VAR_6 >> 12) << 4) |
        (VAR_7 >> 12));
 if ((VAR_2.tt_shiftmode & VAR_0) ==
     VAR_1 && VAR_4 == 254)
  VAR_3[0] = 0;
 return 0;
}
