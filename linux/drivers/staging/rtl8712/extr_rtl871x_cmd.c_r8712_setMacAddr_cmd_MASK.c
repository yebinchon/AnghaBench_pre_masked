
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;
struct SetMacAddr_param {int MacAddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cmd_obj*,struct SetMacAddr_param*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_5(struct _adapter *VAR_2, u8 *VAR_3)
{
 struct cmd_priv *VAR_4 = &VAR_2->cmdpriv;
 struct cmd_obj *VAR_5;
 struct SetMacAddr_param *VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;
 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  FUNC_2(VAR_5);
  return;
 }
 FUNC_1(VAR_5, VAR_6,
       VAR_1);
 FUNC_0(VAR_6->MacAddr, VAR_3);
 FUNC_4(VAR_4, VAR_5);
}
