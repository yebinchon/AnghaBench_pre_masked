
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_vif {scalar_t__ bss_index; } ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_delete_bss_req_msg {scalar_t__ bss_index; TYPE_1__ header; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct wcn36xx_hal_delete_bss_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_delete_bss_req_msg) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wcn36xx*,int ) ;
 struct wcn36xx_vif* FUNC_8 (struct ieee80211_vif*) ;

int FUNC_9(struct wcn36xx *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct wcn36xx_hal_delete_bss_req_msg VAR_5;
 struct wcn36xx_vif *VAR_6 = FUNC_8(VAR_4);
 int VAR_7 = 0;

 FUNC_2(&VAR_3->hal_mutex);

 if (VAR_6->bss_index == VAR_1)
  goto out;

 FUNC_0(VAR_5, VAR_2);

 VAR_5.bss_index = VAR_6->bss_index;

 FUNC_1(VAR_3->hal_buf, VAR_5);

 FUNC_4(VAR_0, "hal delete bss %d\n", VAR_5.bss_index);

 VAR_7 = FUNC_7(VAR_3, VAR_5.header.len);
 if (VAR_7) {
  FUNC_5("Sending hal_delete_bss failed\n");
  goto out;
 }
 VAR_7 = FUNC_6(VAR_3->hal_buf, VAR_3->hal_rsp_len);
 if (VAR_7) {
  FUNC_5("hal_delete_bss response failed err=%d\n", VAR_7);
  goto out;
 }

 VAR_6->bss_index = VAR_1;
out:
 FUNC_3(&VAR_3->hal_mutex);
 return VAR_7;
}
