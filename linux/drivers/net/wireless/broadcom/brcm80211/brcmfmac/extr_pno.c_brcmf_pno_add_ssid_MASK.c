
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_ssid {int ssid_len; int ssid; } ;
struct brcmf_pub {int dummy; } ;
struct TYPE_2__ {int SSID; void* SSID_len; } ;
struct brcmf_pno_net_param_le {TYPE_1__ ssid; void* flags; void* infra; void* wsec; void* wpa_auth; void* auth; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int pfn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct brcmf_if*,char*,struct brcmf_pno_net_param_le*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct brcmf_if *VAR_4, struct cfg80211_ssid *VAR_5,
         bool VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_4->drvr;
 struct brcmf_pno_net_param_le VAR_8;
 int VAR_9;

 VAR_8.auth = FUNC_3(VAR_3);
 VAR_8.wpa_auth = FUNC_3(VAR_1);
 VAR_8.wsec = FUNC_3(0);
 VAR_8.infra = FUNC_3(1);
 VAR_8.flags = 0;
 if (VAR_6)
  VAR_8.flags = FUNC_3(1 << VAR_0);
 VAR_8.ssid.SSID_len = FUNC_3(VAR_5->ssid_len);
 FUNC_4(VAR_8.ssid.SSID, VAR_5->ssid, VAR_5->ssid_len);

 FUNC_1(VAR_2, "adding ssid=%.32s (active=%d)\n", VAR_5->ssid, VAR_6);
 VAR_9 = FUNC_2(VAR_4, "pfn_add", &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0)
  FUNC_0(VAR_7, "adding failed: err=%d\n", VAR_9);
 return VAR_9;
}
