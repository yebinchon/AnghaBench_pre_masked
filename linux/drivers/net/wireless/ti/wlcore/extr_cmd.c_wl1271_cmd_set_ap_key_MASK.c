
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ bcast_hlid; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_cmd_set_keys {scalar_t__ key; int * ac_seq_num32; void** ac_seq_num16; scalar_t__ key_id; scalar_t__ key_type; scalar_t__ key_size; void* key_action; scalar_t__ hlid; scalar_t__ lid_key_type; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl1271_cmd_set_keys*) ;
 struct wl1271_cmd_set_keys* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_5 (struct wl1271*,int ,struct wl1271_cmd_set_keys*,int,int ) ;
 int FUNC_6 (int ,char*,int,int,int,int,int) ;
 int FUNC_7 (int ,char*,struct wl1271_cmd_set_keys*,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(struct wl1271 *VAR_9, struct wl12xx_vif *VAR_10,
     u16 VAR_11, u8 VAR_12, u8 VAR_13,
     u8 VAR_14, const u8 *VAR_15, u8 VAR_16, u32 VAR_17,
     u16 VAR_18)
{
 struct wl1271_cmd_set_keys *VAR_19;
 int VAR_20 = 0;
 u8 VAR_21;

 VAR_19 = FUNC_3(sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return -VAR_3;

 if (VAR_16 == VAR_10->ap.bcast_hlid) {
  if (VAR_13 == VAR_6)
   VAR_21 = VAR_8;
  else
   VAR_21 = VAR_0;
 } else {
  VAR_21 = VAR_7;
 }

 FUNC_6(VAR_2, "ap key action: %d id: %d lid: %d type: %d"
       " hlid: %d", (int)VAR_11, (int)VAR_12, (int)VAR_21,
       (int)VAR_13, (int)VAR_16);

 VAR_19->lid_key_type = VAR_21;
 VAR_19->hlid = VAR_16;
 VAR_19->key_action = FUNC_0(VAR_11);
 VAR_19->key_size = VAR_14;
 VAR_19->key_type = VAR_13;
 VAR_19->key_id = VAR_12;
 VAR_19->ac_seq_num16[0] = FUNC_0(VAR_18);
 VAR_19->ac_seq_num32[0] = FUNC_1(VAR_17);

 if (VAR_13 == VAR_5) {






  FUNC_4(VAR_19->key, VAR_15, 16);
  FUNC_4(VAR_19->key + 16, VAR_15 + 24, 8);
  FUNC_4(VAR_19->key + 24, VAR_15 + 16, 8);
 } else {
  FUNC_4(VAR_19->key, VAR_15, VAR_14);
 }

 FUNC_7(VAR_2, "TARGET AP KEY: ", VAR_19, sizeof(*VAR_19));

 VAR_20 = FUNC_5(VAR_9, VAR_1, VAR_19, sizeof(*VAR_19), 0);
 if (VAR_20 < 0) {
  FUNC_8("could not set ap keys");
  goto out;
 }

out:
 FUNC_2(VAR_19);
 return VAR_20;
}
