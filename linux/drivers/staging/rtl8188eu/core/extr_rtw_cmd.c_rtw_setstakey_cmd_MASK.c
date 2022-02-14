
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sta_info {int dot118021x_UncstKey; int hwaddr; } ;
struct set_stakey_rsp {int rspsz; unsigned char algorithm; int key; int addr; scalar_t__* rsp; } ;
struct set_stakey_parm {int rspsz; unsigned char algorithm; int key; int addr; scalar_t__* rsp; } ;
struct security_priv {size_t dot118021XGrpKeyid; int busetkipkey; TYPE_1__* dot118021XGrpKey; scalar_t__ dot11PrivacyAlgrthm; } ;
struct mlme_priv {int dummy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int rspsz; unsigned char algorithm; int key; int addr; scalar_t__* rsp; } ;
struct adapter {struct security_priv securitypriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;
struct TYPE_2__ {int skey; } ;


 int FUNC_0 (struct security_priv*,struct sta_info*,unsigned char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct set_stakey_rsp*,struct set_stakey_rsp*,int ) ;
 int FUNC_4 (struct set_stakey_rsp*) ;
 struct set_stakey_rsp* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (struct cmd_priv*,struct set_stakey_rsp*) ;

u8 FUNC_8(struct adapter *VAR_4, u8 *VAR_5, u8 VAR_6)
{
 struct cmd_obj *VAR_7;
 struct set_stakey_parm *VAR_8;
 struct cmd_priv *VAR_9 = &VAR_4->cmdpriv;
 struct set_stakey_rsp *VAR_10 = ((void*)0);

 struct mlme_priv *VAR_11 = &VAR_4->mlmepriv;
 struct security_priv *VAR_12 = &VAR_4->securitypriv;
 struct sta_info *VAR_13 = (struct sta_info *)VAR_5;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0);
 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_0);

 if (!VAR_7 || !VAR_8 || !VAR_10) {
  FUNC_4(VAR_7);
  FUNC_4(VAR_8);
  FUNC_4(VAR_10);
  return VAR_2;
 }

 FUNC_3(VAR_7, VAR_8, VAR_3);
 VAR_7->rsp = (u8 *)VAR_10;
 VAR_7->rspsz = sizeof(struct set_stakey_rsp);

 FUNC_2(VAR_8->addr, VAR_13->hwaddr);

 if (FUNC_1(VAR_11, VAR_1))
  VAR_8->algorithm = (unsigned char)VAR_12->dot11PrivacyAlgrthm;
 else
  FUNC_0(VAR_12, VAR_13, VAR_8->algorithm, 0);

 if (VAR_6)
  FUNC_6(&VAR_8->key, &VAR_13->dot118021x_UncstKey, 16);
 else
  FUNC_6(&VAR_8->key, &VAR_12->dot118021XGrpKey[VAR_12->dot118021XGrpKeyid].skey, 16);


 VAR_4->securitypriv.busetkipkey = 1;

 return FUNC_7(VAR_9, VAR_7);
}
