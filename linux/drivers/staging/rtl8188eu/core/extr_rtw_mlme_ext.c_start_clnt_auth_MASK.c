
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MacAddress; } ;
struct mlme_ext_info {int auth_seq; TYPE_1__ network; scalar_t__ link_count; scalar_t__ reassoc_count; scalar_t__ reauth_count; int state; } ;
struct mlme_ext_priv {scalar_t__ retry; int link_timer; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,int *,int ) ;
 int FUNC_3 (struct adapter*,int ,int ) ;
 int FUNC_4 (struct mlme_ext_priv*,int ) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_5)
{
 struct mlme_ext_priv *VAR_6 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_7 = &VAR_6->mlmext_info;

 FUNC_1(&VAR_6->link_timer);

 VAR_7->state &= (~VAR_1);
 VAR_7->state |= VAR_2;

 VAR_7->auth_seq = 1;
 VAR_7->reauth_count = 0;
 VAR_7->reassoc_count = 0;
 VAR_7->link_count = 0;
 VAR_6->retry = 0;






 FUNC_3(VAR_5, (&VAR_7->network)->MacAddress, VAR_3);

 FUNC_0(VAR_4, "start auth\n");
 FUNC_2(VAR_5, ((void*)0), 0);

 FUNC_4(VAR_6, VAR_0);
}
