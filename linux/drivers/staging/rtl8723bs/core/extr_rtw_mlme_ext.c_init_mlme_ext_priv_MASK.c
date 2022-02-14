
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct registry_priv {int accept_addba_req; } ;
struct mlme_priv {int ChannelPlan; } ;
struct mlme_ext_info {int accept_addba_req; } ;
struct mlme_ext_priv {int mlmeext_init; int active_keep_alive_check; int fixed_chan; int chan_scan_time; scalar_t__ last_scan_time; int channel_list; int max_chan_nums; int channel_set; struct adapter* padapter; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;

void FUNC_5(struct adapter *VAR_1)
{
 struct registry_priv *VAR_2 = &VAR_1->registrypriv;
 struct mlme_ext_priv *VAR_3 = &VAR_1->mlmeextpriv;
 struct mlme_priv *VAR_4 = &VAR_1->mlmepriv;
 struct mlme_ext_info *VAR_5 = &VAR_3->mlmext_info;

 VAR_3->padapter = VAR_1;



 FUNC_3(VAR_1);
 VAR_5->accept_addba_req = VAR_2->accept_addba_req;

 FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 VAR_3->max_chan_nums = FUNC_1(VAR_1, VAR_4->ChannelPlan, VAR_3->channel_set);
 FUNC_0(VAR_1, VAR_3->channel_set, VAR_3->max_chan_nums, &VAR_3->channel_list);
 VAR_3->last_scan_time = 0;
 VAR_3->chan_scan_time = VAR_0;
 VAR_3->mlmeext_init = 1;
 VAR_3->active_keep_alive_check = 1;




}
