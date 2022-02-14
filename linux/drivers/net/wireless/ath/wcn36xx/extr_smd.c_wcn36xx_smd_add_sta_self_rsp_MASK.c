
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int self_dpu_desc_index; int self_sta_index; } ;
struct wcn36xx_hal_add_sta_self_rsp_msg {scalar_t__ status; int dpu_index; int self_sta_index; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 struct wcn36xx_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wcn36xx *VAR_3,
     struct ieee80211_vif *VAR_4,
     void *VAR_5,
     size_t VAR_6)
{
 struct wcn36xx_hal_add_sta_self_rsp_msg *VAR_7;
 struct wcn36xx_vif *VAR_8 = FUNC_1(VAR_4);

 if (VAR_6 < sizeof(*VAR_7))
  return -VAR_0;

 VAR_7 = (struct wcn36xx_hal_add_sta_self_rsp_msg *)VAR_5;

 if (VAR_7->status != VAR_2) {
  FUNC_2("hal add sta self failure: %d\n",
        VAR_7->status);
  return VAR_7->status;
 }

 FUNC_0(VAR_1,
      "hal add sta self status %d self_sta_index %d dpu_index %d\n",
      VAR_7->status, VAR_7->self_sta_index, VAR_7->dpu_index);

 VAR_8->self_sta_index = VAR_7->self_sta_index;
 VAR_8->self_dpu_desc_index = VAR_7->dpu_index;

 return 0;
}
