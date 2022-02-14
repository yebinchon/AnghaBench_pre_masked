
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int pri_ddb_idx; int sec_ddb_idx; } ;
struct TYPE_2__ {int iscsi_def_time2wait; int def_timeout; } ;
struct ddb_entry {int default_relogin_timeout; int flags; TYPE_1__ fw_ddb_entry; void* default_time2wait; int relogin_retry_count; int relogin_timer; int retry_relogin_timer; void* chap_tbl_idx; int ddb_change; int unblock_sess; struct scsi_qla_host* ha; int fw_ddb_device_state; void* fw_ddb_index; int ddb_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct scsi_qla_host *VAR_8,
       struct ddb_entry *VAR_9,
       uint16_t VAR_10)
{
 uint16_t VAR_11;

 VAR_9->ddb_type = VAR_2;
 VAR_9->fw_ddb_index = VAR_3;
 VAR_9->fw_ddb_device_state = VAR_0;
 VAR_9->ha = VAR_8;
 VAR_9->unblock_sess = VAR_7;
 VAR_9->ddb_change = VAR_6;
 VAR_9->chap_tbl_idx = VAR_3;

 FUNC_0(&VAR_9->retry_relogin_timer, VAR_3);
 FUNC_0(&VAR_9->relogin_timer, 0);
 FUNC_0(&VAR_9->relogin_retry_count, 0);
 VAR_11 = FUNC_1(VAR_9->fw_ddb_entry.def_timeout);
 VAR_9->default_relogin_timeout =
  (VAR_11 > VAR_4) && (VAR_11 < VAR_4 * 10) ?
  VAR_11 : VAR_4;
 VAR_9->default_time2wait =
  FUNC_1(VAR_9->fw_ddb_entry.iscsi_def_time2wait);

 if (VAR_5 &&
     (VAR_10 == VAR_8->pri_ddb_idx || VAR_10 == VAR_8->sec_ddb_idx))
  FUNC_2(VAR_1, &VAR_9->flags);
}
