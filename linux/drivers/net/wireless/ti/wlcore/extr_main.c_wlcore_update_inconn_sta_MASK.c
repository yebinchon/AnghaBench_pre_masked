
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int ap_pending_auth_reply; int role_id; int inconn_count; } ;
struct wl1271_station {int in_connection; } ;
struct wl1271 {int roc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wl1271*,int ) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;

void FUNC_4(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
         struct wl1271_station *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  if (FUNC_0(VAR_2 && VAR_2->in_connection))
   return;

  if (!VAR_1->ap_pending_auth_reply &&
      !VAR_1->inconn_count)
   FUNC_3(VAR_0, VAR_1);

  if (VAR_2) {
   VAR_2->in_connection = 1;
   VAR_1->inconn_count++;
  } else {
   VAR_1->ap_pending_auth_reply = 1;
  }
 } else {
  if (VAR_2 && !VAR_2->in_connection)
   return;

  if (FUNC_0(!VAR_2 && !VAR_1->ap_pending_auth_reply))
   return;

  if (FUNC_0(VAR_2 && !VAR_1->inconn_count))
   return;

  if (VAR_2) {
   VAR_2->in_connection = 0;
   VAR_1->inconn_count--;
  } else {
   VAR_1->ap_pending_auth_reply = 0;
  }

  if (!VAR_1->inconn_count && !VAR_1->ap_pending_auth_reply &&
      FUNC_1(VAR_1->role_id, VAR_0->roc_map))
   FUNC_2(VAR_0, VAR_1->role_id);
 }
}
