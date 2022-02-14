
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * pwrModeVal; int * cliBuf; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(PBTC_COEXIST VAR_1)
{
 u8 *VAR_2 = VAR_1->cliBuf;

 FUNC_1(VAR_2, VAR_0, "\r\n %-35s = %02x %02x %02x %02x %02x %02x ", "Power mode cmd ", VAR_1->pwrModeVal[0], VAR_1->pwrModeVal[1],

  VAR_1->pwrModeVal[2], VAR_1->pwrModeVal[3],
  VAR_1->pwrModeVal[4], VAR_1->pwrModeVal[5]);
 FUNC_0(VAR_2);
}
