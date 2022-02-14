
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct cmd_obj*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_5 (struct adapter*,int ,scalar_t__*) ;

u8 FUNC_6(struct adapter *VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct cmd_obj *VAR_9;
 struct drvextra_cmd_parm *VAR_10;
 struct cmd_priv *VAR_11 = &VAR_6->cmdpriv;
 u8 VAR_12;
 u8 VAR_13 = VAR_4;

 FUNC_5(VAR_6, VAR_2, &VAR_12);
 if (!VAR_12)
  return VAR_13;

 if (VAR_8) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   VAR_13 = VAR_3;
   goto exit;
  }

  VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
  if (!VAR_10) {
   FUNC_2(VAR_9);
   VAR_13 = VAR_3;
   goto exit;
  }

  VAR_10->ec_id = VAR_0;
  VAR_10->type_size = VAR_7;
  VAR_10->pbuf = ((void*)0);
  FUNC_1(VAR_9, VAR_10, VAR_5);

  VAR_13 = FUNC_4(VAR_11, VAR_9);
 } else {
  FUNC_0(VAR_6, VAR_7);
 }
exit:

 return VAR_13;
}
