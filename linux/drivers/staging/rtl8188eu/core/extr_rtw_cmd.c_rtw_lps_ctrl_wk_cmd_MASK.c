
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct drvextra_cmd_parm {int * pbuf; scalar_t__ type_size; int ec_id; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmd_obj*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

u8 FUNC_5(struct adapter *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct cmd_obj *VAR_8;
 struct drvextra_cmd_parm *VAR_9;
 struct cmd_priv *VAR_10 = &VAR_5->cmdpriv;
 u8 VAR_11 = VAR_3;

 if (VAR_7) {
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
  if (!VAR_8) {
   VAR_11 = VAR_2;
   goto exit;
  }

  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
  if (!VAR_9) {
   FUNC_1(VAR_8);
   VAR_11 = VAR_2;
   goto exit;
  }

  VAR_9->ec_id = VAR_1;
  VAR_9->type_size = VAR_6;
  VAR_9->pbuf = ((void*)0);

  FUNC_0(VAR_8, VAR_9, VAR_4);

  VAR_11 = FUNC_4(VAR_10, VAR_8);
 } else {
  FUNC_3(VAR_5, VAR_6);
 }

exit:

 return VAR_11;
}
