
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* wiphy; } ;
struct mwifiex_private {TYPE_2__ wdev; scalar_t__ sched_scanning; } ;
struct mwifiex_ds_hs_cfg {int is_invoke_hostcmd; } ;
struct mwifiex_adapter {int priv_num; int hs_activate_wait_q_woken; int hs_activate_wait_q; int work_flags; scalar_t__ hs_activated; struct mwifiex_private** priv; } ;
typedef int hscfg ;
struct TYPE_6__ {TYPE_1__* wowlan_config; } ;
struct TYPE_4__ {int nd_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct mwifiex_ds_hs_cfg*,int ,int) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_4 (struct mwifiex_private*,int *) ;
 struct mwifiex_private* FUNC_5 (struct mwifiex_adapter*,int ) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*,int ,int ,struct mwifiex_ds_hs_cfg*) ;
 int FUNC_7 (struct mwifiex_private*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int,int) ;

int FUNC_10(struct mwifiex_adapter *VAR_8)
{
 struct mwifiex_ds_hs_cfg VAR_9;
 struct mwifiex_private *VAR_10;
 int VAR_11;

 if (VAR_7) {
  for (VAR_11 = 0; VAR_11 < VAR_8->priv_num; VAR_11++) {
   VAR_10 = VAR_8->priv[VAR_11];
   if (VAR_10)
    FUNC_4(VAR_10, ((void*)0));
  }
 }

 VAR_10 = FUNC_5(VAR_8, VAR_4);

 if (VAR_10 && VAR_10->sched_scanning) {




   FUNC_3(VAR_8, VAR_0, "aborting bgscan!\n");
   FUNC_7(VAR_10);
   FUNC_0(VAR_10->wdev.wiphy, 0);



 }

 if (VAR_8->hs_activated) {
  FUNC_3(VAR_8, VAR_0,
       "cmd: HS Already activated\n");
  return 1;
 }

 VAR_8->hs_activate_wait_q_woken = 0;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.is_invoke_hostcmd = 1;

 FUNC_8(VAR_5, &VAR_8->work_flags);
 FUNC_2(VAR_8);

 if (FUNC_6(FUNC_5(VAR_8,
         VAR_4),
      VAR_3, VAR_6,
      &VAR_9)) {
  FUNC_3(VAR_8, VAR_1,
       "IOCTL request HS enable failed\n");
  return 0;
 }

 if (FUNC_9(VAR_8->hs_activate_wait_q,
          VAR_8->hs_activate_wait_q_woken,
          (10 * VAR_2)) <= 0) {
  FUNC_3(VAR_8, VAR_1,
       "hs_activate_wait_q terminated\n");
  return 0;
 }

 return 1;
}
