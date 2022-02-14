
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct drvextra_cmd_parm {int * pbuf; scalar_t__ size; scalar_t__ type; int ec_id; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_5 (int) ;

u8 FUNC_6(struct adapter *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct cmd_obj *VAR_7;
 struct drvextra_cmd_parm *VAR_8;
 struct cmd_priv *VAR_9 = &VAR_4->cmdpriv;

 u8 VAR_10 = VAR_2;




 if (VAR_6) {
  VAR_7 = FUNC_5(sizeof(struct cmd_obj));
  if (VAR_7 == ((void*)0)) {
   VAR_10 = VAR_1;
   goto exit;
  }

  VAR_8 = FUNC_5(sizeof(struct drvextra_cmd_parm));
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_7);
   VAR_10 = VAR_1;
   goto exit;
  }

  VAR_8->ec_id = VAR_0;
  VAR_8->type = VAR_5;
  VAR_8->size = 0;
  VAR_8->pbuf = ((void*)0);

  FUNC_1(VAR_7, VAR_8, FUNC_0(VAR_3));

  VAR_10 = FUNC_4(VAR_9, VAR_7);
 } else {
  FUNC_3(VAR_4, VAR_5);
 }

exit:
 return VAR_10;
}
