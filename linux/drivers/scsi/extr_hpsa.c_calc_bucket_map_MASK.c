
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(int VAR_0[], int VAR_1,
 int VAR_2, int VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;


 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++) {

  VAR_8 = VAR_5 + VAR_3;
  VAR_7 = VAR_1;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_0[VAR_6] >= VAR_8) {
    VAR_7 = VAR_6;
    break;
   }
  }

  VAR_4[VAR_5] = VAR_7;
 }
}
