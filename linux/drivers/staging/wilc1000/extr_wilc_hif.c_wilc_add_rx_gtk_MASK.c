
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct wilc_vif {TYPE_1__* hif_drv; } ;
struct wilc_gtk_key {int key_len; int * key; scalar_t__ index; int * rsc; int * mac_addr; } ;
struct wid {int size; scalar_t__* val; void* type; void* id; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {scalar_t__ hif_state; scalar_t__ const* assoc_bssid; } ;


 int FUNC_0 (struct wid*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct wilc_gtk_key*) ;
 struct wilc_gtk_key* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__ const*,scalar_t__) ;
 int FUNC_4 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_5(struct wilc_vif *VAR_13, const u8 *VAR_14, u8 VAR_15,
      u8 VAR_16, u32 VAR_17, const u8 *VAR_18,
      const u8 *VAR_19, const u8 *VAR_20, u8 VAR_21,
      u8 VAR_22)
{
 int VAR_23 = 0;
 struct wilc_gtk_key *VAR_24;
 int VAR_25 = VAR_15 + VAR_9 + VAR_12;

 VAR_24 = FUNC_2(sizeof(*VAR_24) + VAR_25, VAR_2);
 if (!VAR_24)
  return -VAR_0;


 if (VAR_21 == VAR_11 &&
     VAR_13->hif_drv->hif_state == VAR_3)
  FUNC_3(VAR_24->mac_addr, VAR_13->hif_drv->assoc_bssid, VAR_1);

 if (VAR_18)
  FUNC_3(VAR_24->rsc, VAR_18, 8);
 VAR_24->index = VAR_16;
 VAR_24->key_len = VAR_25;
 FUNC_3(&VAR_24->key[0], VAR_14, VAR_15);

 if (VAR_19)
  FUNC_3(&VAR_24->key[VAR_15], VAR_19, VAR_9);

 if (VAR_20)
  FUNC_3(&VAR_24->key[VAR_15 + VAR_9],
         VAR_20, VAR_12);

 if (VAR_21 == VAR_8) {
  struct wid VAR_26[2];

  VAR_26[0].id = VAR_4;
  VAR_26[0].type = VAR_6;
  VAR_26[0].size = sizeof(char);
  VAR_26[0].val = (s8 *)&VAR_22;

  VAR_26[1].id = VAR_5;
  VAR_26[1].type = VAR_7;
  VAR_26[1].size = sizeof(*VAR_24) + VAR_25;
  VAR_26[1].val = (u8 *)VAR_24;

  VAR_23 = FUNC_4(VAR_13, VAR_10, VAR_26,
           FUNC_0(VAR_26));
 } else if (VAR_21 == VAR_11) {
  struct wid VAR_27;

  VAR_27.id = VAR_5;
  VAR_27.type = VAR_7;
  VAR_27.size = sizeof(*VAR_24) + VAR_25;
  VAR_27.val = (u8 *)VAR_24;
  VAR_23 = FUNC_4(VAR_13, VAR_10, &VAR_27, 1);
 }

 FUNC_1(VAR_24);
 return VAR_23;
}
