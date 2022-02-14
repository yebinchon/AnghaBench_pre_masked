
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_feature_config {scalar_t__ options; scalar_t__ data_flow_options; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_feature_config*) ;
 struct acx_feature_config* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_feature_config*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct acx_feature_config *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx feature cfg");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }


 VAR_6->role_id = VAR_5->role_id;
 VAR_6->data_flow_options = 0;
 VAR_6->options = 0;

 VAR_7 = FUNC_2(VAR_4, VAR_0,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("Couldn't set HW encryption");
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
