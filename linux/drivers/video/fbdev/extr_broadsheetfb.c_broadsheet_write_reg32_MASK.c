
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct broadsheetfb_par *VAR_0, u16 VAR_1,
     u32 VAR_2)
{
 FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2) & 0xFFFF);
 FUNC_0(VAR_0, VAR_1 + 2, (FUNC_1(VAR_2) >> 16) & 0xFFFF);
}
