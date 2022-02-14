
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; int flags; int basic_rate_set; int basic_rate; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_4 (struct wl1271*,int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3)
{
 int VAR_4;


 FUNC_3(VAR_2, VAR_3);
 VAR_3->basic_rate = FUNC_4(VAR_2, VAR_3->basic_rate_set);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->bss_type == VAR_0 &&
     FUNC_1(VAR_1, &VAR_3->flags)) {
  VAR_4 = FUNC_5(VAR_2, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
 }

 FUNC_0(VAR_1, &VAR_3->flags);
 return 0;
}
