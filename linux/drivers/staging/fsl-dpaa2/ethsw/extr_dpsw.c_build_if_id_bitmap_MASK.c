
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le64 ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(__le64 *VAR_1,
          const u16 *VAR_2,
          const u16 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; (VAR_4 < VAR_3) && (VAR_4 < VAR_0); VAR_4++) {
  if (VAR_2[VAR_4] < VAR_0)
   VAR_1[VAR_2[VAR_4] / 64] |= FUNC_1(FUNC_0(VAR_2[VAR_4] % 64));
 }
}
