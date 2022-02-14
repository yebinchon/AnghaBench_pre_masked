
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct setopmode_parm {scalar_t__ mode; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct adapter {struct cmd_priv cmdpriv; } ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmd_obj*,struct setopmode_parm*,int ) ;
 int FUNC_1 (struct setopmode_parm*) ;
 scalar_t__ FUNC_2 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,scalar_t__*) ;

u8 FUNC_5(struct adapter *VAR_3, enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_4, bool VAR_5)
{
 struct cmd_obj *VAR_6;
 struct setopmode_parm *VAR_7;

 struct cmd_priv *VAR_8 = &VAR_3->cmdpriv;
 u8 VAR_9 = VAR_1;

 VAR_7 = FUNC_3(sizeof(struct setopmode_parm));

 if (VAR_7 == ((void*)0)) {
  VAR_9 = VAR_0;
  goto exit;
 }
 VAR_7->mode = (u8)VAR_4;

 if (VAR_5) {
  VAR_6 = FUNC_3(sizeof(struct cmd_obj));
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_7);
   VAR_9 = VAR_0;
   goto exit;
  }

  FUNC_0(VAR_6, VAR_7, VAR_2);
  VAR_9 = FUNC_2(VAR_8, VAR_6);
 } else {
  FUNC_4(VAR_3, (u8 *)VAR_7);
  FUNC_1(VAR_7);
 }
exit:
 return VAR_9;
}
