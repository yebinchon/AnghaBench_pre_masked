
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {char* alpha2; int initiator; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int drvr; } ;
struct brcmf_fil_country_le {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef char s32 ;
typedef int ccreq ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (int ,char*,int ,char,char) ;
 char FUNC_2 (struct brcmf_if*,char*,struct brcmf_fil_country_le*,int) ;
 char FUNC_3 (struct brcmf_if*,char*,struct brcmf_fil_country_le*,int) ;
 struct brcmf_if* FUNC_4 (struct brcmf_pub*,int ) ;
 int FUNC_5 (struct brcmf_cfg80211_info*) ;
 char FUNC_6 (int ,char*,struct brcmf_fil_country_le*) ;
 struct brcmf_cfg80211_info* FUNC_7 (struct wiphy*) ;

__attribute__((used)) static void FUNC_8(struct wiphy *VAR_1,
     struct regulatory_request *VAR_2)
{
 struct brcmf_cfg80211_info *VAR_3 = FUNC_7(VAR_1);
 struct brcmf_if *VAR_4 = FUNC_4(VAR_3->pub, 0);
 struct brcmf_pub *VAR_5 = VAR_3->pub;
 struct brcmf_fil_country_le VAR_6;
 s32 VAR_7;
 int VAR_8;


 if (VAR_2->alpha2[0] == '0' && VAR_2->alpha2[1] == '0')
  return;


 for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
  if (VAR_2->alpha2[VAR_8] < 'A' || VAR_2->alpha2[VAR_8] > 'Z') {
   FUNC_0(VAR_5, "not an ISO3166 code (0x%02x 0x%02x)\n",
     VAR_2->alpha2[0], VAR_2->alpha2[1]);
   return;
  }

 FUNC_1(VAR_0, "Enter: initiator=%d, alpha=%c%c\n", VAR_2->initiator,
    VAR_2->alpha2[0], VAR_2->alpha2[1]);

 VAR_7 = FUNC_2(VAR_4, "country", &VAR_6, sizeof(VAR_6));
 if (VAR_7) {
  FUNC_0(VAR_5, "Country code iovar returned err = %d\n", VAR_7);
  return;
 }

 VAR_7 = FUNC_6(VAR_4->drvr, VAR_2->alpha2, &VAR_6);
 if (VAR_7)
  return;

 VAR_7 = FUNC_3(VAR_4, "country", &VAR_6, sizeof(VAR_6));
 if (VAR_7) {
  FUNC_0(VAR_5, "Firmware rejected country setting\n");
  return;
 }
 FUNC_5(VAR_3);
}
