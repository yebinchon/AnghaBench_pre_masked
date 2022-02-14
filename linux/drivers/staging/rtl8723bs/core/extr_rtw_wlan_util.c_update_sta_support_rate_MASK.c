
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct ndis_80211_var_ie {int data; } ;
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {scalar_t__ SupportedRates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int ,unsigned int*,int ) ;

int FUNC_2(struct adapter *VAR_4, u8 *VAR_5, uint VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 struct ndis_80211_var_ie *VAR_9;
 int VAR_10 = 0;
 struct mlme_ext_priv *VAR_11 = &(VAR_4->mlmeextpriv);
 struct mlme_ext_info *VAR_12 = &(VAR_11->mlmext_info);

 VAR_9 = (struct ndis_80211_var_ie *)FUNC_1(VAR_5, VAR_3, &VAR_8, VAR_6);
 if (!VAR_9)
  return VAR_1;

 FUNC_0(VAR_12->FW_sta_info[VAR_7].SupportedRates, VAR_9->data, VAR_8);
 VAR_10 = VAR_8;

 VAR_9 = (struct ndis_80211_var_ie *)FUNC_1(VAR_5, VAR_0, &VAR_8, VAR_6);
 if (VAR_9)
  FUNC_0((VAR_12->FW_sta_info[VAR_7].SupportedRates + VAR_10), VAR_9->data, VAR_8);

 return VAR_2;
}
