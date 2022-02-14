
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int btdmAntNum; } ;
struct TYPE_10__ {TYPE_1__ boardInfo; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(PBTC_COEXIST VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;

 FUNC_3(VAR_0);

 if (VAR_0->boardInfo.btdmAntNum == 2)
  FUNC_1(VAR_0);
 else if (VAR_0->boardInfo.btdmAntNum == 1)
  FUNC_0(VAR_0);

 FUNC_4(VAR_0);
}
