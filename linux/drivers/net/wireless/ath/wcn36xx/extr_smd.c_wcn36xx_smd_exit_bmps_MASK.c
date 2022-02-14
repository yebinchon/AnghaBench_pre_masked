
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_vif {int bss_index; } ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_exit_bmps_req_msg {TYPE_1__ header; int bss_index; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct wcn36xx_hal_exit_bmps_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_exit_bmps_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;
 struct wcn36xx_vif* FUNC_7 (struct ieee80211_vif*) ;

int FUNC_8(struct wcn36xx *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct wcn36xx_hal_exit_bmps_req_msg VAR_3;
 struct wcn36xx_vif *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_3, VAR_0);

 VAR_3.bss_index = VAR_4->bss_index;

 FUNC_1(VAR_1->hal_buf, VAR_3);

 VAR_5 = FUNC_6(VAR_1, VAR_3.header.len);
 if (VAR_5) {
  FUNC_4("Sending hal_exit_bmps failed\n");
  goto out;
 }
 VAR_5 = FUNC_5(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_5) {
  FUNC_4("hal_exit_bmps response failed err=%d\n", VAR_5);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_5;
}
