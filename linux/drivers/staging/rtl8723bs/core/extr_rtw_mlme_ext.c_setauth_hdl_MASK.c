
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct setauth_parm {int mode; } ;
struct mlme_ext_info {int auth_algo; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;

u8 FUNC_0(struct adapter *VAR_1, unsigned char *VAR_2)
{
 struct setauth_parm *VAR_3 = (struct setauth_parm *)VAR_2;
 struct mlme_ext_priv *VAR_4 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &(VAR_4->mlmext_info);

 if (VAR_3->mode < 4)
  VAR_5->auth_algo = VAR_3->mode;

 return VAR_0;
}
