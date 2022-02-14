
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {scalar_t__ scan_type; TYPE_2__* scan_request; int scan_vif; int status; int scan_check; int mutex; } ;
struct TYPE_4__ {TYPE_1__** channels; } ;
struct TYPE_3__ {int band; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_priv*,int) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct iwl_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct iwl_priv *VAR_4)
{
 bool VAR_5;

 FUNC_6(&VAR_4->mutex);

 if (!FUNC_7(VAR_3, &VAR_4->status))
  return;

 FUNC_0(VAR_4, "Completed scan.\n");

 FUNC_1(&VAR_4->scan_check);

 VAR_5 = FUNC_7(VAR_2, &VAR_4->status);
 if (VAR_5)
  FUNC_0(VAR_4, "Aborted scan completed.\n");

 if (!FUNC_7(VAR_1, &VAR_4->status)) {
  FUNC_0(VAR_4, "Scan already completed.\n");
  goto out_settings;
 }

 if (VAR_4->scan_type != VAR_0 && !VAR_5) {
  int VAR_6;


  if (VAR_4->scan_request == ((void*)0))
   goto out_complete;


  VAR_6 = FUNC_4(VAR_4, VAR_4->scan_vif, VAR_0,
     VAR_4->scan_request->channels[0]->band);
  if (VAR_6) {
   FUNC_0(VAR_4,
    "failed to initiate pending scan: %d\n", VAR_6);
   VAR_5 = 1;
   goto out_complete;
  }

  return;
 }

out_complete:
 FUNC_2(VAR_4, VAR_5);

out_settings:

 if (!FUNC_3(VAR_4))
  return;

 FUNC_5(VAR_4);
}
