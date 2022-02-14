
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; int encryption_type; int flags; } ;
struct wl1271 {int quirks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 int VAR_6;
 bool VAR_7 = (VAR_5->bss_type == VAR_0);
 if (FUNC_0(VAR_3, &VAR_5->flags))
  FUNC_1("JOIN while associated.");


 VAR_5->encryption_type = VAR_1;

 if (VAR_7)
  VAR_6 = FUNC_2(VAR_4, VAR_5);
 else {
  if (VAR_4->quirks & VAR_2) {







   FUNC_3(VAR_4, VAR_5);
   FUNC_4(VAR_4, VAR_5);
  }

  VAR_6 = FUNC_3(VAR_4, VAR_5);
 }

 return VAR_6;
}
