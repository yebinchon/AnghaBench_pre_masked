
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {size_t NumberOfLogBlock; size_t NumberOfPhyBlock; size_t* Phy2LogMap; size_t* Log2PhyMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;



__attribute__((used)) static int FUNC_0(struct us_data *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct ene_ub6250_info *VAR_3 = (struct ene_ub6250_info *) VAR_0->extra;

 if ((VAR_1 >= VAR_3->MS_Lib.NumberOfLogBlock) || (VAR_2 >= VAR_3->MS_Lib.NumberOfPhyBlock))
  return (u32)-1;

 VAR_3->MS_Lib.Phy2LogMap[VAR_2] = VAR_1;
 VAR_3->MS_Lib.Log2PhyMap[VAR_1] = VAR_2;

 return 0;
}
