
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_info {int auth_seq; scalar_t__ link_count; scalar_t__ reassoc_count; scalar_t__ reauth_count; int state; } ;
struct mlme_ext_priv {scalar_t__ retry; int link_timer; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,int *,int ) ;
 int FUNC_3 (struct mlme_ext_priv*,int ) ;

void FUNC_4(struct adapter *VAR_4)
{
 struct mlme_ext_priv *VAR_5 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &(VAR_5->mlmext_info);

 FUNC_1(&VAR_5->link_timer);

 VAR_6->state &= (~VAR_1);
 VAR_6->state |= VAR_2;

 VAR_6->auth_seq = 1;
 VAR_6->reauth_count = 0;
 VAR_6->reassoc_count = 0;
 VAR_6->link_count = 0;
 VAR_5->retry = 0;


 FUNC_0(VAR_3, "start auth\n");
 FUNC_2(VAR_4, ((void*)0), 0);

 FUNC_3(VAR_5, VAR_0);

}
