
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int role_id; int basic_rate_set; } ;
struct TYPE_2__ {int frame_ctl; } ;
struct wl12xx_disconn_template {TYPE_1__ header; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wl12xx_disconn_template*) ;
 struct wl12xx_disconn_template* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,int ,struct wl12xx_disconn_template*,int,int ,int ) ;
 int FUNC_4 (struct wl1271*,int ) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_5,
       struct wl12xx_vif *VAR_6)
{
 struct wl12xx_disconn_template *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7->header.frame_ctl = FUNC_0(VAR_3 |
          VAR_4);

 VAR_9 = FUNC_4(VAR_5, VAR_6->basic_rate_set);
 VAR_8 = FUNC_3(VAR_5, VAR_6->role_id,
          VAR_0,
          VAR_7, sizeof(*VAR_7), 0, VAR_9);

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
