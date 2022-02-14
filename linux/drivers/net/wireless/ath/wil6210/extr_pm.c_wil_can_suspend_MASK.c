
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wil6210_vif {int dummy; } ;
struct TYPE_4__ {int rejected_by_host; } ;
struct TYPE_3__ {int suspend; } ;
struct wil6210_priv {scalar_t__ recovery_state; TYPE_2__ suspend_stats; int vif_mutex; struct wil6210_vif** vifs; int status; TYPE_1__ platform_ops; int fw_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_priv*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wil6210_priv*,struct wil6210_vif*,int) ;
 int FUNC_5 (struct wil6210_priv*,char*,...) ;
 int FUNC_6 (struct wil6210_priv*,int,int) ;
 int VAR_4 ;

int FUNC_7(struct wil6210_priv *VAR_5, bool VAR_6)
{
 int VAR_7 = 0, VAR_8;
 bool VAR_9 = FUNC_3(VAR_1,
     VAR_5->fw_capabilities);
 bool VAR_10;

 FUNC_5(VAR_5, "can_suspend: %s\n", VAR_6 ? "runtime" : "system");

 if (VAR_9 || VAR_2) {
  FUNC_5(VAR_5, "Deny any suspend - %s mode\n",
      VAR_9 ? "wmi_only" : "debug_fw");
  VAR_7 = -VAR_0;
  goto out;
 }
 if (VAR_6 && !VAR_5->platform_ops.suspend) {
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_5->vif_mutex);
 VAR_10 = FUNC_6(VAR_5, 1, 0);
 FUNC_2(&VAR_5->vif_mutex);

 if (!VAR_10) {

  FUNC_5(VAR_5, "Interface is down\n");
  goto out;
 }
 if (FUNC_3(VAR_4, VAR_5->status)) {
  FUNC_5(VAR_5, "Delay suspend when resetting\n");
  VAR_7 = -VAR_0;
  goto out;
 }
 if (VAR_5->recovery_state != VAR_3) {
  FUNC_5(VAR_5, "Delay suspend during recovery\n");
  VAR_7 = -VAR_0;
  goto out;
 }


 FUNC_1(&VAR_5->vif_mutex);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  struct wil6210_vif *VAR_11 = VAR_5->vifs[VAR_8];

  if (!VAR_11)
   continue;
  if (!FUNC_4(VAR_5, VAR_11, VAR_6)) {
   VAR_7 = -VAR_0;
   FUNC_2(&VAR_5->vif_mutex);
   goto out;
  }
 }
 FUNC_2(&VAR_5->vif_mutex);

out:
 FUNC_5(VAR_5, "can_suspend: %s => %s (%d)\n",
     VAR_6 ? "runtime" : "system", VAR_7 ? "No" : "Yes", VAR_7);

 if (VAR_7)
  VAR_5->suspend_stats.rejected_by_host++;

 return VAR_7;
}
