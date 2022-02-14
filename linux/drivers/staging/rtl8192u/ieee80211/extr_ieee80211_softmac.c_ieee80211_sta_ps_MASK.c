
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ieee80211_device {scalar_t__ ps; scalar_t__ iw_mode; scalar_t__ state; int sta_sleep; int lock; int mgmt_tx_lock; void* ps_tl; void* ps_th; int dev; int (* ps_request_tx_ack ) (int ) ;scalar_t__ (* ps_is_queue_empty ) (int ) ;int (* enter_sleep_state ) (int ,void*,void*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_device*,int) ;
 short FUNC_1 (struct ieee80211_device*,void**,void**) ;
 int FUNC_2 (struct ieee80211_device*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,void*,void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(struct ieee80211_device *VAR_3)
{
 u32 VAR_4, VAR_5;
 short VAR_6;

 unsigned long VAR_7, VAR_8;

 FUNC_3(&VAR_3->lock, VAR_7);

 if ((VAR_3->ps == VAR_1 ||
      VAR_3->iw_mode != VAR_2 ||
      VAR_3->state != VAR_0)) {

  FUNC_3(&VAR_3->mgmt_tx_lock, VAR_8);

  FUNC_2(VAR_3, 1);

  FUNC_4(&VAR_3->mgmt_tx_lock, VAR_8);
 }

 VAR_6 = FUNC_1(VAR_3, &VAR_4, &VAR_5);

 if (VAR_6 == 0)
  goto out;

 if (VAR_6 == 1) {
  if (VAR_3->sta_sleep == 1) {
   VAR_3->enter_sleep_state(VAR_3->dev, VAR_4, VAR_5);
  } else if (VAR_3->sta_sleep == 0) {

   FUNC_3(&VAR_3->mgmt_tx_lock, VAR_8);

   if (VAR_3->ps_is_queue_empty(VAR_3->dev)) {
    VAR_3->sta_sleep = 2;

    VAR_3->ps_request_tx_ack(VAR_3->dev);

    FUNC_0(VAR_3, 1);

    VAR_3->ps_th = VAR_4;
    VAR_3->ps_tl = VAR_5;
   }
   FUNC_4(&VAR_3->mgmt_tx_lock, VAR_8);
  }
 } else if (VAR_6 == 2) {

  FUNC_3(&VAR_3->mgmt_tx_lock, VAR_8);

  FUNC_2(VAR_3, 1);

  FUNC_4(&VAR_3->mgmt_tx_lock, VAR_8);
 }
out:
 FUNC_4(&VAR_3->lock, VAR_7);
}
