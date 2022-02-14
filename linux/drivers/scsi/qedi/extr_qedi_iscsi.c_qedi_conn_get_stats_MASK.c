
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct qedi_ctx {int cdev; } ;
struct qed_iscsi_stats {scalar_t__ iscsi_rx_r2t_pdu_cnt; scalar_t__ iscsi_rx_data_pdu_cnt; scalar_t__ iscsi_tx_data_pdu_cnt; int iscsi_rx_bytes_cnt; int iscsi_tx_bytes_cnt; } ;
struct iscsi_stats {int custom_length; TYPE_1__* custom; scalar_t__ timeout_err; scalar_t__ digest_err; int tmfrsp_pdus; int tmfcmd_pdus; void* r2t_pdus; void* datain_pdus; int scsirsp_pdus; void* dataout_pdus; int scsicmd_pdus; int rxdata_octets; int txdata_octets; } ;
struct iscsi_conn {int eh_abort_cnt; int tmfrsp_pdus_cnt; int tmfcmd_pdus_cnt; void* r2t_pdus_cnt; void* datain_pdus_cnt; int scsirsp_pdus_cnt; void* dataout_pdus_cnt; int scsicmd_pdus_cnt; int rxdata_octets; int txdata_octets; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int (* get_stats ) (int ,struct qed_iscsi_stats*) ;} ;
struct TYPE_3__ {int value; int desc; } ;


 int FUNC_0 (struct iscsi_cls_conn*) ;
 struct qedi_ctx* FUNC_1 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,struct qed_iscsi_stats*) ;

__attribute__((used)) static void FUNC_5(struct iscsi_cls_conn *VAR_1,
    struct iscsi_stats *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->dd_data;
 struct qed_iscsi_stats VAR_4;
 struct Scsi_Host *VAR_5;
 struct qedi_ctx *VAR_6;

 VAR_5 = FUNC_2(FUNC_0(VAR_1));
 VAR_6 = FUNC_1(VAR_5);
 VAR_0->get_stats(VAR_6->cdev, &VAR_4);

 VAR_3->txdata_octets = VAR_4.iscsi_tx_bytes_cnt;
 VAR_3->rxdata_octets = VAR_4.iscsi_rx_bytes_cnt;
 VAR_3->dataout_pdus_cnt = (uint32_t)VAR_4.iscsi_tx_data_pdu_cnt;
 VAR_3->datain_pdus_cnt = (uint32_t)VAR_4.iscsi_rx_data_pdu_cnt;
 VAR_3->r2t_pdus_cnt = (uint32_t)VAR_4.iscsi_rx_r2t_pdu_cnt;

 VAR_2->txdata_octets = VAR_3->txdata_octets;
 VAR_2->rxdata_octets = VAR_3->rxdata_octets;
 VAR_2->scsicmd_pdus = VAR_3->scsicmd_pdus_cnt;
 VAR_2->dataout_pdus = VAR_3->dataout_pdus_cnt;
 VAR_2->scsirsp_pdus = VAR_3->scsirsp_pdus_cnt;
 VAR_2->datain_pdus = VAR_3->datain_pdus_cnt;
 VAR_2->r2t_pdus = VAR_3->r2t_pdus_cnt;
 VAR_2->tmfcmd_pdus = VAR_3->tmfcmd_pdus_cnt;
 VAR_2->tmfrsp_pdus = VAR_3->tmfrsp_pdus_cnt;
 VAR_2->digest_err = 0;
 VAR_2->timeout_err = 0;
 FUNC_3(VAR_2->custom[0].desc, "eh_abort_cnt");
 VAR_2->custom[0].value = VAR_3->eh_abort_cnt;
 VAR_2->custom_length = 1;
}
