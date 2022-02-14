
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlme_ext_info {int HT_enable; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_3__ {int HT_caps_info; } ;
struct TYPE_4__ {TYPE_1__ HT_cap_element; } ;
struct HT_caps_element {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct adapter *VAR_3, struct HT_caps_element *VAR_4, u8 VAR_5)
{
 unsigned char VAR_6;
 struct mlme_ext_priv *VAR_7 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_8 = &(VAR_7->mlmext_info);

 if (!(VAR_8->HT_enable))
  return VAR_1;

 VAR_6 = (VAR_5 & VAR_0) ? 6 : 5;

 if (FUNC_0(VAR_4->u.HT_cap_element.HT_caps_info) & (0x1 << VAR_6))
  return VAR_2;
 else
  return VAR_1;
}
