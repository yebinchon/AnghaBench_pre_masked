
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_switch_channel_req_msg {int tx_mgmt_power; int max_tx_power; TYPE_1__ header; int self_sta_mac_addr; scalar_t__ channel_number; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_switch_channel_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_switch_channel_req_msg) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wcn36xx*,int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct wcn36xx *VAR_2,
          struct ieee80211_vif *VAR_3, int VAR_4)
{
 struct wcn36xx_hal_switch_channel_req_msg VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2->hal_mutex);
 FUNC_0(VAR_5, VAR_1);

 VAR_5.channel_number = (u8)VAR_4;
 VAR_5.tx_mgmt_power = 0xbf;
 VAR_5.max_tx_power = 0xbf;
 FUNC_2(VAR_5.self_sta_mac_addr, VAR_3->addr, VAR_0);

 FUNC_1(VAR_2->hal_buf, VAR_5);

 VAR_6 = FUNC_6(VAR_2, VAR_5.header.len);
 if (VAR_6) {
  FUNC_5("Sending hal_switch_channel failed\n");
  goto out;
 }
 VAR_6 = FUNC_7(VAR_2->hal_buf, VAR_2->hal_rsp_len);
 if (VAR_6) {
  FUNC_5("hal_switch_channel response failed err=%d\n", VAR_6);
  goto out;
 }
out:
 FUNC_4(&VAR_2->hal_mutex);
 return VAR_6;
}
