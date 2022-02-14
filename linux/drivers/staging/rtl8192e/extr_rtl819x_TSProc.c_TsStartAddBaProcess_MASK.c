
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ts_record {int bAddBaReqInProgress; int TsAddBaTimer; scalar_t__ bAddBaReqDelayed; } ;
struct rtllib_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct rtllib_device *VAR_2, struct tx_ts_record *VAR_3)
{
 if (VAR_3->bAddBaReqInProgress == 0) {
  VAR_3->bAddBaReqInProgress = 1;

  if (VAR_3->bAddBaReqDelayed) {
   FUNC_2(VAR_2->dev, "Start ADDBA after 60 sec!!\n");
   FUNC_0(&VAR_3->TsAddBaTimer, VAR_1 +
      FUNC_1(VAR_0));
  } else {
   FUNC_2(VAR_2->dev, "Immediately Start ADDBA\n");
   FUNC_0(&VAR_3->TsAddBaTimer, VAR_1+10);
  }
 } else
  FUNC_2(VAR_2->dev, "BA timer is already added\n");
}
