
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int n; } ;
union aty_pll {TYPE_1__ ibm514; } ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int ref_clk_per; } ;



__attribute__((used)) static u32 FUNC_0(const struct fb_info *VAR_0,
         const union aty_pll *VAR_1)
{
 struct atyfb_par *VAR_2 = (struct atyfb_par *) VAR_0->par;
 u8 VAR_3, VAR_4, VAR_5;

 VAR_3 = VAR_1->ibm514.m >> 6;
 VAR_4 = VAR_1->ibm514.m & 0x3f;
 VAR_5 = VAR_1->ibm514.n;

 return ((VAR_2->ref_clk_per * VAR_5) << (3 - VAR_3))/
       (VAR_4 + 65);
}
