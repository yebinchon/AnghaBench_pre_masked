
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aty_pll {int dummy; } aty_pll ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_1(const struct fb_info *VAR_2,
       const union aty_pll *VAR_3, u32 VAR_4,
       u32 VAR_5)
{
 struct atyfb_par *VAR_6 = (struct atyfb_par *) VAR_2->par;

 FUNC_0(VAR_0, 0x890e20f1, VAR_6);
 FUNC_0(VAR_1, 0x47052100, VAR_6);

 FUNC_0(VAR_0, 0x590e10ff, VAR_6);
 FUNC_0(VAR_1, 0x47012100, VAR_6);
 return 0;
}
