
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct security_priv {int dot11PrivacyKeyIndex; TYPE_1__* dot11DefKey; int * dot11DefKeylen; int dot11PrivacyAlgrthm; } ;
struct ndis_802_11_wep {int KeyIndex; int KeyLength; int KeyMaterial; } ;
struct adapter {struct security_priv securitypriv; } ;
struct TYPE_2__ {int * skey; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct adapter*,struct security_priv*,int,int) ;

u8 FUNC_3(struct adapter *VAR_8, struct ndis_802_11_wep *VAR_9)
{
 int VAR_10, VAR_11;
 struct security_priv *VAR_12 = &VAR_8->securitypriv;
 u8 VAR_13 = VAR_2;

 VAR_10 = VAR_9->KeyIndex & 0x3fffffff;

 if (VAR_10 >= 4) {
  FUNC_0(VAR_7, VAR_5, ("MgntActrtw_set_802_11_add_wep:keyid>4 =>fail\n"));
  VAR_13 = 0;
  goto exit;
 }

 switch (VAR_9->KeyLength) {
 case 5:
  VAR_12->dot11PrivacyAlgrthm = VAR_4;
  FUNC_0(VAR_7, VAR_6, ("MgntActrtw_set_802_11_add_wep:wep->KeyLength = 5\n"));
  break;
 case 13:
  VAR_12->dot11PrivacyAlgrthm = VAR_3;
  FUNC_0(VAR_7, VAR_6, ("MgntActrtw_set_802_11_add_wep:wep->KeyLength = 13\n"));
  break;
 default:
  VAR_12->dot11PrivacyAlgrthm = VAR_1;
  FUNC_0(VAR_7, VAR_6, ("MgntActrtw_set_802_11_add_wep:wep->KeyLength!= 5 or 13\n"));
  break;
 }
 FUNC_0(VAR_7, VAR_6,
   ("rtw_set_802_11_add_wep:before memcpy, wep->KeyLength = 0x%x wep->KeyIndex = 0x%x  keyid =%x\n",
   VAR_9->KeyLength, VAR_9->KeyIndex, VAR_10));

 FUNC_1(&VAR_12->dot11DefKey[VAR_10].skey[0],
        &VAR_9->KeyMaterial, VAR_9->KeyLength);

 VAR_12->dot11DefKeylen[VAR_10] = VAR_9->KeyLength;

 VAR_12->dot11PrivacyKeyIndex = VAR_10;

 FUNC_0(VAR_7, VAR_6,
   ("rtw_set_802_11_add_wep:security key material : %x %x %x %x %x %x %x %x %x %x %x %x %x\n",
   VAR_12->dot11DefKey[VAR_10].skey[0],
   VAR_12->dot11DefKey[VAR_10].skey[1],
   VAR_12->dot11DefKey[VAR_10].skey[2],
   VAR_12->dot11DefKey[VAR_10].skey[3],
   VAR_12->dot11DefKey[VAR_10].skey[4],
   VAR_12->dot11DefKey[VAR_10].skey[5],
   VAR_12->dot11DefKey[VAR_10].skey[6],
   VAR_12->dot11DefKey[VAR_10].skey[7],
   VAR_12->dot11DefKey[VAR_10].skey[8],
   VAR_12->dot11DefKey[VAR_10].skey[9],
   VAR_12->dot11DefKey[VAR_10].skey[10],
   VAR_12->dot11DefKey[VAR_10].skey[11],
   VAR_12->dot11DefKey[VAR_10].skey[12]));

 VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_10, 1);

 if (VAR_11 == VAR_0)
  VAR_13 = 0;
exit:
 return VAR_13;
}
