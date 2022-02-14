
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_null_data_template {int dummy; } ;
struct wl1251 {scalar_t__ bss_type; int vif; int hw; } ;
struct sk_buff {int len; void* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct wl1251*,int ,void*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct wl1251 *VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0);
 int VAR_5;
 void *VAR_6;
 int VAR_7 = -VAR_2;

 if (VAR_3->bss_type == VAR_0) {
  VAR_5 = sizeof(struct wl12xx_null_data_template);
  VAR_6 = ((void*)0);
 } else {
  VAR_4 = FUNC_1(VAR_3->hw, VAR_3->vif, 0);
  if (!VAR_4)
   goto out;
  VAR_5 = VAR_4->len;
  VAR_6 = VAR_4->data;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_1, VAR_6, VAR_5);

out:
 FUNC_0(VAR_4);
 if (VAR_7)
  FUNC_3("cmd buld null data failed: %d", VAR_7);

 return VAR_7;
}
