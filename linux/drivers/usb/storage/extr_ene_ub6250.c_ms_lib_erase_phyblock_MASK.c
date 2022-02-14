
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {size_t NumberOfPhyBlock; size_t* Phy2LogMap; size_t NumberOfLogBlock; void** Log2PhyMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;



 void* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ene_ub6250_info*,int ) ;
 int FUNC_1 (struct us_data*,size_t) ;
 scalar_t__ FUNC_2 (struct ene_ub6250_info*) ;
 int FUNC_3 (struct us_data*,size_t) ;
 int FUNC_4 (struct us_data*,size_t) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *) VAR_3->extra;

 if (VAR_4 >= VAR_6->MS_Lib.NumberOfPhyBlock)
  return 130;

 VAR_5 = VAR_6->MS_Lib.Phy2LogMap[VAR_4];

 if (VAR_5 < VAR_6->MS_Lib.NumberOfLogBlock)
  VAR_6->MS_Lib.Log2PhyMap[VAR_5] = VAR_0;

 VAR_6->MS_Lib.Phy2LogMap[VAR_4] = VAR_0;

 if (FUNC_2(VAR_6)) {
  switch (FUNC_4(VAR_3, VAR_4)) {
  case 128:
   VAR_6->MS_Lib.Phy2LogMap[VAR_4] = VAR_1;
   return 128;
  case 131:
  case 129:
   FUNC_1(VAR_3, VAR_4);
   return 131;
  case 130:
  default:
   FUNC_0(VAR_6, VAR_2);
   FUNC_3(VAR_3, VAR_4);
   return 130;
  }
 }

 FUNC_3(VAR_3, VAR_4);

 return 128;
}
