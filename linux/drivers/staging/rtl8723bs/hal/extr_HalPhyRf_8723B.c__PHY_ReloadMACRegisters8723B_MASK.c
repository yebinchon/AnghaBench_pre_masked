
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int,int) ;
 int FUNC_1 (struct adapter*,int,int ) ;

__attribute__((used)) static void FUNC_2(
 struct adapter *VAR_1, u32 *VAR_2, u32 *VAR_3
)
{
 u32 VAR_4;

 for (VAR_4 = 0 ; VAR_4 < (VAR_0 - 1); VAR_4++) {
  FUNC_1(VAR_1, VAR_2[VAR_4], (u8)VAR_3[VAR_4]);
 }
 FUNC_0(VAR_1, VAR_2[VAR_4], VAR_3[VAR_4]);
}
