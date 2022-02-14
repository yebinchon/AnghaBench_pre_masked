
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int current_channel; int rcr; int tx_power_mutex; } ;
struct TYPE_8__ {int total_cam_num; } ;
struct rtw_coex {int wait; int mutex; int queue; int defreeze_work; int bt_reenable_work; int bt_relink_work; } ;
struct TYPE_7__ {int q_lock; int queue; int purge_timer; } ;
struct TYPE_6__ {int lock; } ;
struct rtw_dev {TYPE_5__* chip; TYPE_4__ hal; int mutex; int mac_id_map; TYPE_3__ sec; struct rtw_coex coex; TYPE_2__ tx_report; TYPE_1__ h2c; int rf_lock; int dm_lock; int c2h_queue; int c2h_work; int lps_work; int watch_dog_work; int rsvd_page_list; } ;
struct TYPE_10__ {int fw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rtw_dev*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct rtw_dev*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct rtw_dev*,char*) ;
 int VAR_16 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;

int FUNC_14(struct rtw_dev *VAR_17)
{
 struct rtw_coex *VAR_18 = &VAR_17->coex;
 int VAR_19;

 FUNC_1(&VAR_17->rsvd_page_list);

 FUNC_13(&VAR_17->tx_report.purge_timer,
      VAR_15, 0);

 FUNC_0(&VAR_17->watch_dog_work, VAR_16);
 FUNC_0(&VAR_17->lps_work, VAR_14);
 FUNC_0(&VAR_18->bt_relink_work, VAR_12);
 FUNC_0(&VAR_18->bt_reenable_work, VAR_11);
 FUNC_0(&VAR_18->defreeze_work, VAR_13);
 FUNC_2(&VAR_17->c2h_work, VAR_10);
 FUNC_11(&VAR_17->c2h_queue);
 FUNC_11(&VAR_17->coex.queue);
 FUNC_11(&VAR_17->tx_report.queue);

 FUNC_12(&VAR_17->dm_lock);
 FUNC_12(&VAR_17->rf_lock);
 FUNC_12(&VAR_17->h2c.lock);
 FUNC_12(&VAR_17->tx_report.q_lock);

 FUNC_4(&VAR_17->mutex);
 FUNC_4(&VAR_17->coex.mutex);
 FUNC_4(&VAR_17->hal.tx_power_mutex);

 FUNC_3(&VAR_17->coex.wait);

 VAR_17->sec.total_cam_num = 32;
 VAR_17->hal.current_channel = 1;
 FUNC_10(VAR_9, VAR_17->mac_id_map);

 FUNC_5(&VAR_17->mutex);
 FUNC_7(VAR_17, VAR_8, 0);
 FUNC_6(&VAR_17->mutex);


 VAR_17->hal.rcr = VAR_3 | VAR_5 | VAR_4 |
     VAR_7 | VAR_6 |
     VAR_0 | VAR_1 | VAR_2;

 VAR_19 = FUNC_8(VAR_17, VAR_17->chip->fw_name);
 if (VAR_19) {
  FUNC_9(VAR_17, "no firmware loaded\n");
  return VAR_19;
 }

 return 0;
}
