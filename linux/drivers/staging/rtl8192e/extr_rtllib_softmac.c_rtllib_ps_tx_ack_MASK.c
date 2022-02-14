
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtllib_device {scalar_t__ sta_sleep; int lock; int mgmt_tx_lock; TYPE_1__* pHTInfo; int ps_time; int dev; int (* enter_sleep_state ) (int ,int ) ;} ;
struct TYPE_2__ {int IOTAction; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtllib_device*,int ) ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct rtllib_device *VAR_4, short VAR_5)
{
 unsigned long VAR_6, VAR_7;

 FUNC_2(&VAR_4->lock, VAR_6);

 if (VAR_4->sta_sleep == VAR_3) {

  if (VAR_5) {
   VAR_4->sta_sleep = VAR_1;
   VAR_4->enter_sleep_state(VAR_4->dev, VAR_4->ps_time);
  }



 } else {

  if ((VAR_4->sta_sleep == VAR_2) && !VAR_5) {
   FUNC_2(&VAR_4->mgmt_tx_lock, VAR_7);
   if (VAR_4->pHTInfo->IOTAction &
       VAR_0)
    FUNC_0(VAR_4, 0);
   else
    FUNC_1(VAR_4);
   FUNC_3(&VAR_4->mgmt_tx_lock, VAR_7);
  }
 }
 FUNC_3(&VAR_4->lock, VAR_6);
}
