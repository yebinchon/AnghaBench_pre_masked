
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wil_tid_crypto_rx_single {int key_set; } ;
struct TYPE_3__ {struct wil_tid_crypto_rx_single* key_id; } ;
struct wil_sta_info {TYPE_1__ group_crypto_rx; TYPE_2__* tid_crypto_rx; } ;
typedef enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;
struct TYPE_4__ {struct wil_tid_crypto_rx_single* key_id; } ;


 int VAR_0 ;



__attribute__((used)) static void FUNC_0(u8 VAR_1, enum wmi_key_usage VAR_2,
      struct wil_sta_info *VAR_3)
{
 struct wil_tid_crypto_rx_single *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 switch (VAR_2) {
 case 129:
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_3->tid_crypto_rx[VAR_5].key_id[VAR_1];
   VAR_4->key_set = 0;
  }
  break;
 case 128:
  VAR_4 = &VAR_3->group_crypto_rx.key_id[VAR_1];
  VAR_4->key_set = 0;
  break;
 default:
  break;
 }
}
