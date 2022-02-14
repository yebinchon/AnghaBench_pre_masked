
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_send_beacon_req_msg {int beacon_length; int beacon_length6; int* beacon; int* bssid; int tim_ie_offset; int p2p_ie_offset; TYPE_1__ header; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct sk_buff {int* data; int len; } ;
struct ieee80211_vif {scalar_t__ type; int* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wcn36xx_hal_send_beacon_req_msg,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,struct wcn36xx_hal_send_beacon_req_msg) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct wcn36xx*,int ) ;

int FUNC_11(struct wcn36xx *VAR_7, struct ieee80211_vif *VAR_8,
       struct sk_buff *VAR_9, u16 VAR_10,
       u16 VAR_11)
{
 struct wcn36xx_hal_send_beacon_req_msg VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_5(&VAR_7->hal_mutex);
 FUNC_0(VAR_12, VAR_6);

 VAR_15 = VAR_9->data[VAR_10 + 1] - 3;
 VAR_14 = VAR_4 - VAR_15;


 if (VAR_8->type == VAR_3)
  VAR_14 = 0;

 VAR_12.beacon_length = VAR_9->len + VAR_14;

 VAR_12.beacon_length6 = VAR_12.beacon_length + 6;

 if (VAR_12.beacon_length > VAR_0) {
  FUNC_8("Beacon is to big: beacon size=%d\n",
         VAR_12.beacon_length);
  VAR_13 = -VAR_1;
  goto out;
 }
 FUNC_2(VAR_12.beacon, VAR_9->data, VAR_9->len);
 FUNC_2(VAR_12.bssid, VAR_8->addr, VAR_2);

 if (VAR_14 > 0) {






  FUNC_7(VAR_5, "Pad TIM PVM. %d bytes at %d\n",
       VAR_14, VAR_15);
  FUNC_3(&VAR_12.beacon[VAR_10 + 5 + VAR_15 + VAR_14],
   &VAR_12.beacon[VAR_10 + 5 + VAR_15],
   VAR_9->len - (VAR_10 + 5 + VAR_15));
  FUNC_4(&VAR_12.beacon[VAR_10 + 5 + VAR_15], 0, VAR_14);
  VAR_12.beacon[VAR_10 + 1] += VAR_14;
 }


 if (VAR_8->type == VAR_3)

  VAR_12.tim_ie_offset = 256;
 else
  VAR_12.tim_ie_offset = VAR_10+4;
 VAR_12.p2p_ie_offset = VAR_11;
 FUNC_1(VAR_7->hal_buf, VAR_12);

 FUNC_7(VAR_5,
      "hal send beacon beacon_length %d\n",
      VAR_12.beacon_length);

 VAR_13 = FUNC_10(VAR_7, VAR_12.header.len);
 if (VAR_13) {
  FUNC_8("Sending hal_send_beacon failed\n");
  goto out;
 }
 VAR_13 = FUNC_9(VAR_7->hal_buf, VAR_7->hal_rsp_len);
 if (VAR_13) {
  FUNC_8("hal_send_beacon response failed err=%d\n", VAR_13);
  goto out;
 }
out:
 FUNC_6(&VAR_7->hal_mutex);
 return VAR_13;
}
