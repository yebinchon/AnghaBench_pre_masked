
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_device_buffer {int skb; int (* complete_handler ) (struct ks_wlan_private*,int ) ;int sendp; int size; } ;
struct TYPE_4__ {size_t qhead; struct tx_device_buffer* tx_dev_buff; } ;
struct TYPE_3__ {int status; } ;
struct ks_wlan_private {scalar_t__ dev_state; int rw_dwork; int wq; int net_dev; TYPE_2__ tx_dev; TYPE_1__ psstatus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct ks_wlan_private*,int ) ;
 scalar_t__ FUNC_6 (struct ks_wlan_private*) ;
 int FUNC_7 (struct ks_wlan_private*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ks_wlan_private *VAR_2)
{
 struct tx_device_buffer *VAR_3;
 int VAR_4;

 if (!FUNC_6(VAR_2) ||
     FUNC_0(&VAR_2->psstatus.status) == VAR_1)
  return;

 VAR_3 = &VAR_2->tx_dev.tx_dev_buff[VAR_2->tx_dev.qhead];
 if (VAR_2->dev_state >= VAR_0) {
  VAR_4 = FUNC_7(VAR_2, VAR_3->sendp, VAR_3->size);
  if (VAR_4) {
   FUNC_3(VAR_2->net_dev,
       "write_to_device error !!(%d)\n", VAR_4);
   FUNC_4(VAR_2->wq, &VAR_2->rw_dwork, 1);
   return;
  }
 }
 FUNC_2(VAR_3->sendp);
 if (VAR_3->complete_handler)
  (*VAR_3->complete_handler)(VAR_2, VAR_3->skb);
 FUNC_1(VAR_2);

 if (FUNC_6(VAR_2))
  FUNC_4(VAR_2->wq, &VAR_2->rw_dwork, 0);
}
