
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ NumberOfLogBlock; scalar_t__ NumberOfPhyBlock; scalar_t__ PagesPerBlock; scalar_t__ blockSize; scalar_t__ cardType; scalar_t__ SectorsPerCylinder; scalar_t__ BytesPerSector; scalar_t__ flags; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*) ;

__attribute__((used)) static void FUNC_2(struct us_data *VAR_0)
{
 struct ene_ub6250_info *VAR_1 = (struct ene_ub6250_info *) VAR_0->extra;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);


 VAR_1->MS_Lib.flags = 0;
 VAR_1->MS_Lib.BytesPerSector = 0;
 VAR_1->MS_Lib.SectorsPerCylinder = 0;

 VAR_1->MS_Lib.cardType = 0;
 VAR_1->MS_Lib.blockSize = 0;
 VAR_1->MS_Lib.PagesPerBlock = 0;

 VAR_1->MS_Lib.NumberOfPhyBlock = 0;
 VAR_1->MS_Lib.NumberOfLogBlock = 0;
}
