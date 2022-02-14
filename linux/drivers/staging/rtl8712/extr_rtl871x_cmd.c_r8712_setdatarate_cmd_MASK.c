
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct setdatarate_parm {int mac_id; int datarates; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*,struct setdatarate_parm*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;

int FUNC_6(struct _adapter *VAR_4, u8 *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct setdatarate_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_4->cmdpriv;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 FUNC_1(VAR_6, VAR_7,
       FUNC_0(VAR_3));
 VAR_7->mac_id = 5;
 FUNC_4(VAR_7->datarates, VAR_5, VAR_2);
 FUNC_5(VAR_8, VAR_6);
 return 0;
}
