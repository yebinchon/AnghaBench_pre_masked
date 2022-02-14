
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int n; } ;
union aty_pll {TYPE_1__ ibm514; } ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int FUNC_0 (int,int,struct atyfb_par*) ;

__attribute__((used)) static void FUNC_1(const struct fb_info *VAR_0,
       const union aty_pll *VAR_1)
{
 struct atyfb_par *VAR_2 = (struct atyfb_par *) VAR_0->par;

 FUNC_0(0x06, 0x02, VAR_2);
 FUNC_0(0x10, 0x01, VAR_2);
 FUNC_0(0x70, 0x01, VAR_2);
 FUNC_0(0x8f, 0x1f, VAR_2);
 FUNC_0(0x03, 0x00, VAR_2);
 FUNC_0(0x05, 0x00, VAR_2);
 FUNC_0(0x20, VAR_1->ibm514.m, VAR_2);
 FUNC_0(0x21, VAR_1->ibm514.n, VAR_2);
}
