
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {scalar_t__ mode; int Regdot11HTOperationalRateSet; int RegHTSuppRateSet; int Regdot11TxHTOperationalRateSet; } ;
struct r8192_priv {struct rtllib_device* rtllib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct r8192_priv *VAR_2)
{
 struct rtllib_device *VAR_3 = VAR_2->rtllib;

 if (VAR_3->mode == VAR_0 ||
     VAR_3->mode == VAR_1) {
  FUNC_0(VAR_3->Regdot11HTOperationalRateSet,
         VAR_3->RegHTSuppRateSet, 16);
  FUNC_0(VAR_3->Regdot11TxHTOperationalRateSet,
         VAR_3->RegHTSuppRateSet, 16);

 } else {
  FUNC_1(VAR_3->Regdot11HTOperationalRateSet, 0, 16);
 }
}
