
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtllib_device {scalar_t__ sta_sleep; int ack_tx_to_ieee; int polling; TYPE_1__* pHTInfo; int dev; int (* sta_wake_up ) (int ) ;} ;
struct TYPE_2__ {int IOTAction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtllib_device*,int ) ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rtllib_device *VAR_3, short VAR_4)
{
 if (VAR_3->sta_sleep == VAR_2) {
  if (VAR_4) {
   if (VAR_3->pHTInfo->IOTAction &
       VAR_0) {
    VAR_3->ack_tx_to_ieee = 1;
    FUNC_0(VAR_3, 0);
   } else {
    VAR_3->ack_tx_to_ieee = 1;
    FUNC_1(VAR_3);
   }
  }
  return;

 }

 if (VAR_3->sta_sleep == VAR_1)
  VAR_3->sta_wake_up(VAR_3->dev);
 if (VAR_4) {
  if (VAR_3->pHTInfo->IOTAction &
      VAR_0) {
   VAR_3->ack_tx_to_ieee = 1;
   FUNC_0(VAR_3, 0);
  } else {
   VAR_3->ack_tx_to_ieee = 1;
   VAR_3->polling = 1;
   FUNC_1(VAR_3);
  }

 } else {
  VAR_3->sta_sleep = VAR_2;
  VAR_3->polling = 0;
 }
}
