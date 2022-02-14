
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ath6kl_vif {size_t def_txkey_index; TYPE_2__* wep_key_list; int fw_vif_idx; TYPE_1__* ar; } ;
struct TYPE_4__ {int key; scalar_t__ key_len; } ;
struct TYPE_3__ {int wmi; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,size_t,int ,size_t,scalar_t__,int *,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ath6kl_vif *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
  if (VAR_6->wep_key_list[VAR_7].key_len) {
   VAR_8 = VAR_0;
   if (VAR_7 == VAR_6->def_txkey_index)
    VAR_8 |= VAR_3;

   FUNC_0(VAR_6->ar->wmi, VAR_6->fw_vif_idx,
           VAR_7,
           VAR_4,
           VAR_8,
           VAR_6->wep_key_list[VAR_7].key_len,
           ((void*)0), 0,
           VAR_6->wep_key_list[VAR_7].key,
           VAR_1, ((void*)0),
           VAR_2);
  }
 }
}
