
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct setopmode_parm {scalar_t__ mode; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmd_obj*,struct setopmode_parm*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_4(struct _adapter *VAR_2,
   enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_3)
{
 struct cmd_obj *VAR_4;
 struct setopmode_parm *VAR_5;

 struct cmd_priv *VAR_6 = &VAR_2->cmdpriv;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_4);
  return;
 }
 FUNC_0(VAR_4, VAR_5, VAR_1);
 VAR_5->mode = (u8)VAR_3;
 FUNC_3(VAR_6, VAR_4);
}
