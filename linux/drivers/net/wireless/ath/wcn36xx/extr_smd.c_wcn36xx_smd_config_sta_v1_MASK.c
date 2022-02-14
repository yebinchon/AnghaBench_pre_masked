
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_config_sta_params_v1 {int aid; int mac; int type; int bssid; int bssid_index; int sta_index; int action; } ;
struct wcn36xx_hal_config_sta_req_msg_v1 {TYPE_1__ header; struct wcn36xx_hal_config_sta_params_v1 sta_params; } ;
struct wcn36xx_hal_config_sta_req_msg {int sta_params; } ;
struct wcn36xx {int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_config_sta_req_msg_v1,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_config_sta_req_msg_v1) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct wcn36xx*,int *,struct wcn36xx_hal_config_sta_params_v1*) ;
 int FUNC_4 (struct wcn36xx*,int ) ;

__attribute__((used)) static int FUNC_5(struct wcn36xx *VAR_2,
       const struct wcn36xx_hal_config_sta_req_msg *VAR_3)
{
 struct wcn36xx_hal_config_sta_req_msg_v1 VAR_4;
 struct wcn36xx_hal_config_sta_params_v1 *VAR_5 = &VAR_4.sta_params;

 FUNC_0(VAR_4, VAR_1);

 FUNC_3(VAR_2, &VAR_3->sta_params,
          &VAR_4.sta_params);

 FUNC_1(VAR_2->hal_buf, VAR_4);

 FUNC_2(VAR_0,
      "hal config sta v1 action %d sta_index %d bssid_index %d bssid %pM type %d mac %pM aid %d\n",
      VAR_5->action, VAR_5->sta_index, VAR_5->bssid_index,
      VAR_5->bssid, VAR_5->type, VAR_5->mac, VAR_5->aid);

 return FUNC_4(VAR_2, VAR_4.header.len);
}
