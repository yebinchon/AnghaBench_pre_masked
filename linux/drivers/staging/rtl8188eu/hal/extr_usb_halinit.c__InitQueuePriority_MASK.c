
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {int OutEpNumber; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0)
{
 switch (VAR_0->HalData->OutEpNumber) {
 case 1:
  FUNC_0(VAR_0);
  break;
 case 2:
  FUNC_2(VAR_0);
  break;
 case 3:
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
