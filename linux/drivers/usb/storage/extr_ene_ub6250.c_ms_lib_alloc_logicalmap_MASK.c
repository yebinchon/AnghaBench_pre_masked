
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {int NumberOfPhyBlock; int NumberOfLogBlock; void** Log2PhyMap; void** Phy2LogMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct us_data*) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_2)
{
 u32 VAR_3;
 struct ene_ub6250_info *VAR_4 = (struct ene_ub6250_info *) VAR_2->extra;

 VAR_4->MS_Lib.Phy2LogMap = FUNC_0(VAR_4->MS_Lib.NumberOfPhyBlock,
      sizeof(u16),
      VAR_0);
 VAR_4->MS_Lib.Log2PhyMap = FUNC_0(VAR_4->MS_Lib.NumberOfLogBlock,
      sizeof(u16),
      VAR_0);

 if ((VAR_4->MS_Lib.Phy2LogMap == ((void*)0)) || (VAR_4->MS_Lib.Log2PhyMap == ((void*)0))) {
  FUNC_1(VAR_2);
  return (u32)-1;
 }

 for (VAR_3 = 0; VAR_3 < VAR_4->MS_Lib.NumberOfPhyBlock; VAR_3++)
  VAR_4->MS_Lib.Phy2LogMap[VAR_3] = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_4->MS_Lib.NumberOfLogBlock; VAR_3++)
  VAR_4->MS_Lib.Log2PhyMap[VAR_3] = VAR_1;

 return 0;
}
