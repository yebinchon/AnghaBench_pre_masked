
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct TYPE_2__ {int curr_ch; } ;
struct _adapter {TYPE_1__ mppriv; struct cmd_priv cmdpriv; } ;
struct SetChannel_parm {int curr_ch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmd_obj*,struct SetChannel_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_5(struct _adapter *VAR_2)
{
 struct cmd_priv *VAR_3 = &VAR_2->cmdpriv;
 struct cmd_obj *VAR_4 = ((void*)0);
 struct SetChannel_parm *VAR_5 = ((void*)0);
 u16 VAR_6 = FUNC_0(VAR_1);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return;
 }
 VAR_5->curr_ch = VAR_2->mppriv.curr_ch;
 FUNC_1(VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_3, VAR_4);
}
