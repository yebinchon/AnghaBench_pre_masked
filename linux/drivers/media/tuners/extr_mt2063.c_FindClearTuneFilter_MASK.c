
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt2063_state {int* CTFiltMax; } ;



__attribute__((used)) static u32 FUNC_0(struct mt2063_state *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;




 VAR_2 = 31;
 for (VAR_3 = 0; VAR_3 < 31; ++VAR_3) {
  if (VAR_0->CTFiltMax[VAR_3] >= VAR_1) {
   VAR_2 = VAR_3;
   break;
  }
 }
 return VAR_2;
}
