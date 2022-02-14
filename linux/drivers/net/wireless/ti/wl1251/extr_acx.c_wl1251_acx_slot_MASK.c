
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_slot {int slot_time; int wone_index; } ;
typedef enum acx_slot_type { ____Placeholder_acx_slot_type } acx_slot_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_slot*) ;
 struct acx_slot* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_slot*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_5, enum acx_slot_type VAR_6)
{
 struct acx_slot *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx slot");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->wone_index = VAR_4;
 VAR_7->slot_time = VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("failed to set slot time: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
