
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int max_msix_vectors; int irq_mode; scalar_t__ ctrl_id; int raid_bypass_retry_work; int raid_bypass_retry_list_lock; int raid_bypass_retry_list; int block_requests_wait; int sync_request_sem; int ctrl_offline_work; int heartbeat_timer; int update_time_work; int rescan_work; int num_interrupts; int event_work; int scsi_device_list_lock; int scsi_device_list; int ofa_mutex; int lun_reset_mutex; int scan_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct pqi_ctrl_info* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static struct pqi_ctrl_info *FUNC_11(int VAR_11)
{
 struct pqi_ctrl_info *VAR_12;

 VAR_12 = FUNC_6(sizeof(struct pqi_ctrl_info),
   VAR_0, VAR_11);
 if (!VAR_12)
  return ((void*)0);

 FUNC_7(&VAR_12->scan_mutex);
 FUNC_7(&VAR_12->lun_reset_mutex);
 FUNC_7(&VAR_12->ofa_mutex);

 FUNC_1(&VAR_12->scsi_device_list);
 FUNC_9(&VAR_12->scsi_device_list_lock);

 FUNC_2(&VAR_12->event_work, VAR_6);
 FUNC_4(&VAR_12->num_interrupts, 0);

 FUNC_0(&VAR_12->rescan_work, VAR_9);
 FUNC_0(&VAR_12->update_time_work, VAR_10);

 FUNC_10(&VAR_12->heartbeat_timer, VAR_7, 0);
 FUNC_2(&VAR_12->ctrl_offline_work, VAR_5);

 FUNC_8(&VAR_12->sync_request_sem,
  VAR_3);
 FUNC_5(&VAR_12->block_requests_wait);

 FUNC_1(&VAR_12->raid_bypass_retry_list);
 FUNC_9(&VAR_12->raid_bypass_retry_list_lock);
 FUNC_2(&VAR_12->raid_bypass_retry_work,
  VAR_8);

 VAR_12->ctrl_id = FUNC_3(&VAR_4) - 1;
 VAR_12->irq_mode = VAR_1;
 VAR_12->max_msix_vectors = VAR_2;

 return VAR_12;
}
