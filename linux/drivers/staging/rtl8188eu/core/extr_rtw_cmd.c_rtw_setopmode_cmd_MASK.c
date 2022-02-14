
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct setopmode_parm {int mode; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int mode; } ;
struct adapter {struct cmd_priv cmdpriv; } ;
typedef enum ndis_802_11_network_infra { ____Placeholder_ndis_802_11_network_infra } ndis_802_11_network_infra ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct setopmode_parm*,struct setopmode_parm*,int ) ;
 int FUNC_1 (struct setopmode_parm*) ;
 struct setopmode_parm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct setopmode_parm*) ;

u8 FUNC_4(struct adapter *VAR_2, enum ndis_802_11_network_infra VAR_3)
{
 struct cmd_obj *VAR_4;
 struct setopmode_parm *VAR_5;

 struct cmd_priv *VAR_6 = &VAR_2->cmdpriv;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_4 || !VAR_5) {
  FUNC_1(VAR_4);
  FUNC_1(VAR_5);
  return 0;
 }

 FUNC_0(VAR_4, VAR_5, VAR_1);
 VAR_5->mode = (u8)VAR_3;

 return FUNC_3(VAR_6, VAR_4);
}
