
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct addBaReq_parm {int addr; int tid; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*,struct addBaReq_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_5 (int) ;

u8 FUNC_6(struct adapter *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 struct cmd_priv *VAR_7 = &VAR_4->cmdpriv;
 struct cmd_obj *VAR_8;
 struct addBaReq_parm *VAR_9;

 u8 VAR_10 = VAR_3;

 VAR_8 = FUNC_5(sizeof(struct cmd_obj));
 if (VAR_8 == ((void*)0)) {
  VAR_10 = VAR_2;
  goto exit;
 }

 VAR_9 = FUNC_5(sizeof(struct addBaReq_parm));
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_8);
  VAR_10 = VAR_2;
  goto exit;
 }

 VAR_9->tid = VAR_5;
 FUNC_3(VAR_9->addr, VAR_6, VAR_0);

 FUNC_1(VAR_8, VAR_9, FUNC_0(VAR_1));




 VAR_10 = FUNC_4(VAR_7, VAR_8);

exit:
 return VAR_10;
}
