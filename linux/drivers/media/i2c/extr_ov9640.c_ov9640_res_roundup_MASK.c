
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, u32 *VAR_1)
{
 unsigned int VAR_2;
 enum { QQCIF, QQVGA, QCIF, QVGA, CIF, VGA, SXGA };
 static const u32 VAR_3[] = { 88, 160, 176, 320, 352, 640, 1280 };
 static const u32 VAR_4[] = { 72, 120, 144, 240, 288, 480, 960 };

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++) {
  if (VAR_3[VAR_2] >= *VAR_0 && VAR_4[VAR_2] >= *VAR_1) {
   *VAR_0 = VAR_3[VAR_2];
   *VAR_1 = VAR_4[VAR_2];
   return;
  }
 }

 *VAR_0 = VAR_3[SXGA];
 *VAR_1 = VAR_4[SXGA];
}
