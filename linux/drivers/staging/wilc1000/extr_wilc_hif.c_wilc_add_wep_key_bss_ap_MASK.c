
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_wep_key {int index; int key_len; int key; } ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int* val; void* type; int id; } ;
typedef int s8 ;
typedef enum authtype { ____Placeholder_authtype } authtype ;


 int FUNC_0 (struct wid*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wilc_wep_key*) ;
 struct wilc_wep_key* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wilc_vif*,int ,struct wid*,int ) ;

int FUNC_6(struct wilc_vif *VAR_8, const u8 *VAR_9, u8 VAR_10,
       u8 VAR_11, u8 VAR_12, enum authtype VAR_13)
{
 struct wid VAR_14[3];
 int VAR_15;
 struct wilc_wep_key *VAR_16;

 VAR_14[0].id = VAR_2;
 VAR_14[0].type = VAR_4;
 VAR_14[0].size = sizeof(char);
 VAR_14[0].val = &VAR_12;

 VAR_14[1].id = VAR_3;
 VAR_14[1].type = VAR_4;
 VAR_14[1].size = sizeof(char);
 VAR_14[1].val = (s8 *)&VAR_13;

 VAR_14[2].id = VAR_6;
 VAR_14[2].type = VAR_5;
 VAR_14[2].size = sizeof(*VAR_16) + VAR_10;
 VAR_16 = FUNC_2(VAR_14[2].size, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 VAR_14[2].val = (u8 *)VAR_16;

 VAR_16->index = VAR_11;
 VAR_16->key_len = VAR_10;
 FUNC_3(VAR_16->key, VAR_9, VAR_10);
 VAR_15 = FUNC_5(VAR_8, VAR_7, VAR_14,
          FUNC_0(VAR_14));
 if (VAR_15)
  FUNC_4(VAR_8->ndev,
      "Failed to add wep ap key config packet\n");

 FUNC_1(VAR_16);
 return VAR_15;
}
