
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int bBusyTraffic; int NumRxOkInPeriod; int NumTxOkInPeriod; int NumRxUnicastOkInPeriod; int TrafficTransitionCount; int bTxBusyTraffic; int bRxBusyTraffic; int bHigherBusyTraffic; int bHigherBusyRxTraffic; int bHigherBusyTxTraffic; } ;
struct mlme_priv {TYPE_2__ LinkDetectInfo; } ;
struct dvobj_priv {TYPE_1__* padapters; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
struct TYPE_3__ {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*) ;
 int FUNC_1 (struct adapter*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dvobj_priv* FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ,int) ;

u8 FUNC_6(struct adapter *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = 0;
 u16 VAR_6 = 25;
 u16 VAR_7 = 10;
 u16 VAR_8 = VAR_6;
 u8 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

 struct mlme_priv *VAR_15 = &(VAR_3->mlmepriv);

 FUNC_4(VAR_3);




 if ((FUNC_3(VAR_15, VAR_2) == 1)
                                              ) {

  if (VAR_15->LinkDetectInfo.bBusyTraffic)
    VAR_8 = VAR_7;

  if (VAR_15->LinkDetectInfo.NumRxOkInPeriod > VAR_8 ||
   VAR_15->LinkDetectInfo.NumTxOkInPeriod > VAR_8) {
   VAR_9 = 1;

   if (VAR_15->LinkDetectInfo.NumRxOkInPeriod > VAR_15->LinkDetectInfo.NumTxOkInPeriod)
    VAR_11 = 1;
   else
    VAR_10 = 1;
  }


  if (VAR_15->LinkDetectInfo.NumRxOkInPeriod > 4000 ||
   VAR_15->LinkDetectInfo.NumTxOkInPeriod > 4000) {
   VAR_12 = 1;

   if (VAR_15->LinkDetectInfo.NumRxOkInPeriod > VAR_15->LinkDetectInfo.NumTxOkInPeriod)
    VAR_13 = 1;
   else
    VAR_14 = 1;
  }


  if (((VAR_15->LinkDetectInfo.NumRxUnicastOkInPeriod + VAR_15->LinkDetectInfo.NumTxOkInPeriod) > 8) ||
   (VAR_15->LinkDetectInfo.NumRxUnicastOkInPeriod > 2)) {

   VAR_5 = 0;

   if (VAR_9 == 1) {
    if (VAR_15->LinkDetectInfo.TrafficTransitionCount <= 4)
     VAR_15->LinkDetectInfo.TrafficTransitionCount = 4;

    VAR_15->LinkDetectInfo.TrafficTransitionCount++;



    if (VAR_15->LinkDetectInfo.TrafficTransitionCount > 30 ) {
     VAR_15->LinkDetectInfo.TrafficTransitionCount = 30;
    }
   }
  } else {


   if (VAR_15->LinkDetectInfo.TrafficTransitionCount >= 2)
    VAR_15->LinkDetectInfo.TrafficTransitionCount -= 2;
   else
    VAR_15->LinkDetectInfo.TrafficTransitionCount = 0;

   if (VAR_15->LinkDetectInfo.TrafficTransitionCount == 0)
    VAR_5 = 1;
  }


  if (VAR_5) {
   if (!VAR_4)
    FUNC_0(VAR_3, "TRAFFIC_IDLE");
  } else {
   if (!VAR_4)
    FUNC_1(VAR_3, "TRAFFIC_BUSY");
   else
    FUNC_5(VAR_3, VAR_0, 1);
  }
 } else {
  struct dvobj_priv *VAR_16 = FUNC_2(VAR_3);
  int VAR_17 = 0;

  if (FUNC_3(&(VAR_16->padapters->mlmepriv), VAR_1))
   VAR_17++;

  if (!VAR_4 && VAR_17 == 0)
   FUNC_1(VAR_3, "NON_LINKED");
 }

 VAR_15->LinkDetectInfo.NumRxOkInPeriod = 0;
 VAR_15->LinkDetectInfo.NumTxOkInPeriod = 0;
 VAR_15->LinkDetectInfo.NumRxUnicastOkInPeriod = 0;
 VAR_15->LinkDetectInfo.bBusyTraffic = VAR_9;
 VAR_15->LinkDetectInfo.bTxBusyTraffic = VAR_10;
 VAR_15->LinkDetectInfo.bRxBusyTraffic = VAR_11;
 VAR_15->LinkDetectInfo.bHigherBusyTraffic = VAR_12;
 VAR_15->LinkDetectInfo.bHigherBusyRxTraffic = VAR_13;
 VAR_15->LinkDetectInfo.bHigherBusyTxTraffic = VAR_14;

 return VAR_5;

}
