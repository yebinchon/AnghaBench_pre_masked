
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulatory_request {int initiator; } ;
struct mlme_ext_priv {int channel_list; int max_chan_nums; int channel_set; } ;
struct adapter {TYPE_1__* rtw_wdev; struct mlme_ext_priv mlmeextpriv; } ;
struct SetChannelPlan_param {int channel_plan; } ;
struct TYPE_2__ {scalar_t__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (scalar_t__,struct regulatory_request*) ;

u8 FUNC_3(struct adapter *VAR_3, unsigned char *VAR_4)
{
 struct SetChannelPlan_param *VAR_5;
 struct mlme_ext_priv *VAR_6 = &VAR_3->mlmeextpriv;

 if (!VAR_4)
  return VAR_0;

 VAR_5 = (struct SetChannelPlan_param *)VAR_4;

 VAR_6->max_chan_nums = FUNC_1(VAR_3, VAR_5->channel_plan, VAR_6->channel_set);
 FUNC_0(VAR_3, VAR_6->channel_set, VAR_6->max_chan_nums, &VAR_6->channel_list);

 if ((VAR_3->rtw_wdev != ((void*)0)) && (VAR_3->rtw_wdev->wiphy)) {
  struct regulatory_request VAR_7;
  VAR_7.initiator = VAR_2;
  FUNC_2(VAR_3->rtw_wdev->wiphy, &VAR_7);
 }

 return VAR_1;
}
