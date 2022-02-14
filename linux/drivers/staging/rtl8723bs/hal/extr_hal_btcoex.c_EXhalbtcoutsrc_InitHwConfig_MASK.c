
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int btdmAntNum; } ;
struct TYPE_8__ {int cntInitHwConfig; } ;
struct TYPE_10__ {TYPE_2__ boardInfo; TYPE_1__ statistics; } ;
typedef TYPE_3__* PBTC_COEXIST ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(PBTC_COEXIST VAR_0, u8 VAR_1)
{
 if (!FUNC_2(VAR_0))
  return;

 VAR_0->statistics.cntInitHwConfig++;

 if (VAR_0->boardInfo.btdmAntNum == 2)
  FUNC_1(VAR_0, VAR_1);
 else if (VAR_0->boardInfo.btdmAntNum == 1)
  FUNC_0(VAR_0, VAR_1);
}
