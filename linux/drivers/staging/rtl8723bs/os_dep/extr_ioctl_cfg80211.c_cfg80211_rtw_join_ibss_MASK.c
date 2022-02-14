
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct security_priv {int ndisauthtype; int dot11AuthAlgrthm; void* dot118021XGrpPrivacy; void* dot11PrivacyAlgrthm; int ndisencryptstatus; } ;
struct net_device {int dummy; } ;
struct ndis_802_11_ssid {int Ssid; int SsidLength; } ;
struct mlme_priv {int dummy; } ;
struct cfg80211_ibss_params {int ssid_len; scalar_t__ ssid; } ;
struct adapter {struct mlme_priv mlmepriv; struct security_priv securitypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct ndis_802_11_ssid*,int ,int) ;
 int FUNC_3 (struct security_priv*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,struct ndis_802_11_ssid*) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_11, struct net_device *VAR_12,
      struct cfg80211_ibss_params *VAR_13)
{
 struct adapter *VAR_14 = (struct adapter *)FUNC_4(VAR_12);
 struct ndis_802_11_ssid VAR_15;
 struct security_priv *VAR_16 = &VAR_14->securitypriv;
 struct mlme_priv *VAR_17 = &VAR_14->mlmepriv;
 int VAR_18 = 0;

 if (VAR_8 == FUNC_5(VAR_14)) {
  VAR_18 = -VAR_2;
  goto exit;
 }

 if (FUNC_0(VAR_17, VAR_7)) {
  VAR_18 = -VAR_2;
  goto exit;
 }

 if (!VAR_13->ssid || !VAR_13->ssid_len)
 {
  VAR_18 = -VAR_1;
  goto exit;
 }

 if (VAR_13->ssid_len > VAR_3) {

  VAR_18 = -VAR_0;
  goto exit;
 }

 FUNC_2(&VAR_15, 0, sizeof(struct ndis_802_11_ssid));
 VAR_15.SsidLength = VAR_13->ssid_len;
 FUNC_1(VAR_15.Ssid, (u8 *)VAR_13->ssid, VAR_13->ssid_len);



 VAR_16->ndisencryptstatus = VAR_6;
 VAR_16->dot11PrivacyAlgrthm = VAR_9;
 VAR_16->dot118021XGrpPrivacy = VAR_9;
 VAR_16->dot11AuthAlgrthm = VAR_10;
 VAR_16->ndisauthtype = VAR_5;

 VAR_18 = FUNC_3(VAR_16, VAR_4);
 FUNC_6(VAR_14, VAR_16->ndisauthtype);

 if (FUNC_7(VAR_14, &VAR_15) == 0)
 {
  VAR_18 = -1;
  goto exit;
 }

exit:
 return VAR_18;
}
