
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct security_priv {int ndisauthtype; int AuthAlgrthm; } ;
struct _adapter {struct security_priv securitypriv; } ;
typedef enum NDIS_802_11_AUTHENTICATION_MODE { ____Placeholder_NDIS_802_11_AUTHENTICATION_MODE } NDIS_802_11_AUTHENTICATION_MODE ;


 scalar_t__ FUNC_0 (struct _adapter*,struct security_priv*) ;

u8 FUNC_1(struct _adapter *VAR_0,
    enum NDIS_802_11_AUTHENTICATION_MODE VAR_1)
{
 struct security_priv *VAR_2 = &VAR_0->securitypriv;
 u8 VAR_3;

 VAR_2->ndisauthtype = VAR_1;
 if (VAR_2->ndisauthtype > 3)
  VAR_2->AuthAlgrthm = 2;
 if (FUNC_0(VAR_0, VAR_2))
  VAR_3 = 0;
 else
  VAR_3 = 1;
 return VAR_3;
}
