
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u16 ;
struct ath6kl_vif {int aggr_cntxt; struct ath6kl* ar; } ;
struct ath6kl_sta {size_t keymgmt; size_t ucipher; size_t auth; size_t apsd_info; int aggr_conn; void* aid; int wpa_ie; int mac; } ;
struct TYPE_4__ {TYPE_1__* sta; } ;
struct ath6kl {int sta_list_index; TYPE_2__ ap_stats; struct ath6kl_sta* sta_list; } ;
struct TYPE_3__ {int aid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ath6kl_vif*,int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,size_t*,size_t) ;

__attribute__((used)) static void FUNC_3(struct ath6kl_vif *VAR_2, u8 *VAR_3, u16 VAR_4,
          u8 *VAR_5, size_t VAR_6, u8 VAR_7,
          u8 VAR_8, u8 VAR_9, u8 VAR_10)
{
 struct ath6kl *VAR_11 = VAR_2->ar;
 struct ath6kl_sta *VAR_12;
 u8 VAR_13;

 VAR_13 = VAR_4 - 1;

 VAR_12 = &VAR_11->sta_list[VAR_13];
 FUNC_2(VAR_12->mac, VAR_3, VAR_1);
 if (VAR_6 <= VAR_0)
  FUNC_2(VAR_12->wpa_ie, VAR_5, VAR_6);
 VAR_12->aid = VAR_4;
 VAR_12->keymgmt = VAR_7;
 VAR_12->ucipher = VAR_8;
 VAR_12->auth = VAR_9;
 VAR_12->apsd_info = VAR_10;

 VAR_11->sta_list_index = VAR_11->sta_list_index | (1 << VAR_13);
 VAR_11->ap_stats.sta[VAR_13].aid = FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_2->aggr_cntxt, VAR_12->aggr_conn);
}
