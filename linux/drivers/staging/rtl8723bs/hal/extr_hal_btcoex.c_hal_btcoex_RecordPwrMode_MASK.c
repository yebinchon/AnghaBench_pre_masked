
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int pwrModeVal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int*,int) ;

void FUNC_2(struct adapter *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 FUNC_0(VAR_1, VAR_0, ("[BTCoex], FW write pwrModeCmd = 0x%04x%08x\n",
  VAR_4[0]<<8|VAR_4[1],
  VAR_4[2]<<24|VAR_4[3]<<16|VAR_4[4]<<8|VAR_4[5]));

 FUNC_1(VAR_2.pwrModeVal, VAR_4, VAR_5);
}
