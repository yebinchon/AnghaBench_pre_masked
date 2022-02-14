
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct disconnect_parm {int deauth_timeout_ms; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct adapter*,int *) ;
 int FUNC_2 (struct cmd_obj*,struct disconnect_parm*,int ) ;
 int FUNC_3 (struct disconnect_parm*) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_5 (int) ;

u8 FUNC_6(struct adapter *VAR_6, u32 VAR_7, bool VAR_8)
{
 struct cmd_obj *VAR_9 = ((void*)0);
 struct disconnect_parm *VAR_10 = ((void*)0);
 struct cmd_priv *VAR_11 = &VAR_6->cmdpriv;
 u8 VAR_12 = VAR_3;

 FUNC_0(VAR_5, VAR_4, ("+rtw_disassoc_cmd\n"));


 VAR_10 = FUNC_5(sizeof(*VAR_10));
 if (VAR_10 == ((void*)0)) {
  VAR_12 = VAR_2;
  goto exit;
 }
 VAR_10->deauth_timeout_ms = VAR_7;

 if (VAR_8) {

  VAR_9 = FUNC_5(sizeof(*VAR_9));
  if (VAR_9 == ((void*)0)) {
   VAR_12 = VAR_2;
   FUNC_3(VAR_10);
   goto exit;
  }
  FUNC_2(VAR_9, VAR_10, VAR_1);
  VAR_12 = FUNC_4(VAR_11, VAR_9);
 } else {

  if (VAR_0 != FUNC_1(VAR_6, (u8 *)VAR_10))
   VAR_12 = VAR_2;
  FUNC_3(VAR_10);
 }

exit:
 return VAR_12;
}
