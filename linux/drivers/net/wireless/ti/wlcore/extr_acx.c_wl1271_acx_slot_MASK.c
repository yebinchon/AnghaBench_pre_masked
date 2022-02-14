
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_slot {int slot_time; int wone_index; int role_id; } ;
typedef enum acx_slot_type { ____Placeholder_acx_slot_type } acx_slot_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_slot*) ;
 struct acx_slot* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_slot*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
      enum acx_slot_type VAR_7)
{
 struct acx_slot *VAR_8;
 int VAR_9;

 FUNC_3(VAR_1, "acx slot");

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_8->role_id = VAR_6->role_id;
 VAR_8->wone_index = VAR_4;
 VAR_8->slot_time = VAR_7;

 VAR_9 = FUNC_2(VAR_5, VAR_0, VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_4("failed to set slot time: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
