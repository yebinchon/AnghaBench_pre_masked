
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dot118021x_UncstKey; int * hwaddr; } ;
struct set_stakey_rsp {int dummy; } ;
struct set_stakey_parm {unsigned char algorithm; int* rsp; int rspsz; int key; int * addr; } ;
struct security_priv {size_t dot118021XGrpKeyid; int busetkipkey; TYPE_1__* dot118021XGrpKey; scalar_t__ dot11PrivacyAlgrthm; } ;
struct mlme_priv {int dummy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char algorithm; int* rsp; int rspsz; int key; int * addr; } ;
struct adapter {struct security_priv securitypriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;
struct TYPE_2__ {int skey; } ;


 int VAR_0 ;
 int FUNC_0 (struct security_priv*,struct sta_info*,unsigned char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct set_stakey_parm*,struct set_stakey_parm*,int ) ;
 int FUNC_3 (struct set_stakey_parm*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct cmd_priv*,struct set_stakey_parm*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct adapter*,int*) ;

u8 FUNC_8(struct adapter *VAR_5, struct sta_info *VAR_6, u8 VAR_7, bool VAR_8)
{
 struct cmd_obj *VAR_9;
 struct set_stakey_parm *VAR_10;
 struct cmd_priv *VAR_11 = &VAR_5->cmdpriv;
 struct set_stakey_rsp *VAR_12 = ((void*)0);

 struct mlme_priv *VAR_13 = &VAR_5->mlmepriv;
 struct security_priv *VAR_14 = &VAR_5->securitypriv;
 u8 VAR_15 = VAR_3;

 VAR_10 = FUNC_6(sizeof(struct set_stakey_parm));
 if (VAR_10 == ((void*)0)) {
  VAR_15 = VAR_2;
  goto exit;
 }

 FUNC_4(VAR_10->addr, VAR_6->hwaddr, VAR_0);

 if (FUNC_1(VAR_13, VAR_1)) {
  VAR_10->algorithm = (unsigned char) VAR_14->dot11PrivacyAlgrthm;
 } else {
  FUNC_0(VAR_14, VAR_6, VAR_10->algorithm, 0);
 }

 if (VAR_7 == 1) {
  FUNC_4(&VAR_10->key, &VAR_6->dot118021x_UncstKey, 16);
 } else {
  FUNC_4(&VAR_10->key, &VAR_14->dot118021XGrpKey[VAR_14->dot118021XGrpKeyid].skey, 16);
 }


 VAR_5->securitypriv.busetkipkey = 1;

 if (VAR_8) {
  VAR_9 = FUNC_6(sizeof(struct cmd_obj));
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_10);
   VAR_15 = VAR_2;
   goto exit;
  }

  VAR_12 = FUNC_6(sizeof(struct set_stakey_rsp));
  if (VAR_12 == ((void*)0)) {
   FUNC_3(VAR_9);
   FUNC_3(VAR_10);
   VAR_15 = VAR_2;
   goto exit;
  }

  FUNC_2(VAR_9, VAR_10, VAR_4);
  VAR_9->rsp = (u8 *) VAR_12;
  VAR_9->rspsz = sizeof(struct set_stakey_rsp);
  VAR_15 = FUNC_5(VAR_11, VAR_9);
 } else {
  FUNC_7(VAR_5, (u8 *)VAR_10);
  FUNC_3(VAR_10);
 }
exit:
 return VAR_15;
}
