
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int NumRxUnicastOkInPeriod; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
struct TYPE_4__ {scalar_t__ pwr_mode; scalar_t__ bLeisurePs; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 unsigned long VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct adapter*,int ,int) ;

void FUNC_5(struct adapter *VAR_3, u8 VAR_4, u32 VAR_5)
{
 static unsigned long VAR_6;
 static u32 VAR_7;
 u8 VAR_8 = 0;
 struct mlme_priv *VAR_9 = &VAR_3->mlmepriv;



 if (VAR_4) {
  VAR_7 += VAR_5;

  if (VAR_6 == 0)
   VAR_6 = VAR_2;

  if (FUNC_3(VAR_2 - VAR_6) > 2000) {
   if (VAR_7 > 8) {
    if (FUNC_1(VAR_3)->bLeisurePs
        && (FUNC_1(VAR_3)->pwr_mode != VAR_1)
        && !(FUNC_2(VAR_3))) {
     FUNC_0("leave lps via Tx = %d\n", VAR_7);
     VAR_8 = 1;
    }
   }

   VAR_6 = VAR_2;
   VAR_7 = 0;
  }

 } else {
  if (VAR_9->LinkDetectInfo.NumRxUnicastOkInPeriod > 4 ) {
   if (FUNC_1(VAR_3)->bLeisurePs
       && (FUNC_1(VAR_3)->pwr_mode != VAR_1)
       && !(FUNC_2(VAR_3))) {
    FUNC_0("leave lps via Rx = %d\n", VAR_9->LinkDetectInfo.NumRxUnicastOkInPeriod);
    VAR_8 = 1;
   }
  }
 }

 if (VAR_8)


  FUNC_4(VAR_3, VAR_0, VAR_4?0:1);
}
