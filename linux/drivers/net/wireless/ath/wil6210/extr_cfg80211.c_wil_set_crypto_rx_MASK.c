
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wil_tid_crypto_rx_single {int key_set; int pn; } ;
struct TYPE_4__ {struct wil_tid_crypto_rx_single* key_id; } ;
struct wil_sta_info {TYPE_2__ group_crypto_rx; TYPE_1__* tid_crypto_rx; } ;
struct key_params {int seq; } ;
typedef enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;
struct TYPE_3__ {struct wil_tid_crypto_rx_single* key_id; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(u8 VAR_2, enum wmi_key_usage VAR_3,
         struct wil_sta_info *VAR_4,
         struct key_params *VAR_5)
{
 struct wil_tid_crypto_rx_single *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return;

 switch (VAR_3) {
 case 128:
 case 130:
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_6 = &VAR_4->tid_crypto_rx[VAR_7].key_id[VAR_2];
   if (VAR_5->seq)
    FUNC_0(VAR_6->pn, VAR_5->seq,
           VAR_0);
   else
    FUNC_1(VAR_6->pn, 0, VAR_0);
   VAR_6->key_set = 1;
  }
  break;
 case 129:
  VAR_6 = &VAR_4->group_crypto_rx.key_id[VAR_2];
  if (VAR_5->seq)
   FUNC_0(VAR_6->pn, VAR_5->seq, VAR_0);
  else
   FUNC_1(VAR_6->pn, 0, VAR_0);
  VAR_6->key_set = 1;
  break;
 default:
  break;
 }
}
