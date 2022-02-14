
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {int link_timer; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct mlme_ext_priv*,int ) ;

void FUNC_3(struct adapter *VAR_5)
{
 struct mlme_ext_priv *VAR_6 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_7 = &(VAR_6->mlmext_info);

 FUNC_0(&VAR_6->link_timer);

 VAR_7->state &= (~(VAR_2 | VAR_3));
 VAR_7->state |= (VAR_4 | VAR_1);

 FUNC_1(VAR_5);

 FUNC_2(VAR_6, VAR_0);
}
