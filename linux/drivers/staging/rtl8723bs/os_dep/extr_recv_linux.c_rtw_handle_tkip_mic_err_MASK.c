
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_2__ data; TYPE_1__ src_addr; int flags; } ;
typedef scalar_t__ u8 ;
struct security_priv {unsigned long last_mic_err_time; int btkip_countermeasure; unsigned long btkip_countermeasure_time; } ;
struct mlme_priv {int * assoc_bssid; } ;
struct iw_michaelmicfailure {TYPE_2__ data; TYPE_1__ src_addr; int flags; } ;
struct adapter {int pnetdev; struct security_priv securitypriv; struct mlme_priv mlmepriv; } ;
typedef int ev ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__*,int,int,int *,int ) ;
 void* VAR_8 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (union iwreq_data*,int,int) ;

void FUNC_3(struct adapter *VAR_9, u8 VAR_10)
{
 enum nl80211_key_type VAR_11 = 0;
 union iwreq_data VAR_12;
 struct iw_michaelmicfailure VAR_13;
 struct mlme_priv* VAR_14 = &VAR_9->mlmepriv;
 struct security_priv *VAR_15 = &VAR_9->securitypriv;
 unsigned long VAR_16 = 0;

 if (VAR_15->last_mic_err_time == 0) {
  VAR_15->last_mic_err_time = VAR_8;
 } else {
  VAR_16 = VAR_8;

  if (VAR_16 - VAR_15->last_mic_err_time < 60*VAR_3) {
   VAR_15->btkip_countermeasure = 1;
   VAR_15->last_mic_err_time = 0;
   VAR_15->btkip_countermeasure_time = VAR_16;
  } else {
   VAR_15->last_mic_err_time = VAR_8;
  }
 }

 if (VAR_10) {
  VAR_11 |= VAR_6;
 } else {
  VAR_11 |= VAR_7;
 }

 FUNC_0(VAR_9->pnetdev, (u8 *)&VAR_14->assoc_bssid[ 0 ], VAR_11, -1,
  ((void*)0), VAR_2);

 FUNC_2(&VAR_13, 0x00, sizeof(VAR_13));
 if (VAR_10) {
  VAR_13.flags |= VAR_4;
 } else {
  VAR_13.flags |= VAR_5;
 }

 VAR_13.src_addr.sa_family = VAR_0;
 FUNC_1(VAR_13.src_addr.sa_data, &VAR_14->assoc_bssid[ 0 ], VAR_1);

 FUNC_2(&VAR_12, 0x00, sizeof(VAR_12));
 VAR_12.data.length = sizeof(VAR_13);
}
