
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct security_priv {int ndisauthtype; int dot11AuthAlgrthm; } ;
struct adapter {struct security_priv securitypriv; } ;
typedef enum NDIS_802_11_AUTHENTICATION_MODE { ____Placeholder_NDIS_802_11_AUTHENTICATION_MODE } NDIS_802_11_AUTHENTICATION_MODE ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,struct security_priv*) ;

u8 FUNC_2(struct adapter *VAR_4, enum NDIS_802_11_AUTHENTICATION_MODE VAR_5)
{
 struct security_priv *VAR_6 = &VAR_4->securitypriv;
 int VAR_7;
 u8 VAR_8;

 FUNC_0(VAR_2, VAR_1, ("set_802_11_auth.mode(): mode =%x\n", VAR_5));

 VAR_6->ndisauthtype = VAR_5;

 FUNC_0(VAR_2, VAR_1, ("rtw_set_802_11_authentication_mode:psecuritypriv->ndisauthtype =%d", VAR_6->ndisauthtype));

 if (VAR_6->ndisauthtype > 3)
  VAR_6->dot11AuthAlgrthm = VAR_3;

 VAR_7 = FUNC_1(VAR_4, VAR_6);

 if (VAR_7 == VAR_0)
  VAR_8 = 1;
 else
  VAR_8 = 0;

 return VAR_8;
}
