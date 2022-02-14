
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int NumRxOkInPeriod; int NumTxOkInPeriod; int NumRxUnicastOkInPeriod; int bBusyTraffic; int bTxBusyTraffic; int bRxBusyTraffic; int bHigherBusyTraffic; int bHigherBusyRxTraffic; int bHigherBusyTxTraffic; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 u8 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct mlme_priv *VAR_9 = &VAR_1->mlmepriv;




 if (FUNC_2(VAR_9, VAR_0)) {
  if (VAR_9->LinkDetectInfo.NumRxOkInPeriod > 100 ||
      VAR_9->LinkDetectInfo.NumTxOkInPeriod > 100) {
   VAR_3 = 1;

   if (VAR_9->LinkDetectInfo.NumRxOkInPeriod > VAR_9->LinkDetectInfo.NumTxOkInPeriod)
    VAR_5 = 1;
   else
    VAR_4 = 1;
  }


  if (VAR_9->LinkDetectInfo.NumRxOkInPeriod > 4000 ||
      VAR_9->LinkDetectInfo.NumTxOkInPeriod > 4000) {
   VAR_6 = 1;

   if (VAR_9->LinkDetectInfo.NumRxOkInPeriod > VAR_9->LinkDetectInfo.NumTxOkInPeriod)
    VAR_7 = 1;
   else
    VAR_8 = 1;
  }


  if (((VAR_9->LinkDetectInfo.NumRxUnicastOkInPeriod + VAR_9->LinkDetectInfo.NumTxOkInPeriod) > 8) ||
      (VAR_9->LinkDetectInfo.NumRxUnicastOkInPeriod > 2))
   VAR_2 = 0;
  else
   VAR_2 = 1;


  if (VAR_2)
   FUNC_0(VAR_1);
  else
   FUNC_1(VAR_1);
 } else {
  FUNC_1(VAR_1);
 }

 VAR_9->LinkDetectInfo.NumRxOkInPeriod = 0;
 VAR_9->LinkDetectInfo.NumTxOkInPeriod = 0;
 VAR_9->LinkDetectInfo.NumRxUnicastOkInPeriod = 0;
 VAR_9->LinkDetectInfo.bBusyTraffic = VAR_3;
 VAR_9->LinkDetectInfo.bTxBusyTraffic = VAR_4;
 VAR_9->LinkDetectInfo.bRxBusyTraffic = VAR_5;
 VAR_9->LinkDetectInfo.bHigherBusyTraffic = VAR_6;
 VAR_9->LinkDetectInfo.bHigherBusyRxTraffic = VAR_7;
 VAR_9->LinkDetectInfo.bHigherBusyTxTraffic = VAR_8;
}
