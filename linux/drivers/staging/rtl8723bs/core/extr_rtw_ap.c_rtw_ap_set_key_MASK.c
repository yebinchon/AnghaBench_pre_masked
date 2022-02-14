
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct setkey_parm {int keyid; int algorithm; int set_tx; int * key; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int* parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; } ;
struct TYPE_2__ {int key_mask; } ;
struct adapter {TYPE_1__ securitypriv; struct cmd_priv cmdpriv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(
 struct adapter *VAR_3,
 u8 *VAR_4,
 u8 VAR_5,
 int VAR_6,
 u8 VAR_7
)
{
 u8 VAR_8;
 struct cmd_obj *VAR_9;
 struct setkey_parm *VAR_10;
 struct cmd_priv *VAR_11 = &(VAR_3->cmdpriv);
 int VAR_12 = VAR_1;



 VAR_9 = FUNC_6(sizeof(struct cmd_obj));
 if (VAR_9 == ((void*)0)) {
  VAR_12 = VAR_0;
  goto exit;
 }
 VAR_10 = FUNC_6(sizeof(struct setkey_parm));
 if (VAR_10 == ((void*)0)) {
  FUNC_3((unsigned char *)VAR_9);
  VAR_12 = VAR_0;
  goto exit;
 }

 VAR_10->keyid = (u8)VAR_6;
 if (FUNC_2(VAR_5))
  VAR_3->securitypriv.key_mask |= FUNC_0(VAR_10->keyid);

 VAR_10->algorithm = VAR_5;

 VAR_10->set_tx = VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_8 = 5;
  break;
 case 129:
  VAR_8 = 13;
  break;
 case 131:
 case 130:
 case 132:
 default:
  VAR_8 = 16;
 }

 FUNC_4(&(VAR_10->key[0]), VAR_4, VAR_8);

 VAR_9->cmdcode = VAR_2;
 VAR_9->parmbuf = (u8 *)VAR_10;
 VAR_9->cmdsz = (sizeof(struct setkey_parm));
 VAR_9->rsp = ((void*)0);
 VAR_9->rspsz = 0;

 FUNC_1(&VAR_9->list);

 VAR_12 = FUNC_5(VAR_11, VAR_9);

exit:

 return VAR_12;
}
