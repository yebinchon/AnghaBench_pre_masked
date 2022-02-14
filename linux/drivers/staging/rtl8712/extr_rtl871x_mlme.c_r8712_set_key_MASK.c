
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct setkey_parm {int algorithm; int grpkey; void** parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; int key; void* keyid; } ;
struct security_priv {int AuthAlgrthm; int * XGrpKey; TYPE_1__* DefKey; scalar_t__ PrivacyAlgrthm; scalar_t__ XGrpPrivacy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int algorithm; int grpkey; void** parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; int key; void* keyid; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;
typedef size_t sint ;
struct TYPE_2__ {int * skey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

 int VAR_3 ;



 int FUNC_1 (struct setkey_parm*) ;
 struct setkey_parm* FUNC_2 (int,int ) ;
 struct setkey_parm* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,void*) ;
 int FUNC_5 (struct cmd_priv*,struct setkey_parm*) ;

int FUNC_6(struct _adapter *VAR_4,
    struct security_priv *VAR_5,
    sint VAR_6)
{
 struct cmd_priv *VAR_7 = &VAR_4->cmdpriv;
 struct cmd_obj *VAR_8;
 struct setkey_parm *VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto err_free_cmd;
 }
 if (VAR_5->AuthAlgrthm == 2) {
  VAR_9->algorithm =
    (u8)VAR_5->XGrpPrivacy;
 } else {
  VAR_9->algorithm =
    (u8)VAR_5->PrivacyAlgrthm;
 }
 VAR_9->keyid = (u8)VAR_6;

 switch (VAR_9->algorithm) {
 case 128:
  VAR_10 = 5;
  FUNC_4(VAR_9->key,
   VAR_5->DefKey[VAR_6].skey, VAR_10);
  break;
 case 129:
  VAR_10 = 13;
  FUNC_4(VAR_9->key,
   VAR_5->DefKey[VAR_6].skey, VAR_10);
  break;
 case 130:
  if (VAR_6 < 1 || VAR_6 > 2) {
   VAR_11 = -VAR_0;
   goto err_free_parm;
  }
  VAR_10 = 16;
  FUNC_4(VAR_9->key,
   &VAR_5->XGrpKey[VAR_6 - 1], VAR_10);
  VAR_9->grpkey = 1;
  break;
 case 131:
  if (VAR_6 < 1 || VAR_6 > 2) {
   VAR_11 = -VAR_0;
   goto err_free_parm;
  }
  VAR_10 = 16;
  FUNC_4(VAR_9->key,
   &VAR_5->XGrpKey[VAR_6 - 1], VAR_10);
  VAR_9->grpkey = 1;
  break;
 default:
  VAR_11 = -VAR_0;
  goto err_free_parm;
 }
 VAR_8->cmdcode = VAR_3;
 VAR_8->parmbuf = (u8 *)VAR_9;
 VAR_8->cmdsz = (sizeof(struct setkey_parm));
 VAR_8->rsp = ((void*)0);
 VAR_8->rspsz = 0;
 FUNC_0(&VAR_8->list);
 FUNC_5(VAR_7, VAR_8);
 return 0;

err_free_parm:
 FUNC_1(VAR_9);
err_free_cmd:
 FUNC_1(VAR_8);
 return VAR_11;
}
