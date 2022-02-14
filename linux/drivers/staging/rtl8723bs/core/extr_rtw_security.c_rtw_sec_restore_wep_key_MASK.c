
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_priv {scalar_t__ dot11PrivacyAlgrthm; int key_mask; int dot11PrivacyKeyIndex; } ;
struct adapter {struct security_priv securitypriv; } ;
typedef int sint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct adapter*,struct security_priv*,int,int,int) ;

void FUNC_2(struct adapter *VAR_2)
{
 struct security_priv *VAR_3 = &(VAR_2->securitypriv);
 sint VAR_4;

 if ((VAR_1 == VAR_3->dot11PrivacyAlgrthm) || (VAR_0 == VAR_3->dot11PrivacyAlgrthm)) {
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   if (VAR_3->key_mask & FUNC_0(VAR_4)) {
    if (VAR_4 == VAR_3->dot11PrivacyKeyIndex)
     FUNC_1(VAR_2, VAR_3, VAR_4, 1, 0);
    else
     FUNC_1(VAR_2, VAR_3, VAR_4, 0, 0);
   }
  }
 }
}
