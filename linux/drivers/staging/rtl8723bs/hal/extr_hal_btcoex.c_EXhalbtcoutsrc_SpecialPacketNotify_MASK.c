
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_9__ {int btdmAntNum; } ;
struct TYPE_8__ {int cntSpecialPacketNotify; } ;
struct TYPE_10__ {TYPE_2__ boardInfo; scalar_t__ bManualControl; TYPE_1__ statistics; } ;
typedef TYPE_3__* PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(PBTC_COEXIST VAR_6, u8 VAR_7)
{
 u8 VAR_8;

 if (!FUNC_2(VAR_6))
  return;
 VAR_6->statistics.cntSpecialPacketNotify++;
 if (VAR_6->bManualControl)
  return;

 if (VAR_4 == VAR_7) {
  VAR_8 = VAR_1;
 } else if (VAR_5 == VAR_7) {
  VAR_8 = VAR_2;
 } else if (VAR_3 == VAR_7) {
  VAR_8 = VAR_0;
 } else {
  return;
 }




 if (VAR_6->boardInfo.btdmAntNum == 2)
  FUNC_1(VAR_6, VAR_8);
 else if (VAR_6->boardInfo.btdmAntNum == 1)
  FUNC_0(VAR_6, VAR_8);


}
