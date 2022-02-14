
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_priv {int cur_ucode; int ucode_loaded; int notif_wait; int trans; int fw; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_alive_data {int valid; } ;
struct fw_img {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct iwl_priv*,char*,int) ;

 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct iwl_priv*) ;
 struct fw_img* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_alive_data*) ;
 int FUNC_7 (int *,struct iwl_notification_wait*) ;
 int FUNC_8 (int ,struct fw_img const*,int) ;
 int FUNC_9 (int *,struct iwl_notification_wait*,int ) ;
 int FUNC_10 (int) ;

int FUNC_11(struct iwl_priv *VAR_5,
     enum iwl_ucode_type VAR_6)
{
 struct iwl_notification_wait VAR_7;
 struct iwl_alive_data VAR_8;
 const struct fw_img *VAR_9;
 int VAR_10;
 enum iwl_ucode_type VAR_11;
 static const u16 VAR_12[] = { 128 };

 VAR_9 = FUNC_5(VAR_5->fw, VAR_6);
 if (FUNC_3(!VAR_9))
  return -VAR_0;

 VAR_11 = VAR_5->cur_ucode;
 VAR_5->cur_ucode = VAR_6;
 VAR_5->ucode_loaded = 0;

 FUNC_6(&VAR_5->notif_wait, &VAR_7,
       VAR_12, FUNC_0(VAR_12),
       VAR_4, &VAR_8);

 VAR_10 = FUNC_8(VAR_5->trans, VAR_9, 0);
 if (VAR_10) {
  VAR_5->cur_ucode = VAR_11;
  FUNC_7(&VAR_5->notif_wait, &VAR_7);
  return VAR_10;
 }





 VAR_10 = FUNC_9(&VAR_5->notif_wait, &VAR_7,
     VAR_3);
 if (VAR_10) {
  VAR_5->cur_ucode = VAR_11;
  return VAR_10;
 }

 if (!VAR_8.valid) {
  FUNC_1(VAR_5, "Loaded ucode is not valid!\n");
  VAR_5->cur_ucode = VAR_11;
  return -VAR_1;
 }

 VAR_5->ucode_loaded = 1;

 if (VAR_6 != VAR_2) {

  FUNC_10(5);
 }

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10) {
  FUNC_2(VAR_5,
   "Could not complete ALIVE transition: %d\n", VAR_10);
  VAR_5->cur_ucode = VAR_11;
  return VAR_10;
 }

 return 0;
}
