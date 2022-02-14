
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmfmac_pd_cc_entry {char* iso3166; int cc; int rev; } ;
struct brcmfmac_pd_cc {int table_size; struct brcmfmac_pd_cc_entry* table; } ;
struct brcmf_pub {TYPE_1__* settings; } ;
struct brcmf_fil_country_le {char* country_abbrev; int ccode; int rev; } ;
typedef int s32 ;
struct TYPE_2__ {struct brcmfmac_pd_cc* country_codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct brcmf_fil_country_le*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct brcmf_pub *VAR_4, char VAR_5[2],
     struct brcmf_fil_country_le *VAR_6)
{
 struct brcmfmac_pd_cc *VAR_7;
 struct brcmfmac_pd_cc_entry *VAR_8;
 s32 VAR_9;
 int VAR_10;

 VAR_7 = VAR_4->settings->country_codes;
 if (!VAR_7) {
  FUNC_0(VAR_3, "No country codes configured for device\n");
  return -VAR_2;
 }

 if ((VAR_5[0] == VAR_6->country_abbrev[0]) &&
     (VAR_5[1] == VAR_6->country_abbrev[1])) {
  FUNC_0(VAR_3, "Country code already set\n");
  return -VAR_1;
 }

 VAR_9 = -1;
 for (VAR_10 = 0; VAR_10 < VAR_7->table_size; VAR_10++) {
  VAR_8 = &VAR_7->table[VAR_10];
  if ((VAR_8->iso3166[0] == '\0') && (VAR_9 == -1))
   VAR_9 = VAR_10;
  if ((VAR_8->iso3166[0] == VAR_5[0]) &&
      (VAR_8->iso3166[1] == VAR_5[1])) {
   VAR_9 = VAR_10;
   break;
  }
 }
 if (VAR_9 == -1) {
  FUNC_0(VAR_3, "No country code match found\n");
  return -VAR_2;
 }
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->rev = FUNC_1(VAR_7->table[VAR_9].rev);
 FUNC_2(VAR_6->ccode, VAR_7->table[VAR_9].cc,
        VAR_0);
 VAR_6->country_abbrev[0] = VAR_5[0];
 VAR_6->country_abbrev[1] = VAR_5[1];
 VAR_6->country_abbrev[2] = 0;

 return 0;
}
