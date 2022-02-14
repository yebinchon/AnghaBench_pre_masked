
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmd_priv {int cmd_queue_comp; int cmd_queue; struct adapter* padapter; } ;
struct cmd_obj {struct adapter* padapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cmd_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_3 (struct cmd_obj*) ;

u32 FUNC_4(struct cmd_priv *VAR_2, struct cmd_obj *VAR_3)
{
 int VAR_4 = VAR_0;
 struct adapter *VAR_5 = VAR_2->padapter;

 if (!VAR_3)
  goto exit;

 VAR_3->padapter = VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 == VAR_0) {
  FUNC_3(VAR_3);
  goto exit;
 }

 VAR_4 = FUNC_0(&VAR_2->cmd_queue, VAR_3);

 if (VAR_4 == VAR_1)
  FUNC_1(&VAR_2->cmd_queue_comp);

exit:

 return VAR_4;
}
