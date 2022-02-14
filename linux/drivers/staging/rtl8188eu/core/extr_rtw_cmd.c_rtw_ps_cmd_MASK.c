
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drvextra_cmd_parm {int * pbuf; int ec_id; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int * pbuf; int ec_id; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drvextra_cmd_parm*,struct drvextra_cmd_parm*,int ) ;
 int FUNC_1 (struct drvextra_cmd_parm*) ;
 struct drvextra_cmd_parm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct drvextra_cmd_parm*) ;

u8 FUNC_4(struct adapter *VAR_4)
{
 struct cmd_obj *VAR_5;
 struct drvextra_cmd_parm *VAR_6;
 struct cmd_priv *VAR_7 = &VAR_4->cmdpriv;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_5 || !VAR_6) {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return VAR_2;
 }

 VAR_6->ec_id = VAR_1;
 VAR_6->pbuf = ((void*)0);
 FUNC_0(VAR_5, VAR_6, VAR_3);

 return FUNC_3(VAR_7, VAR_5);
}
