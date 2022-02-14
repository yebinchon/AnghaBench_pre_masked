
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_add_sta_self_req {TYPE_1__ header; int status; int self_addr; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx_hal_add_sta_self_req,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_add_sta_self_req) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct wcn36xx*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_8 (struct wcn36xx*,int ) ;

int FUNC_9(struct wcn36xx *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct wcn36xx_hal_add_sta_self_req VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3->hal_mutex);
 FUNC_0(VAR_5, VAR_2);

 FUNC_2(&VAR_5.self_addr, VAR_4->addr, VAR_0);

 FUNC_1(VAR_3->hal_buf, VAR_5);

 FUNC_5(VAR_1,
      "hal add sta self self_addr %pM status %d\n",
      VAR_5.self_addr, VAR_5.status);

 VAR_6 = FUNC_8(VAR_3, VAR_5.header.len);
 if (VAR_6) {
  FUNC_6("Sending hal_add_sta_self failed\n");
  goto out;
 }
 VAR_6 = FUNC_7(VAR_3,
        VAR_4,
        VAR_3->hal_buf,
        VAR_3->hal_rsp_len);
 if (VAR_6) {
  FUNC_6("hal_add_sta_self response failed err=%d\n", VAR_6);
  goto out;
 }
out:
 FUNC_4(&VAR_3->hal_mutex);
 return VAR_6;
}
