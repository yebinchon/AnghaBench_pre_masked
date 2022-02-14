
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {int SupportedRates; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct adapter *VAR_3, u32 VAR_4)
{
 struct mlme_ext_priv *VAR_5 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &VAR_5->mlmext_info;

 if (VAR_5->cur_wireless_mode & VAR_0) {

  FUNC_0((VAR_6->FW_sta_info[VAR_4].SupportedRates), VAR_1, 4);
 } else {
  FUNC_0((VAR_6->FW_sta_info[VAR_4].SupportedRates), VAR_2, 3);
 }
}
