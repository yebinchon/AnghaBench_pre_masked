
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wilc_wep_key {int key; void* key_len; void* index; } ;
struct wilc_vif {int ndev; } ;
struct wid {void** val; void* size; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wilc_wep_key*) ;
 struct wilc_wep_key* FUNC_1 (void*,int ) ;
 int FUNC_2 (int ,void* const*,void*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_5(struct wilc_vif *VAR_5, const u8 *VAR_6, u8 VAR_7,
        u8 VAR_8)
{
 struct wid VAR_9;
 int VAR_10;
 struct wilc_wep_key *VAR_11;

 VAR_9.id = VAR_2;
 VAR_9.type = VAR_3;
 VAR_9.size = sizeof(*VAR_11) + VAR_7;
 VAR_11 = FUNC_1(VAR_9.size, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_9.val = (u8 *)VAR_11;

 VAR_11->index = VAR_8;
 VAR_11->key_len = VAR_7;
 FUNC_2(VAR_11->key, VAR_6, VAR_7);

 VAR_10 = FUNC_4(VAR_5, VAR_4, &VAR_9, 1);
 if (VAR_10)
  FUNC_3(VAR_5->ndev,
      "Failed to add wep key config packet\n");

 FUNC_0(VAR_11);
 return VAR_10;
}
