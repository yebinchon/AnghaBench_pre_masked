
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wsm_reset {int reset_statistics; } ;
struct TYPE_3__ {int in_progress; } ;
struct cw1200_common {int join_pending; int delayed_unjoin; int delayed_link_loss; scalar_t__ join_status; int output_power; int disable_beacon_filter; int setbssparams_done; int conf_mutex; int firmware_ps_mode; int bss_params; int association_mode; int listening; int event_handler; scalar_t__ join_dtim_period; int set_beacon_wakeup_period_work; int update_filtering_work; TYPE_2__* hw; TYPE_1__ scan; int join_timeout; } ;
struct TYPE_4__ {int wiphy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cw1200_common*,int ,int ,int ) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*) ;
 int FUNC_6 (struct cw1200_common*) ;
 int FUNC_7 (struct cw1200_common*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct cw1200_common*) ;
 int FUNC_14 (struct cw1200_common*,int ) ;
 int FUNC_15 (struct cw1200_common*,struct wsm_reset*) ;
 int FUNC_16 (struct cw1200_common*,int ,int ) ;
 int FUNC_17 (struct cw1200_common*,int) ;

__attribute__((used)) static void FUNC_18(struct cw1200_common *VAR_2)
{
 struct wsm_reset VAR_3 = {
  .reset_statistics = 1,
 };

 FUNC_1(&VAR_2->join_timeout);

 FUNC_9(&VAR_2->conf_mutex);
 VAR_2->join_pending = 0;

 if (FUNC_0(&VAR_2->scan.in_progress)) {
  if (VAR_2->delayed_unjoin)
   FUNC_12(VAR_2->hw->wiphy, "Delayed unjoin is already scheduled.\n");
  else
   VAR_2->delayed_unjoin = 1;
  goto done;
 }

 VAR_2->delayed_link_loss = 0;

 if (!VAR_2->join_status)
  goto done;

 if (VAR_2->join_status == VAR_0)
  goto done;

 FUNC_2(&VAR_2->update_filtering_work);
 FUNC_2(&VAR_2->set_beacon_wakeup_period_work);
 VAR_2->join_status = VAR_1;


 FUNC_13(VAR_2);
 FUNC_14(VAR_2, 0);
 FUNC_15(VAR_2, &VAR_3);
 FUNC_17(VAR_2, VAR_2->output_power * 10);
 VAR_2->join_dtim_period = 0;
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(&VAR_2->event_handler);
 FUNC_7(VAR_2, VAR_2->listening);
 FUNC_3(VAR_2, 0, 0, 0);


 FUNC_16(VAR_2, 0, 0);

 VAR_2->disable_beacon_filter = 0;
 FUNC_6(VAR_2);
 FUNC_8(&VAR_2->association_mode, 0,
        sizeof(VAR_2->association_mode));
 FUNC_8(&VAR_2->bss_params, 0, sizeof(VAR_2->bss_params));
 VAR_2->setbssparams_done = 0;
 FUNC_8(&VAR_2->firmware_ps_mode, 0,
        sizeof(VAR_2->firmware_ps_mode));

 FUNC_11("[STA] Unjoin completed.\n");

done:
 FUNC_10(&VAR_2->conf_mutex);
}
