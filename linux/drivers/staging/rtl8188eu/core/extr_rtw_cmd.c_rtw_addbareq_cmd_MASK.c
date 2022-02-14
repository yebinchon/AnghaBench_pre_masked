
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cmd_obj*,struct addBaReq_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

u8 FUNC_5(struct adapter *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 struct cmd_priv *VAR_8 = &VAR_5->cmdpriv;
 struct cmd_obj *VAR_9;
 struct addBaReq_parm *VAR_10;
 u8 VAR_11 = VAR_4;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_11 = VAR_3;
  goto exit;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_1(VAR_9);
  VAR_11 = VAR_3;
  goto exit;
 }

 VAR_10->tid = VAR_6;
 FUNC_3(VAR_10->addr, VAR_7, VAR_0);

 FUNC_0(VAR_9, VAR_10, VAR_2);

 VAR_11 = FUNC_4(VAR_8, VAR_9);

exit:

 return VAR_11;
}
