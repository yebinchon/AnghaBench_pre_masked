
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drvextra_cmd_parm {int * pbuf; scalar_t__ type_size; int ec_id; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmd_obj*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;

u8 FUNC_4(struct adapter *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct drvextra_cmd_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_5->cmdpriv;
 u8 VAR_9 = VAR_3;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_9 = VAR_2;
  goto exit;
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_6);
  VAR_9 = VAR_2;
  goto exit;
 }

 VAR_7->ec_id = VAR_0;
 VAR_7->type_size = 0;
 VAR_7->pbuf = (u8 *)VAR_5;

 FUNC_0(VAR_6, VAR_7, VAR_4);

 VAR_9 = FUNC_3(VAR_8, VAR_6);
exit:
 return VAR_9;
}
