
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_set_link_state_req_msg {int state; TYPE_1__ header; int self_mac_addr; int bssid; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
typedef enum wcn36xx_hal_link_state { ____Placeholder_wcn36xx_hal_link_state } wcn36xx_hal_link_state ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_set_link_state_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_set_link_state_req_msg) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wcn36xx*,int ) ;

int FUNC_9(struct wcn36xx *VAR_3, const u8 *VAR_4,
       const u8 *VAR_5,
       enum wcn36xx_hal_link_state VAR_6)
{
 struct wcn36xx_hal_set_link_state_req_msg VAR_7;
 int VAR_8;

 FUNC_3(&VAR_3->hal_mutex);
 FUNC_0(VAR_7, VAR_2);

 FUNC_2(&VAR_7.bssid, VAR_4, VAR_0);
 FUNC_2(&VAR_7.self_mac_addr, VAR_5, VAR_0);
 VAR_7.state = VAR_6;

 FUNC_1(VAR_3->hal_buf, VAR_7);

 FUNC_5(VAR_1,
      "hal set link state bssid %pM self_mac_addr %pM state %d\n",
      VAR_7.bssid, VAR_7.self_mac_addr, VAR_7.state);

 VAR_8 = FUNC_8(VAR_3, VAR_7.header.len);
 if (VAR_8) {
  FUNC_6("Sending hal_set_link_st failed\n");
  goto out;
 }
 VAR_8 = FUNC_7(VAR_3->hal_buf, VAR_3->hal_rsp_len);
 if (VAR_8) {
  FUNC_6("hal_set_link_st response failed err=%d\n", VAR_8);
  goto out;
 }
out:
 FUNC_4(&VAR_3->hal_mutex);
 return VAR_8;
}
