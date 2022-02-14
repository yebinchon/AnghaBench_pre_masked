
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drvextra_cmd_parm {int size; int * pbuf; scalar_t__ type; int ec_id; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_4 (int) ;

u8 FUNC_5(struct adapter *VAR_4, u8 *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct drvextra_cmd_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_4->cmdpriv;
 u8 VAR_9 = VAR_2;

 VAR_6 = FUNC_4(sizeof(struct cmd_obj));
 if (VAR_6 == ((void*)0)) {
  VAR_9 = VAR_1;
  goto exit;
 }

 VAR_7 = FUNC_4(sizeof(struct drvextra_cmd_parm));
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6);
  VAR_9 = VAR_1;
  goto exit;
 }

 VAR_7->ec_id = VAR_0;
 VAR_7->type = 0;
 VAR_7->size = VAR_5?16:0;
 VAR_7->pbuf = VAR_5;

 FUNC_1(VAR_6, VAR_7, FUNC_0(VAR_3));

 VAR_9 = FUNC_3(VAR_8, VAR_6);

exit:

 return VAR_9;
}
