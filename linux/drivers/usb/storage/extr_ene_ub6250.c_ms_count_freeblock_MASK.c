
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {int* Phy2LogMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;




 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct us_data *VAR_1, u16 VAR_2)
{
 u32 VAR_3, VAR_4;
 struct ene_ub6250_info *VAR_5 = (struct ene_ub6250_info *) VAR_1->extra;

 VAR_3 = VAR_2 + VAR_0;
 for (VAR_4 = 0; VAR_2 < VAR_3; VAR_2++) {
  switch (VAR_5->MS_Lib.Phy2LogMap[VAR_2]) {
  case 129:
  case 128:
   VAR_4++;
  default:
   break;
  }
 }

 return VAR_4;
}
