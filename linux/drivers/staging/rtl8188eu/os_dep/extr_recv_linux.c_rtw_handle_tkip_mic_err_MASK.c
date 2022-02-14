
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
typedef int u32 ;
struct security_priv {scalar_t__ last_mic_err_time; int btkip_countermeasure; int btkip_countermeasure_time; } ;
struct mlme_priv {int * assoc_bssid; } ;
struct iw_michaelmicfailure {TYPE_2__ data; TYPE_1__ src_addr; int flags; } ;
struct adapter {int pnetdev; struct security_priv securitypriv; struct mlme_priv mlmepriv; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (union iwreq_data*,int,int) ;
 int FUNC_2 (int ,int ,union iwreq_data*,char*) ;

void FUNC_3(struct adapter *VAR_7, u8 VAR_8)
{
 union iwreq_data VAR_9;
 struct iw_michaelmicfailure VAR_10;
 struct mlme_priv *VAR_11 = &VAR_7->mlmepriv;
 struct security_priv *VAR_12 = &VAR_7->securitypriv;
 u32 VAR_13 = 0;

 if (VAR_12->last_mic_err_time == 0) {
  VAR_12->last_mic_err_time = VAR_6;
 } else {
  VAR_13 = VAR_6;

  if (VAR_13 - VAR_12->last_mic_err_time < 60 * VAR_2) {
   VAR_12->btkip_countermeasure = 1;
   VAR_12->last_mic_err_time = 0;
   VAR_12->btkip_countermeasure_time = VAR_13;
  } else {
   VAR_12->last_mic_err_time = VAR_6;
  }
 }

 FUNC_1(&VAR_10, 0x00, sizeof(VAR_10));
 if (VAR_8)
  VAR_10.flags |= VAR_4;
 else
  VAR_10.flags |= VAR_5;

 VAR_10.src_addr.sa_family = VAR_0;
 FUNC_0(VAR_10.src_addr.sa_data, &VAR_11->assoc_bssid[0], VAR_1);
 FUNC_1(&VAR_9, 0x00, sizeof(VAR_9));
 VAR_9.data.length = sizeof(VAR_10);
 FUNC_2(VAR_7->pnetdev, VAR_3,
       &VAR_9, (char *)&VAR_10);
}
