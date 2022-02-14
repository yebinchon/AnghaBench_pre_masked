
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; int basic_rate; int role_id; } ;
struct wl12xx_null_data_template {int dummy; } ;
struct wl1271 {int hw; } ;
struct sk_buff {int len; void* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct wl1271*,int ,int ,void*,int,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wl12xx_vif*) ;

int FUNC_5(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 int VAR_6;
 void *VAR_7;
 int VAR_8 = -VAR_2;


 if (VAR_4->bss_type == VAR_0) {
  VAR_6 = sizeof(struct wl12xx_null_data_template);
  VAR_7 = ((void*)0);
 } else {
  VAR_5 = FUNC_1(VAR_3->hw,
          FUNC_4(VAR_4),
          0);
  if (!VAR_5)
   goto out;
  VAR_6 = VAR_5->len;
  VAR_7 = VAR_5->data;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_4->role_id,
          VAR_1, VAR_7, VAR_6, 0,
          VAR_4->basic_rate);

out:
 FUNC_0(VAR_5);
 if (VAR_8)
  FUNC_3("cmd buld null data failed %d", VAR_8);

 return VAR_8;

}
