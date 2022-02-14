
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int curAlgorithm; int preAlgorithm; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(PBTC_COEXIST VAR_3)
{
 u8 VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_2->curAlgorithm = VAR_4;

 if (FUNC_2(VAR_3)) {

 } else {
  switch (VAR_2->curAlgorithm) {
  case 128:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = SCO.\n"));

   break;
  case 135:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = HID.\n"));

   break;
  case 137:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = A2DP.\n"));

   break;
  case 136:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = A2DP+PAN(HS).\n"));

   break;
  case 132:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = PAN(EDR).\n"));

   break;
  case 129:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = HS mode.\n"));

   break;
  case 131:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = PAN+A2DP.\n"));

   break;
  case 130:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = PAN(EDR)+HID.\n"));

   break;
  case 133:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = HID+A2DP+PAN.\n"));

   break;
  case 134:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = HID+A2DP.\n"));

   break;
  default:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action algorithm = coexist All Off!!\n"));
   break;
  }
  VAR_2->preAlgorithm = VAR_2->curAlgorithm;
 }
}
