
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct iscsi_session {scalar_t__ discovery_parent_idx; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct dev_db_entry {int ddb_link; } ;
struct ddb_entry {struct iscsi_cls_session* sess; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_3,
      struct ddb_entry *VAR_4,
      struct dev_db_entry *VAR_5)
{
 struct iscsi_cls_session *VAR_6;
 struct iscsi_session *VAR_7;
 uint32_t VAR_8 = 0;
 uint16_t VAR_9 = -1;

 VAR_8 = FUNC_0(VAR_3) ? VAR_2 :
         VAR_1;

 VAR_6 = VAR_4->sess;
 VAR_7 = VAR_6->dd_data;

 VAR_9 = FUNC_1(VAR_5->ddb_link);
 if (VAR_9 < VAR_8)
  VAR_7->discovery_parent_idx = VAR_9;
 else
  VAR_7->discovery_parent_idx = VAR_0;
}
