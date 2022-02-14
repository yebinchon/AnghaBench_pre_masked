
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlme_ext_info {int aid; int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr {int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_2, u8 *VAR_3, u32 *VAR_4)
{
 struct ieee80211_hdr *VAR_5;
 __le16 *VAR_6;
 struct mlme_ext_priv *VAR_7 = &(VAR_2->mlmeextpriv);
 struct mlme_ext_info *VAR_8 = &(VAR_7->mlmext_info);



 VAR_5 = (struct ieee80211_hdr *)VAR_3;


 VAR_6 = &(VAR_5->frame_control);
 *(VAR_6) = 0;
 FUNC_2(VAR_6);
 FUNC_1(VAR_3, VAR_1);


 FUNC_0(VAR_3, (VAR_8->aid | 0xc000));


 FUNC_4(VAR_5->addr1, FUNC_3(&(VAR_8->network)), VAR_0);


 FUNC_4(VAR_5->addr2, FUNC_5(&(VAR_2->eeprompriv)), VAR_0);

 *VAR_4 = 16;
}
