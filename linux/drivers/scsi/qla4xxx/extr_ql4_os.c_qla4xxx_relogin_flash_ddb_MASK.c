
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int host_no; } ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct ddb_entry {int fw_ddb_index; int relogin_timer; int default_relogin_timeout; struct scsi_qla_host* ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct scsi_qla_host*,char*,int ,int ,int ) ;
 int FUNC_4 (struct iscsi_cls_session*) ;

__attribute__((used)) static void FUNC_5(struct iscsi_cls_session *VAR_2)
{
 uint16_t VAR_3;
 struct iscsi_session *VAR_4;
 struct ddb_entry *VAR_5;
 struct scsi_qla_host *VAR_6;

 VAR_4 = VAR_2->dd_data;
 VAR_5 = VAR_4->dd_data;
 VAR_6 = VAR_5->ha;

 VAR_3 = FUNC_2(VAR_5->default_relogin_timeout,
       (uint16_t)VAR_1);
 FUNC_1(&VAR_5->relogin_timer, VAR_3);

 FUNC_0(FUNC_3(VAR_0, VAR_6,
     "scsi%ld: Relogin index [%d]. TOV=%d\n", VAR_6->host_no,
     VAR_5->fw_ddb_index, VAR_3));

 FUNC_4(VAR_2);
}
