
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ bcast_hlid; struct wl1271_ap_key** recorded_keys; } ;
struct wl12xx_vif {TYPE_1__ ap; int default_key; } ;
struct wl1271_ap_key {scalar_t__ hlid; scalar_t__ key_type; int tx_seq_16; int tx_seq_32; int key; int key_size; int id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,int ,int ,scalar_t__,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_2 (struct wl1271*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct wl1271_ap_key *VAR_8;
 bool VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  u8 VAR_10;
  if (VAR_5->ap.recorded_keys[VAR_6] == ((void*)0))
   break;

  VAR_8 = VAR_5->ap.recorded_keys[VAR_6];
  VAR_10 = VAR_8->hlid;
  if (VAR_10 == VAR_3)
   VAR_10 = VAR_5->ap.bcast_hlid;

  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_0,
         VAR_8->id, VAR_8->key_type,
         VAR_8->key_size, VAR_8->key,
         VAR_10, VAR_8->tx_seq_32,
         VAR_8->tx_seq_16);
  if (VAR_7 < 0)
   goto out;

  if (VAR_8->key_type == VAR_1)
   VAR_9 = 1;
 }

 if (VAR_9) {
  VAR_7 = FUNC_2(VAR_4, VAR_5->default_key,
           VAR_5->ap.bcast_hlid);
  if (VAR_7 < 0)
   goto out;
 }

out:
 FUNC_1(VAR_4, VAR_5);
 return VAR_7;
}
