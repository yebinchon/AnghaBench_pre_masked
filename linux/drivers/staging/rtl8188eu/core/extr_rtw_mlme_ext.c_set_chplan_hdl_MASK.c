
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_priv {int channel_list; int max_chan_nums; int channel_set; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct SetChannelPlan_param {int channel_plan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int FUNC_1 (struct adapter*,int ,int ) ;

u8 FUNC_2(struct adapter *VAR_2, unsigned char *VAR_3)
{
 struct SetChannelPlan_param *VAR_4;
 struct mlme_ext_priv *VAR_5 = &VAR_2->mlmeextpriv;

 if (!VAR_3)
  return VAR_0;

 VAR_4 = (struct SetChannelPlan_param *)VAR_3;

 VAR_5->max_chan_nums = FUNC_1(VAR_2, VAR_4->channel_plan, VAR_5->channel_set);
 FUNC_0(VAR_2, VAR_5->channel_set, VAR_5->max_chan_nums, &VAR_5->channel_list);

 return VAR_1;
}
