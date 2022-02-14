
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disconnect_parm {int dummy; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmd_obj*,struct disconnect_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_4(struct _adapter *VAR_2)
{
 struct cmd_obj *VAR_3;
 struct disconnect_parm *VAR_4;
 struct cmd_priv *VAR_5 = &VAR_2->cmdpriv;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;
 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_1(VAR_3);
  return;
 }
 FUNC_0(VAR_3, VAR_4,
       VAR_1);
 FUNC_3(VAR_5, VAR_3);
}
