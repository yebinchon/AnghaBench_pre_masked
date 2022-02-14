
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct adapter *VAR_3)
{
 struct mlme_ext_priv *VAR_4 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &VAR_4->mlmext_info;

 if ((VAR_5->state & VAR_1) &&
     (VAR_5->state & 0x03) == VAR_0)
  return 1;
 else
  return VAR_2;
}
