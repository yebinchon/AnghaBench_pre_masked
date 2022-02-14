
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wilc_vif {int dummy; } ;
struct wilc_sta_wpa_ptk {int * key; scalar_t__ key_len; int mac_addr; scalar_t__ index; } ;
struct wilc_ap_wpa_ptk {int * key; scalar_t__ key_len; int mac_addr; scalar_t__ index; } ;
struct wid {int size; scalar_t__* val; void* type; void* id; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (struct wid*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,scalar_t__ const*) ;
 int FUNC_2 (struct wilc_sta_wpa_ptk*) ;
 struct wilc_sta_wpa_ptk* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,scalar_t__ const*,scalar_t__) ;
 int FUNC_5 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_6(struct wilc_vif *VAR_11, const u8 *VAR_12, u8 VAR_13,
   const u8 *VAR_14, const u8 *VAR_15, const u8 *VAR_16,
   u8 VAR_17, u8 VAR_18, u8 VAR_19)
{
 int VAR_20 = 0;
 u8 VAR_21 = VAR_13 + VAR_7 + VAR_10;

 if (VAR_17 == VAR_6) {
  struct wid VAR_22[2];
  struct wilc_ap_wpa_ptk *VAR_23;

  VAR_22[0].id = VAR_2;
  VAR_22[0].type = VAR_4;
  VAR_22[0].size = sizeof(char);
  VAR_22[0].val = (s8 *)&VAR_18;

  VAR_23 = FUNC_3(sizeof(*VAR_23) + VAR_21, VAR_1);
  if (!VAR_23)
   return -VAR_0;

  FUNC_1(VAR_23->mac_addr, VAR_14);
  VAR_23->index = VAR_19;
  VAR_23->key_len = VAR_21;
  FUNC_4(&VAR_23->key[0], VAR_12, VAR_13);

  if (VAR_15)
   FUNC_4(&VAR_23->key[VAR_13], VAR_15,
          VAR_7);

  if (VAR_16)
   FUNC_4(&VAR_23->key[VAR_13 + VAR_7],
          VAR_16, VAR_10);

  VAR_22[1].id = VAR_3;
  VAR_22[1].type = VAR_5;
  VAR_22[1].size = sizeof(*VAR_23) + VAR_21;
  VAR_22[1].val = (u8 *)VAR_23;
  VAR_20 = FUNC_5(VAR_11, VAR_8, VAR_22,
           FUNC_0(VAR_22));
  FUNC_2(VAR_23);
 } else if (VAR_17 == VAR_9) {
  struct wid VAR_24;
  struct wilc_sta_wpa_ptk *VAR_25;

  VAR_25 = FUNC_3(sizeof(*VAR_25) + VAR_21, VAR_1);
  if (!VAR_25)
   return -VAR_0;

  FUNC_1(VAR_25->mac_addr, VAR_14);
  VAR_25->key_len = VAR_21;
  FUNC_4(&VAR_25->key[0], VAR_12, VAR_13);

  if (VAR_15)
   FUNC_4(&VAR_25->key[VAR_13], VAR_15,
          VAR_7);

  if (VAR_16)
   FUNC_4(&VAR_25->key[VAR_13 + VAR_7],
          VAR_16, VAR_10);

  VAR_24.id = VAR_3;
  VAR_24.type = VAR_5;
  VAR_24.size = sizeof(*VAR_25) + VAR_21;
  VAR_24.val = (s8 *)VAR_25;
  VAR_20 = FUNC_5(VAR_11, VAR_8, &VAR_24, 1);
  FUNC_2(VAR_25);
 }

 return VAR_20;
}
