
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm {int notif_wait; TYPE_1__* fw; int mutex; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;


 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct iwl_notification_wait*,int const*,int ,int *,int *) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int) ;
 int FUNC_6 (int *,struct iwl_notification_wait*) ;
 int FUNC_7 (int *,struct iwl_notification_wait*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iwl_mvm *VAR_2, int VAR_3)
{
 struct iwl_notification_wait VAR_4;
 static const u16 VAR_5[] = { 129,
           128, };
 int VAR_6;

 FUNC_8(&VAR_2->mutex);

 FUNC_3(&VAR_2->notif_wait, &VAR_4,
       VAR_5,
       FUNC_0(VAR_5),
       ((void*)0), ((void*)0));

 FUNC_1(VAR_2, "Preparing to stop scan, type %x\n", VAR_3);

 if (FUNC_2(&VAR_2->fw->ucode_capa, VAR_1))
  VAR_6 = FUNC_5(VAR_2, VAR_3);
 else
  VAR_6 = FUNC_4(VAR_2);

 if (VAR_6) {
  FUNC_1(VAR_2, "couldn't stop scan type %d\n", VAR_3);
  FUNC_6(&VAR_2->notif_wait, &VAR_4);
  return VAR_6;
 }

 return FUNC_7(&VAR_2->notif_wait, &VAR_4,
         1 * VAR_0);
}
