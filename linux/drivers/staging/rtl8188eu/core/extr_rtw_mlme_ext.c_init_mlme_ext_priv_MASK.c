
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct registry_priv {int accept_addba_req; } ;
struct mlme_priv {int ChannelPlan; } ;
struct mlme_ext_info {int accept_addba_req; } ;
struct mlme_ext_priv {int mlmeext_init; int active_keep_alive_check; int chan_scan_time; int channel_list; int max_chan_nums; int channel_set; struct adapter* padapter; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;

int FUNC_5(struct adapter *VAR_2)
{
 struct registry_priv *VAR_3 = &VAR_2->registrypriv;
 struct mlme_ext_priv *VAR_4 = &VAR_2->mlmeextpriv;
 struct mlme_priv *VAR_5 = &VAR_2->mlmepriv;
 struct mlme_ext_info *VAR_6 = &VAR_4->mlmext_info;

 VAR_4->padapter = VAR_2;

 FUNC_3(VAR_2);
 VAR_6->accept_addba_req = VAR_3->accept_addba_req;

 FUNC_4(VAR_2);





 VAR_4->max_chan_nums = FUNC_1(VAR_2, VAR_5->ChannelPlan, VAR_4->channel_set);
 FUNC_0(VAR_2, VAR_4->channel_set, VAR_4->max_chan_nums, &VAR_4->channel_list);

 VAR_4->chan_scan_time = VAR_0;
 VAR_4->mlmeext_init = 1;

 VAR_4->active_keep_alive_check = 1;

 return VAR_1;
}
