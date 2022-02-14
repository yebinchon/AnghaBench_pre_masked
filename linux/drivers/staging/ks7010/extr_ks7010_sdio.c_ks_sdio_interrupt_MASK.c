
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int dummy; } ;
struct TYPE_2__ {int status; int wakeup_wait; } ;
struct ks_wlan_private {scalar_t__ dev_state; int rw_dwork; int wq; TYPE_1__ psstatus; int net_dev; scalar_t__ wakeup_count; } ;
struct ks_sdio_card {struct ks_wlan_private* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ks_wlan_private*,int ,int*) ;
 int FUNC_4 (struct ks_wlan_private*,size_t) ;
 int FUNC_5 (struct ks_wlan_private*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,int) ;
 struct ks_sdio_card* FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct ks_wlan_private*) ;
 scalar_t__ FUNC_10 (struct ks_wlan_private*) ;

__attribute__((used)) static void FUNC_11(struct sdio_func *VAR_10)
{
 int VAR_11;
 struct ks_sdio_card *VAR_12;
 struct ks_wlan_private *VAR_13;
 u8 VAR_14, VAR_15, VAR_16;

 VAR_12 = FUNC_8(VAR_10);
 VAR_13 = VAR_12->priv;

 if (VAR_13->dev_state < VAR_0)
  goto queue_delayed_work;

 VAR_11 = FUNC_3(VAR_13, VAR_4, &VAR_14);
 if (VAR_11) {
  FUNC_6(VAR_13->net_dev, "read INT_PENDING_REG\n");
  goto queue_delayed_work;
 }






 if (VAR_14 & VAR_3 ||
     FUNC_0(&VAR_13->psstatus.status) == VAR_5) {
  VAR_11 = FUNC_3(VAR_13, VAR_2, &VAR_16);
  if (VAR_11) {
   FUNC_6(VAR_13->net_dev, "read GCR_B_REG\n");
   goto queue_delayed_work;
  }
  if (VAR_16 == VAR_1) {
   if (FUNC_0(&VAR_13->psstatus.status) == VAR_5) {
    FUNC_1(&VAR_13->psstatus.status, VAR_6);
    VAR_13->wakeup_count = 0;
   }
   FUNC_2(&VAR_13->psstatus.wakeup_wait);
  }
 }

 do {

  VAR_11 = FUNC_3(VAR_13, VAR_9, &VAR_16);
  if (VAR_11) {
   FUNC_6(VAR_13->net_dev, "read WSTATUS_RSIZE_REG\n");
   goto queue_delayed_work;
  }
  VAR_15 = VAR_16 & VAR_7;
  if (VAR_15 != 0)
   FUNC_4(VAR_13, (size_t)(VAR_15 << 4));

  if (VAR_16 & VAR_8) {
   if (FUNC_0(&VAR_13->psstatus.status) == VAR_5) {
    if (FUNC_10(VAR_13)) {
     FUNC_5(VAR_13);
     FUNC_7(VAR_13->wq,
          &VAR_13->rw_dwork, 1);
     return;
    }
   } else {
    FUNC_9(VAR_13);
   }
  }
 } while (VAR_15);

queue_delayed_work:
 FUNC_7(VAR_13->wq, &VAR_13->rw_dwork, 0);
}
