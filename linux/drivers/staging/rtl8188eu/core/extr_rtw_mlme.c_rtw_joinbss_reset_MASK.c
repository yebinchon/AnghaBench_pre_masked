
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ht_priv {int ampdu_enable; scalar_t__ ht_option; } ;
struct mlme_priv {scalar_t__ num_sta_no_ht; scalar_t__ num_FortyMHzIntolerant; struct ht_priv htpriv; } ;
struct TYPE_2__ {int wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int*) ;

void FUNC_1(struct adapter *VAR_1)
{
 u8 VAR_2;
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;
 struct ht_priv *VAR_4 = &VAR_3->htpriv;


 VAR_3->num_FortyMHzIntolerant = 0;

 VAR_3->num_sta_no_ht = 0;

 VAR_4->ampdu_enable = 0;



 if (VAR_4->ht_option) {
  if (VAR_1->registrypriv.wifi_spec == 1)
   VAR_2 = 1;
  else
   VAR_2 = 0;
  FUNC_0(VAR_1, VAR_0, (u8 *)(&VAR_2));
 } else {
  VAR_2 = 1;
  FUNC_0(VAR_1, VAR_0, (u8 *)(&VAR_2));
 }
}
