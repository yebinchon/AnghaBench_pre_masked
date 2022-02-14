
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;
struct SetChannelPlan_param {int ChannelPlan; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmd_obj*,struct SetChannelPlan_param*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_5(struct _adapter *VAR_2, int VAR_3)
{
 struct cmd_obj *VAR_4;
 struct SetChannelPlan_param *VAR_5;
 struct cmd_priv *VAR_6 = &VAR_2->cmdpriv;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return;
 }
 FUNC_1(VAR_4, VAR_5,
    FUNC_0(VAR_1));
 VAR_5->ChannelPlan = VAR_3;
 FUNC_4(VAR_6, VAR_4);
}
