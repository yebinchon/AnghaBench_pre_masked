
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;
struct DisconnectCtrlEx_param {unsigned char EnableDrvCtrl; unsigned char TryPktCnt; unsigned char TryPktInterval; unsigned int FirstStageTO; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cmd_obj*,struct DisconnectCtrlEx_param*,int ) ;
 int FUNC_2 (struct cmd_obj*) ;
 struct cmd_obj* FUNC_3 (int,int ) ;
 struct DisconnectCtrlEx_param* FUNC_4 (int,int ) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;

void FUNC_6(struct _adapter *VAR_2, u32 VAR_3,
   u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct cmd_obj *VAR_7;
 struct DisconnectCtrlEx_param *VAR_8;
 struct cmd_priv *VAR_9 = &VAR_2->cmdpriv;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;
 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_0);
 if (!VAR_8) {
  FUNC_2(VAR_7);
  return;
 }

 VAR_8->EnableDrvCtrl = (unsigned char)VAR_3;
 VAR_8->TryPktCnt = (unsigned char)VAR_4;
 VAR_8->TryPktInterval = (unsigned char)VAR_5;
 VAR_8->FirstStageTO = (unsigned int)VAR_6;

 FUNC_1(VAR_7, VAR_8,
    FUNC_0(VAR_1));
 FUNC_5(VAR_9, VAR_7);
}
