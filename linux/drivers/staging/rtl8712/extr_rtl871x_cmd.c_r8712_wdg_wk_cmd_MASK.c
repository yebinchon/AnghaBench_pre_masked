
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drvint_cmd_parm {int * pbuf; scalar_t__ sz; int i_cid; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmd_obj*,struct drvint_cmd_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_4(struct _adapter *VAR_3)
{
 struct cmd_obj *VAR_4;
 struct drvint_cmd_parm *VAR_5;
 struct cmd_priv *VAR_6 = &VAR_3->cmdpriv;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_4);
  return;
 }
 VAR_5->i_cid = VAR_1;
 VAR_5->sz = 0;
 VAR_5->pbuf = ((void*)0);
 FUNC_0(VAR_4, VAR_5, VAR_2);
 FUNC_3(VAR_6, VAR_4);
}
