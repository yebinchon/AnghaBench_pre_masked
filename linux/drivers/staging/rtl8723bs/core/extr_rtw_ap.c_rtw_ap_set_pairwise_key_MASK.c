
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sta_info {int dot118021x_UncstKey; int * hwaddr; scalar_t__ dot118021XPrivacy; } ;
struct set_stakey_parm {int key; int addr; scalar_t__ algorithm; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmd_obj*,struct set_stakey_parm*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_4 (int) ;

u8 FUNC_5(struct adapter *VAR_4, struct sta_info *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct set_stakey_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_4->cmdpriv;
 u8 VAR_9 = VAR_2;

 VAR_6 = FUNC_4(sizeof(struct cmd_obj));
 if (VAR_6 == ((void*)0)) {
  VAR_9 = VAR_1;
  goto exit;
 }

 VAR_7 = FUNC_4(sizeof(struct set_stakey_parm));
 if (VAR_7 == ((void*)0)) {
  FUNC_1((u8 *)VAR_6);
  VAR_9 = VAR_1;
  goto exit;
 }

 FUNC_0(VAR_6, VAR_7, VAR_3);

 VAR_7->algorithm = (u8)VAR_5->dot118021XPrivacy;

 FUNC_2(VAR_7->addr, VAR_5->hwaddr, VAR_0);

 FUNC_2(VAR_7->key, &VAR_5->dot118021x_UncstKey, 16);

 VAR_9 = FUNC_3(VAR_8, VAR_6);

exit:

 return VAR_9;
}
