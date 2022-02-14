
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_rxon_context {int rxon_cmd; } ;
struct iwl_rxon_cmd {int dev_type; int filter_flags; } ;
struct iwl_priv {int notif_wait; } ;
struct iwl_notification_wait {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,struct iwl_rxon_cmd*) ;
 int FUNC_3 (int *,struct iwl_notification_wait*,int const*,int ,int *,int *) ;
 int FUNC_4 (int *,struct iwl_notification_wait*) ;
 int FUNC_5 (int *,struct iwl_notification_wait*,int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_3,
         struct iwl_rxon_context *VAR_4,
         struct iwl_rxon_cmd *VAR_5)
{
 struct iwl_notification_wait VAR_6;
 __le32 VAR_7 = VAR_5->filter_flags;
 u8 VAR_8 = VAR_5->dev_type;
 int VAR_9;
 static const u16 VAR_10[] = {
  128
 };

 FUNC_3(&VAR_3->notif_wait, &VAR_6,
       VAR_10, FUNC_0(VAR_10),
       ((void*)0), ((void*)0));

 VAR_5->filter_flags &= ~VAR_2;
 VAR_5->dev_type = VAR_1;
 VAR_9 = FUNC_2(VAR_3, VAR_4->rxon_cmd,
    0, sizeof(*VAR_5), VAR_5);

 VAR_5->filter_flags = VAR_7;
 VAR_5->dev_type = VAR_8;

 if (VAR_9) {
  FUNC_1(VAR_3, "Error disabling PAN (%d)\n", VAR_9);
  FUNC_4(&VAR_3->notif_wait, &VAR_6);
 } else {
  VAR_9 = FUNC_5(&VAR_3->notif_wait,
         &VAR_6, VAR_0);
  if (VAR_9)
   FUNC_1(VAR_3, "Timed out waiting for PAN disable\n");
 }

 return VAR_9;
}
