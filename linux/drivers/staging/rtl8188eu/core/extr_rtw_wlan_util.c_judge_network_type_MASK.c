
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_info {scalar_t__ HT_enable; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;

u8 FUNC_2(struct adapter *VAR_4, unsigned char *VAR_5, int VAR_6)
{
 u8 VAR_7 = 0;
 struct mlme_ext_priv *VAR_8 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_9 = &VAR_8->mlmext_info;

 if (VAR_9->HT_enable)
  VAR_7 = VAR_3;

 if (FUNC_1(VAR_5, VAR_6))
  VAR_7 |= VAR_0;
 else if (FUNC_0(VAR_5, VAR_6))
  VAR_7 |= VAR_1;
 else
  VAR_7 |= VAR_2;

 return VAR_7;
}
