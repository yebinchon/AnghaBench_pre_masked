
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int OutEpNumber; } ;


 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,int) ;

__attribute__((used)) static bool FUNC_2(struct adapter *VAR_0, u8 VAR_1, u8 VAR_2)
{
 bool VAR_3 = 0;

 FUNC_0(VAR_0, VAR_2);


 if (VAR_0->HalData->OutEpNumber == 1) {
  if (VAR_1 != 1)
   return VAR_3;
 }



 VAR_3 = FUNC_1(VAR_0, VAR_2);

 return VAR_3;
}
