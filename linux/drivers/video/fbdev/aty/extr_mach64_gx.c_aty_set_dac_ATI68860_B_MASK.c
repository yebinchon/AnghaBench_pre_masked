
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union aty_pll {int dummy; } aty_pll ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,struct atyfb_par*) ;
 int FUNC_1 (scalar_t__,int,struct atyfb_par*) ;
 int FUNC_2 (scalar_t__,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_3(const struct fb_info *VAR_7,
      const union aty_pll *VAR_8, u32 VAR_9,
      u32 VAR_10)
{
 struct atyfb_par *VAR_11 = (struct atyfb_par *) VAR_7->par;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = 0;
 VAR_13 = 0;

 switch (VAR_9) {
 case 8:
  VAR_12 = 0x83;
  VAR_13 =
      0x60 | 0x00 ;
  break;
 case 15:
  VAR_12 = 0xA0;
  VAR_13 = 0x60;
  break;
 case 16:
  VAR_12 = 0xA1;
  VAR_13 = 0x60;
  break;
 case 24:
  VAR_12 = 0xC0;
  VAR_13 = 0x60;
  break;
 case 32:
  VAR_12 = 0xE3;
  VAR_13 = 0x60;
  break;
 }

 if (!VAR_10) {
  VAR_12 = 0x80;
  VAR_13 = 0x61;
 }

 VAR_14 = FUNC_0(VAR_2, VAR_11);
 FUNC_1(VAR_2, (VAR_14 & ~VAR_3) | VAR_4,
   VAR_11);

 FUNC_1(VAR_5 + 2, 0x1D, VAR_11);
 FUNC_1(VAR_5 + 3, VAR_12, VAR_11);
 FUNC_1(VAR_5, 0x02, VAR_11);

 VAR_14 = FUNC_0(VAR_2, VAR_11);
 FUNC_1(VAR_2, VAR_14 | VAR_3 | VAR_4, VAR_11);

 if (VAR_7->fix.smem_len < VAR_6)
  VAR_15 = 0x04;
 else if (VAR_7->fix.smem_len == VAR_6)
  VAR_15 = 0x08;
 else
  VAR_15 = 0x0C;






 VAR_14 = FUNC_0(VAR_5, VAR_11);
 FUNC_1(VAR_5, (VAR_13 | VAR_15) | (VAR_14 & 0x80),
   VAR_11);
 VAR_14 = FUNC_0(VAR_2, VAR_11);
 FUNC_1(VAR_2, (VAR_14 & ~(VAR_3 | VAR_4)),
   VAR_11);

 FUNC_2(VAR_1, 0x890e20f1, VAR_11);
 FUNC_2(VAR_2, 0x47052100, VAR_11);
 return 0;
}
