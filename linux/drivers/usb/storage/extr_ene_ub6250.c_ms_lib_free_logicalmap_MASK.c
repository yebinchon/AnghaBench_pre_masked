
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {int * Log2PhyMap; int * Phy2LogMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_0)
{
 struct ene_ub6250_info *VAR_1 = (struct ene_ub6250_info *) VAR_0->extra;

 FUNC_0(VAR_1->MS_Lib.Phy2LogMap);
 VAR_1->MS_Lib.Phy2LogMap = ((void*)0);

 FUNC_0(VAR_1->MS_Lib.Log2PhyMap);
 VAR_1->MS_Lib.Log2PhyMap = ((void*)0);

 return 0;
}
