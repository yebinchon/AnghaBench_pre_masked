
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sta_info {int x_UncstKey; int hwaddr; } ;
struct set_stakey_rsp {int dummy; } ;
struct set_stakey_parm {int rspsz; unsigned char algorithm; int key; int addr; scalar_t__* rsp; } ;
struct security_priv {int XGrpKeyid; TYPE_1__* XGrpKey; scalar_t__ PrivacyAlgrthm; } ;
struct mlme_priv {int dummy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int rspsz; unsigned char algorithm; int key; int addr; scalar_t__* rsp; } ;
struct _adapter {struct security_priv securitypriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;
struct TYPE_2__ {int skey; } ;


 int FUNC_0 (struct security_priv*,struct sta_info*,unsigned char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct set_stakey_parm*,struct set_stakey_parm*,int ) ;
 int FUNC_4 (struct set_stakey_parm*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct cmd_priv*,struct set_stakey_parm*) ;

void FUNC_8(struct _adapter *VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct cmd_obj *VAR_6;
 struct set_stakey_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_3->cmdpriv;
 struct set_stakey_rsp *VAR_9 = ((void*)0);
 struct mlme_priv *VAR_10 = &VAR_3->mlmepriv;
 struct security_priv *VAR_11 = &VAR_3->securitypriv;
 struct sta_info *VAR_12 = (struct sta_info *)VAR_4;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;
 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_4(VAR_6);
  return;
 }
 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
 if (!VAR_9) {
  FUNC_4(VAR_6);
  FUNC_4(VAR_7);
  return;
 }
 FUNC_3(VAR_6, VAR_7, VAR_2);
 VAR_6->rsp = (u8 *) VAR_9;
 VAR_6->rspsz = sizeof(struct set_stakey_rsp);
 FUNC_2(VAR_7->addr, VAR_12->hwaddr);
 if (FUNC_1(VAR_10, VAR_1))
  VAR_7->algorithm = (unsigned char)
         VAR_11->PrivacyAlgrthm;
 else
  FUNC_0(VAR_11, VAR_12,
          VAR_7->algorithm, 0);
 if (VAR_5)
  FUNC_6(&VAR_7->key, &VAR_12->x_UncstKey, 16);
 else
  FUNC_6(&VAR_7->key,
   &VAR_11->XGrpKey[
   VAR_11->XGrpKeyid - 1]. skey, 16);
 FUNC_7(VAR_8, VAR_6);
}
