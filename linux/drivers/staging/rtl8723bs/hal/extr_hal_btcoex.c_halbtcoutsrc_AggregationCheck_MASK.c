
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adapter {int dummy; } ;
struct TYPE_4__ {scalar_t__ bPreBtCtrlAggBufSize; scalar_t__ bBtCtrlAggBufSize; scalar_t__ preAggBufSize; scalar_t__ aggBufSize; scalar_t__ bRejectAggPkt; } ;
struct TYPE_5__ {TYPE_1__ btInfo; struct adapter* Adapter; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int FUNC_0 (struct adapter*,int) ;

__attribute__((used)) static void FUNC_1(PBTC_COEXIST VAR_0)
{
 struct adapter *VAR_1;
 bool VAR_2;


 VAR_1 = VAR_0->Adapter;
 VAR_2 = 0;

 if (VAR_0->btInfo.bRejectAggPkt) {
  FUNC_0(VAR_1, 1);
 } else {
  if (VAR_0->btInfo.bPreBtCtrlAggBufSize !=
   VAR_0->btInfo.bBtCtrlAggBufSize) {
   VAR_2 = 1;
   VAR_0->btInfo.bPreBtCtrlAggBufSize = VAR_0->btInfo.bBtCtrlAggBufSize;
  }

  if (VAR_0->btInfo.bBtCtrlAggBufSize) {
   if (VAR_0->btInfo.preAggBufSize !=
    VAR_0->btInfo.aggBufSize){
    VAR_2 = 1;
   }
   VAR_0->btInfo.preAggBufSize = VAR_0->btInfo.aggBufSize;
  }

  if (VAR_2) {
   FUNC_0(VAR_1, 1);
   FUNC_0(VAR_1, 0);
  }
 }
}
