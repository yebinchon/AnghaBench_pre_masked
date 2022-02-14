
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int mac_id; } ;
struct odm_dm_struct {int bWIFI_Direct; int bWIFI_Display; } ;
struct adapter {TYPE_1__* HalData; } ;
typedef enum hal_odm_variable { ____Placeholder_hal_odm_variable } hal_odm_variable ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; } ;


 int FUNC_0 (char*,int ) ;



 int VAR_0 ;
 int FUNC_1 (struct odm_dm_struct*,int ,int ,struct sta_info*) ;
 int FUNC_2 (struct odm_dm_struct*,int ) ;

void FUNC_3(struct adapter *VAR_1, enum hal_odm_variable VAR_2, void *VAR_3, bool VAR_4)
{
 struct odm_dm_struct *VAR_5 = &VAR_1->HalData->odmpriv;

 switch (VAR_2) {
 case 129:
  {
   struct sta_info *VAR_6 = VAR_3;

   if (VAR_4) {
    FUNC_0("### Set STA_(%d) info\n", VAR_6->mac_id);
    FUNC_1(VAR_5, VAR_0, VAR_6->mac_id, VAR_6);
    FUNC_2(VAR_5, VAR_6->mac_id);
   } else {
    FUNC_0("### Clean STA_(%d) info\n", VAR_6->mac_id);
    FUNC_1(VAR_5, VAR_0, VAR_6->mac_id, ((void*)0));
         }
  }
  break;
 case 130:
  VAR_5->bWIFI_Direct = VAR_4;
  break;
 case 128:
  VAR_5->bWIFI_Display = VAR_4;
  break;
 default:
  break;
 }
}
