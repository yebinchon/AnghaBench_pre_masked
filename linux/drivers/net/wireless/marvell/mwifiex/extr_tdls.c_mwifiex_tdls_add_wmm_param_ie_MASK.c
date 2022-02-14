
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct ieee80211_wmm_param_ie {int len; int* oui; int oui_type; int oui_subtype; int version; int * ac; scalar_t__ qos_info; int element_id; } ;
typedef int ac_vo ;
typedef int ac_vi ;
typedef int ac_bk ;
typedef int ac_be ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 struct ieee80211_wmm_param_ie* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_2(struct mwifiex_private *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_wmm_param_ie *VAR_3;
 u8 VAR_4[] = {0x42, 0x43, 0x5e, 0x00};
 u8 VAR_5[] = {0x62, 0x32, 0x2f, 0x00};
 u8 VAR_6[] = {0x03, 0xa4, 0x00, 0x00};
 u8 VAR_7[] = {0x27, 0xa4, 0x00, 0x00};

 VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3));

 VAR_3->element_id = VAR_0;
 VAR_3->len = sizeof(*VAR_3) - 2;
 VAR_3->oui[0] = 0x00;
 VAR_3->oui[1] = 0x50;
 VAR_3->oui[2] = 0xf2;
 VAR_3->oui_type = 2;
 VAR_3->oui_subtype = 1;
 VAR_3->version = 1;
 VAR_3->qos_info = 0;


 FUNC_0(&VAR_3->ac[0], VAR_6, sizeof(VAR_6));
 FUNC_0(&VAR_3->ac[1], VAR_7, sizeof(VAR_7));
 FUNC_0(&VAR_3->ac[2], VAR_4, sizeof(VAR_4));
 FUNC_0(&VAR_3->ac[3], VAR_5, sizeof(VAR_5));
}
