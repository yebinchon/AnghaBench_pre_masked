
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct ndis_802_11_var_ie {int data; } ;
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {scalar_t__ SupportedRates; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int ,unsigned int*,int ) ;

int FUNC_2(struct adapter *VAR_5, u8 *VAR_6, uint VAR_7, int VAR_8)
{
 unsigned int VAR_9;
 struct ndis_802_11_var_ie *VAR_10;
 int VAR_11 = 0;
 struct mlme_ext_priv *VAR_12 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_13 = &VAR_12->mlmext_info;

 VAR_10 = (struct ndis_802_11_var_ie *)FUNC_1(VAR_6, VAR_4, &VAR_9, VAR_7);
 if (!VAR_10)
  return VAR_2;
 if (VAR_9 > VAR_0)
  return VAR_2;

 FUNC_0(VAR_13->FW_sta_info[VAR_8].SupportedRates, VAR_10->data, VAR_9);
 VAR_11 = VAR_9;

 VAR_10 = (struct ndis_802_11_var_ie *)FUNC_1(VAR_6, VAR_1, &VAR_9, VAR_7);
 if (VAR_10) {
  if (VAR_11 + VAR_9 > VAR_0)
   return VAR_2;
  FUNC_0((VAR_13->FW_sta_info[VAR_8].SupportedRates + VAR_11), VAR_10->data, VAR_9);
 }

 return VAR_3;
}
