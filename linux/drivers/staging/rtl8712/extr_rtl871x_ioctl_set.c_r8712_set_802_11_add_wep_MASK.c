
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct security_priv {size_t PrivacyKeyIndex; int * DefKeylen; TYPE_1__* DefKey; int PrivacyAlgrthm; } ;
struct _adapter {struct security_priv securitypriv; } ;
struct NDIS_802_11_WEP {int KeyIndex; int KeyLength; int KeyMaterial; } ;
typedef size_t sint ;
struct TYPE_2__ {int skey; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct _adapter*,struct security_priv*,size_t) ;

int FUNC_2(struct _adapter *VAR_5,
        struct NDIS_802_11_WEP *VAR_6)
{
 sint VAR_7;
 struct security_priv *VAR_8 = &VAR_5->securitypriv;

 VAR_7 = VAR_6->KeyIndex & 0x3fffffff;
 if (VAR_7 >= VAR_1)
  return -VAR_0;
 switch (VAR_6->KeyLength) {
 case 5:
  VAR_8->PrivacyAlgrthm = VAR_4;
  break;
 case 13:
  VAR_8->PrivacyAlgrthm = VAR_3;
  break;
 default:
  VAR_8->PrivacyAlgrthm = VAR_2;
  break;
 }
 FUNC_0(VAR_8->DefKey[VAR_7].skey, &VAR_6->KeyMaterial,
  VAR_6->KeyLength);
 VAR_8->DefKeylen[VAR_7] = VAR_6->KeyLength;
 VAR_8->PrivacyKeyIndex = VAR_7;
 return FUNC_1(VAR_5, VAR_8, VAR_7);
}
