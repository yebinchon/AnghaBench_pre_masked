
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ device_type; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct pqi_raid_error_info {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ payload_len; int sg_cnt; } ;
struct TYPE_5__ {int sg_cnt; } ;
struct bsg_job {TYPE_3__ reply_payload; TYPE_2__ request_payload; } ;
struct bmic_csmi_smp_passthru_buffer {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,unsigned int) ;
 struct bmic_csmi_smp_passthru_buffer* FUNC_1 (struct sas_rphy*,struct bsg_job*) ;
 unsigned int FUNC_2 (struct bmic_csmi_smp_passthru_buffer*,struct bsg_job*,struct pqi_raid_error_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*,struct bmic_csmi_smp_passthru_buffer*,int,struct pqi_raid_error_info*) ;
 scalar_t__ FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pqi_ctrl_info*) ;
 struct pqi_ctrl_info* FUNC_8 (struct Scsi_Host*) ;

void FUNC_9(struct bsg_job *VAR_5, struct Scsi_Host *VAR_6,
 struct sas_rphy *VAR_7)
{
 int VAR_8;
 struct pqi_ctrl_info *VAR_9 = FUNC_8(VAR_6);
 struct bmic_csmi_smp_passthru_buffer *VAR_10;
 struct pqi_raid_error_info VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_5(VAR_9);

 if (VAR_5->reply_payload.payload_len == 0) {
  VAR_8 = -VAR_2;
  goto out;
 }

 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_7->identify.device_type != VAR_4) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_5->request_payload.sg_cnt > 1 || VAR_5->reply_payload.sg_cnt > 1) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (FUNC_6(VAR_9)) {
  VAR_8 = -VAR_3;
  goto out;
 }

 if (FUNC_4(VAR_9)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_1(VAR_7, VAR_5);
 if (!VAR_10) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_9, VAR_10, sizeof(*VAR_10),
  &VAR_11);
 if (VAR_8)
  goto out;

 VAR_12 = FUNC_2(VAR_10, VAR_5, &VAR_11);
out:
 FUNC_0(VAR_5, VAR_8, VAR_12);
 FUNC_7(VAR_9);
}
