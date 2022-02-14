
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cmd_obj*,int ) ;
 int FUNC_2 (struct cmd_priv*,struct cmd_obj*) ;
 struct cmd_obj* FUNC_3 (int) ;

u8 FUNC_4(struct adapter *VAR_3)
{
 struct cmd_obj *VAR_4;
 struct cmd_priv *VAR_5 = &(VAR_3->cmdpriv);
 u8 VAR_6 = VAR_2;

 VAR_4 = FUNC_3(sizeof(struct cmd_obj));
 if (VAR_4 == ((void*)0)) {
  VAR_6 = VAR_1;
  goto exit;
 }

 FUNC_1(VAR_4, FUNC_0(VAR_0));

 VAR_6 = FUNC_2(VAR_5, VAR_4);

exit:
 return VAR_6;
}
