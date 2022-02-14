
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_vif {int bss_index; } ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_keep_alive_req_msg {int packet_type; TYPE_1__ header; int time_period; int bss_index; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_keep_alive_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_keep_alive_req_msg) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;
 struct wcn36xx_vif* FUNC_7 (struct ieee80211_vif*) ;
 int FUNC_8 (char*,int) ;

int FUNC_9(struct wcn36xx *VAR_5,
          struct ieee80211_vif *VAR_6,
          int VAR_7)
{
 struct wcn36xx_hal_keep_alive_req_msg VAR_8;
 struct wcn36xx_vif *VAR_9 = FUNC_7(VAR_6);
 int VAR_10;

 FUNC_2(&VAR_5->hal_mutex);
 FUNC_0(VAR_8, VAR_2);

 if (VAR_7 == VAR_1) {
  VAR_8.bss_index = VAR_9->bss_index;
  VAR_8.packet_type = VAR_1;
  VAR_8.time_period = VAR_4;
 } else if (VAR_7 == VAR_3) {

 } else {
  FUNC_8("unknown keep alive packet type %d\n", VAR_7);
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_5->hal_buf, VAR_8);

 VAR_10 = FUNC_6(VAR_5, VAR_8.header.len);
 if (VAR_10) {
  FUNC_4("Sending hal_keep_alive failed\n");
  goto out;
 }
 VAR_10 = FUNC_5(VAR_5->hal_buf, VAR_5->hal_rsp_len);
 if (VAR_10) {
  FUNC_4("hal_keep_alive response failed err=%d\n", VAR_10);
  goto out;
 }
out:
 FUNC_3(&VAR_5->hal_mutex);
 return VAR_10;
}
