
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int btdmAntPos; } ;
struct TYPE_8__ {int bBtCtrlAggBufSize; int aggBufSize; int bIncreaseScanDevNum; } ;
struct TYPE_7__ {int bProfileNotified; } ;
struct TYPE_10__ {int cntBind; } ;
struct TYPE_11__ {int bBinded; TYPE_3__ boardInfo; TYPE_2__ btInfo; TYPE_1__ stackInfo; void* Adapter; TYPE_4__ statistics; } ;
typedef TYPE_5__* PBTC_COEXIST ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static u8 FUNC_0(void *VAR_2)
{
 PBTC_COEXIST VAR_3 = &VAR_1;

 if (VAR_3->bBinded)
  return 0;
 else
  VAR_3->bBinded = 1;

 VAR_3->statistics.cntBind++;

 VAR_3->Adapter = VAR_2;

 VAR_3->stackInfo.bProfileNotified = 0;

 VAR_3->btInfo.bBtCtrlAggBufSize = 0;
 VAR_3->btInfo.aggBufSize = 5;

 VAR_3->btInfo.bIncreaseScanDevNum = 0;


 VAR_3->boardInfo.btdmAntPos = VAR_0;

 return 1;
}
