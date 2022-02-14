
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
struct security_priv {scalar_t__ ndisauthtype; scalar_t__* wps_ie; int wps_ie_len; scalar_t__* supplicant_ie; } ;
struct mlme_priv {int assoc_bssid; } ;
struct adapter {struct security_priv securitypriv; struct mlme_priv mlmepriv; } ;
typedef scalar_t__ sint ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (struct adapter*,int,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct adapter*,scalar_t__,int*) ;

sint FUNC_6(struct adapter *VAR_9, u8 *VAR_10, u8 *VAR_11, uint VAR_12)
{
 u8 VAR_13 = 0x0;
 uint VAR_14;
 int VAR_15;

 struct mlme_priv *VAR_16 = &VAR_9->mlmepriv;
 struct security_priv *VAR_17 = &VAR_9->securitypriv;
 uint VAR_18 = VAR_17->ndisauthtype;

 FUNC_0(VAR_8, VAR_7,
   ("+rtw_restruct_sec_ie: ndisauthmode =%d\n", VAR_18));


 FUNC_3(VAR_11, VAR_10, 12);
 VAR_14 = 12;
 if ((VAR_18 == VAR_0) || (VAR_18 == VAR_3))
   VAR_13 = VAR_6;
 if ((VAR_18 == VAR_1) || (VAR_18 == VAR_2))
   VAR_13 = VAR_5;

 if (FUNC_2(VAR_16, VAR_4)) {
  FUNC_3(VAR_11+VAR_14, VAR_17->wps_ie, VAR_17->wps_ie_len);

  VAR_14 += VAR_17->wps_ie_len;
 } else if ((VAR_13 == VAR_6) || (VAR_13 == VAR_5)) {

  FUNC_3(&VAR_11[VAR_14], &VAR_17->supplicant_ie[0], VAR_17->supplicant_ie[1]+2);
  VAR_14 += VAR_17->supplicant_ie[1]+2;
  FUNC_5(VAR_9, VAR_13, VAR_17->supplicant_ie);
 }

 VAR_15 = FUNC_1(VAR_9, VAR_16->assoc_bssid);
 if (VAR_15 < 0) {
  return VAR_14;
 } else {
  if (VAR_13 == VAR_5)
   VAR_14 = FUNC_4(VAR_9, VAR_15, VAR_11, VAR_14);
 }
 return VAR_14;
}
