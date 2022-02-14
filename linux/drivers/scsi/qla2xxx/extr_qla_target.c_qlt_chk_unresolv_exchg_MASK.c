
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_qla_host {int dpc_flags; struct qla_hw_data* hw; } ;
struct qla_qpair {scalar_t__ retry_term_exchg_addr; scalar_t__ retry_term_jiff; int retry_term_cnt; } ;
struct qla_hw_data {TYPE_1__* isp_ops; struct qla_qpair* base_qpair; } ;
struct abts_resp_from_24xx_fw {scalar_t__ exchange_addr_to_abort; } ;
struct TYPE_2__ {int (* fw_dump ) (struct scsi_qla_host*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,struct scsi_qla_host*,int,int *,int) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct scsi_qla_host*,int) ;
 int FUNC_5 (struct scsi_qla_host*,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_6,
    struct qla_qpair *VAR_7, struct abts_resp_from_24xx_fw *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_6->hw;
 int VAR_10 = 0;







 if (VAR_7->retry_term_exchg_addr == VAR_8->exchange_addr_to_abort &&
     VAR_7->retry_term_jiff == VAR_2) {

  VAR_7->retry_term_cnt++;
  if (VAR_7->retry_term_cnt >= 5) {
   VAR_10 = VAR_0;
   VAR_7->retry_term_cnt = 0;
   FUNC_1(VAR_5, VAR_6, 0xffff,
       "Unable to send ABTS Respond. Dumping firmware.\n");
   FUNC_0(VAR_4 + VAR_3,
       VAR_6, 0xffff, (uint8_t *)VAR_8, sizeof(*VAR_8));

   if (VAR_7 == VAR_9->base_qpair)
    VAR_9->isp_ops->fw_dump(VAR_6, 1);
   else
    VAR_9->isp_ops->fw_dump(VAR_6, 0);

   FUNC_3(VAR_1, &VAR_6->dpc_flags);
   FUNC_2(VAR_6);
  }
 } else if (VAR_7->retry_term_jiff != VAR_2) {
  VAR_7->retry_term_exchg_addr = VAR_8->exchange_addr_to_abort;
  VAR_7->retry_term_cnt = 0;
  VAR_7->retry_term_jiff = VAR_2;
 }

 return VAR_10;
}
