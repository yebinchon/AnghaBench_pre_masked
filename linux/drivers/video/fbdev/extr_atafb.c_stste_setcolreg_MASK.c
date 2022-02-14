
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {unsigned int* color_reg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, unsigned int VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, struct fb_info *VAR_7)
{
 if (VAR_2 > 15)
  return 1;
 VAR_3 >>= 12;
 VAR_5 >>= 12;
 VAR_4 >>= 12;
 if (FUNC_0(VAR_0))
  VAR_1.color_reg[VAR_2] =
   (((VAR_3 & 0xe) >> 1) | ((VAR_3 & 1) << 3) << 8) |
   (((VAR_4 & 0xe) >> 1) | ((VAR_4 & 1) << 3) << 4) |
   ((VAR_5 & 0xe) >> 1) | ((VAR_5 & 1) << 3);
 else
  VAR_1.color_reg[VAR_2] =
   ((VAR_3 & 0xe) << 7) |
   ((VAR_4 & 0xe) << 3) |
   ((VAR_5 & 0xe) >> 1);
 return 0;
}
