
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {size_t NumberOfPhyBlock; size_t* Phy2LogMap; size_t NumberOfLogBlock; int * Log2PhyMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct us_data *VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *) VAR_3->extra;

 if (VAR_4 >= VAR_6->MS_Lib.NumberOfPhyBlock)
  return (u32)-1;

 VAR_5 = VAR_6->MS_Lib.Phy2LogMap[VAR_4];

 if (VAR_5 < VAR_6->MS_Lib.NumberOfLogBlock)
  VAR_6->MS_Lib.Log2PhyMap[VAR_5] = VAR_2;

 if (VAR_6->MS_Lib.Phy2LogMap[VAR_4] != VAR_1)
  VAR_6->MS_Lib.Phy2LogMap[VAR_4] = VAR_0;

 return 0;
}
