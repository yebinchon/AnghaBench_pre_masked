
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wmi_event_swba {int dummy; } ;
struct wmi_cmd_hdr {int command_id; } ;
struct wmi {struct ath9k_htc_priv* drv_priv; int wmi_lock; int wmi_event_queue; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int flags; int tx_lock; } ;
struct ath9k_htc_priv {TYPE_1__ tx; int fatal_work; int hw; } ;


 int VAR_0 ;



 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct wmi_event_swba*) ;
 int FUNC_2 (struct ath9k_htc_priv*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 void* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(unsigned long VAR_1)
{
 struct wmi *VAR_2 = (struct wmi *)VAR_1;
 struct ath9k_htc_priv *VAR_3 = VAR_2->drv_priv;
 struct wmi_cmd_hdr *VAR_4;
 void *VAR_5;
 struct wmi_event_swba *VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 u16 VAR_9;

 do {
  FUNC_8(&VAR_2->wmi_lock, VAR_8);
  VAR_7 = FUNC_0(&VAR_2->wmi_event_queue);
  if (!VAR_7) {
   FUNC_10(&VAR_2->wmi_lock, VAR_8);
   return;
  }
  FUNC_10(&VAR_2->wmi_lock, VAR_8);

  VAR_4 = (struct wmi_cmd_hdr *) VAR_7->data;
  VAR_9 = FUNC_3(VAR_4->command_id);
  VAR_5 = FUNC_6(VAR_7, sizeof(struct wmi_cmd_hdr));

  switch (VAR_9) {
  case 129:
   VAR_6 = VAR_5;
   FUNC_1(VAR_3, VAR_6);
   break;
  case 130:
   FUNC_4(VAR_2->drv_priv->hw,
          &VAR_2->drv_priv->fatal_work);
   break;
  case 128:
   FUNC_7(&VAR_3->tx.tx_lock);
   if (VAR_3->tx.flags & VAR_0) {
    FUNC_9(&VAR_3->tx.tx_lock);
    break;
   }
   FUNC_9(&VAR_3->tx.tx_lock);

   FUNC_2(VAR_3, VAR_5);
   break;
  default:
   break;
  }

  FUNC_5(VAR_7);
 } while (1);
}
