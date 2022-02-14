
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm_sniffer_apply {void* bssid; int aid; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int mutex; int notif_wait; } ;
struct iwl_he_monitor_cmd {int * bssid; int aid; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef int he_mon_cmd ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,struct iwl_notification_wait*,int *,int ,int ,struct iwl_mvm_sniffer_apply*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_he_monitor_cmd*) ;
 int VAR_4 ;
 int FUNC_6 (int *,struct iwl_notification_wait*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_10(struct iwl_mvm *VAR_5, char *VAR_6,
      size_t VAR_7, loff_t *VAR_8)
{
 struct iwl_notification_wait VAR_9;
 struct iwl_he_monitor_cmd VAR_10 = {};
 struct iwl_mvm_sniffer_apply VAR_11 = {
  .mvm = VAR_5,
 };
 u16 VAR_12[] = {
  FUNC_2(VAR_3, VAR_0, 0),
 };
 u32 VAR_13;
 int VAR_14;

 if (!FUNC_4(VAR_5))
  return -VAR_2;

 VAR_14 = FUNC_9(VAR_6, "%x %2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx", &VAR_13,
       &VAR_10.bssid[0], &VAR_10.bssid[1],
       &VAR_10.bssid[2], &VAR_10.bssid[3],
       &VAR_10.bssid[4], &VAR_10.bssid[5]);
 if (VAR_14 != 7)
  return -VAR_1;

 VAR_10.aid = FUNC_1(VAR_13);

 VAR_11.aid = VAR_13;
 VAR_11.bssid = (void *)VAR_10.bssid;

 FUNC_7(&VAR_5->mutex);
 FUNC_3(&VAR_5->notif_wait, &VAR_9,
       VAR_12, FUNC_0(VAR_12),
       VAR_4, &VAR_11);

 VAR_14 = FUNC_5(VAR_5, FUNC_2(VAR_3,
         VAR_0, 0), 0,
       sizeof(VAR_10), &VAR_10);


 FUNC_6(&VAR_5->notif_wait, &VAR_9);

 FUNC_8(&VAR_5->mutex);

 return VAR_14 ?: VAR_7;
}
