
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_add_ba_session_req_msg {int dialog_token; int policy; TYPE_1__ header; void* direction; void* ssn; scalar_t__ timeout; int buffer_size; void* tid; int mac_addr; void* sta_index; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_sta {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_add_ba_session_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_add_ba_session_req_msg) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wcn36xx*,int ) ;

int FUNC_8(struct wcn36xx *VAR_3,
  struct ieee80211_sta *VAR_4,
  u16 VAR_5,
  u16 *VAR_6,
  u8 VAR_7,
  u8 VAR_8)
{
 struct wcn36xx_hal_add_ba_session_req_msg VAR_9;
 int VAR_10;

 FUNC_3(&VAR_3->hal_mutex);
 FUNC_0(VAR_9, VAR_2);

 VAR_9.sta_index = VAR_8;
 FUNC_2(&VAR_9.mac_addr, VAR_4->addr, VAR_0);
 VAR_9.dialog_token = 0x10;
 VAR_9.tid = VAR_5;


 VAR_9.policy = 1;
 VAR_9.buffer_size = VAR_1;
 VAR_9.timeout = 0;
 if (VAR_6)
  VAR_9.ssn = *VAR_6;
 VAR_9.direction = VAR_7;

 FUNC_1(VAR_3->hal_buf, VAR_9);

 VAR_10 = FUNC_7(VAR_3, VAR_9.header.len);
 if (VAR_10) {
  FUNC_5("Sending hal_add_ba_session failed\n");
  goto out;
 }
 VAR_10 = FUNC_6(VAR_3->hal_buf, VAR_3->hal_rsp_len);
 if (VAR_10) {
  FUNC_5("hal_add_ba_session response failed err=%d\n", VAR_10);
  goto out;
 }
out:
 FUNC_4(&VAR_3->hal_mutex);
 return VAR_10;
}
