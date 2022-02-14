
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int program_bits; int locationAddr; } ;
union aty_pll {TYPE_1__ ics2595; } ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 scalar_t__ VAR_5 ;
 char FUNC_0 (scalar_t__,struct atyfb_par*) ;
 int FUNC_1 (scalar_t__,char,struct atyfb_par*) ;

__attribute__((used)) static void FUNC_2(const struct fb_info *VAR_6,
        const union aty_pll *VAR_7)
{
 struct atyfb_par *VAR_8 = (struct atyfb_par *) VAR_6->par;
 u32 VAR_9;
 u32 VAR_10;

 char VAR_11;
 char VAR_12;

 VAR_11 = FUNC_0(VAR_1 + 3, VAR_8);
 FUNC_1(VAR_1 + 3,
   VAR_11 | (VAR_0 >> 24), VAR_8);

 VAR_9 = VAR_7->ics2595.program_bits;
 VAR_10 = VAR_7->ics2595.locationAddr;


 VAR_12 = FUNC_0(VAR_2, VAR_8);
 FUNC_1(VAR_2, VAR_12 | VAR_3 | VAR_4, VAR_8);

 FUNC_1(VAR_5, VAR_10, VAR_8);
 FUNC_1(VAR_5 + 1, (VAR_9 & 0xff00) >> 8, VAR_8);
 FUNC_1(VAR_5 + 1, (VAR_9 & 0xff), VAR_8);

 VAR_12 = FUNC_0(VAR_2, VAR_8);
 FUNC_1(VAR_2, (VAR_12 & ~VAR_3) | VAR_4,
   VAR_8);

 (void) FUNC_0(VAR_5, VAR_8);
 FUNC_1(VAR_1 + 3, VAR_11, VAR_8);

 return;
}
