
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_stats {int custom_length; TYPE_1__* custom; scalar_t__ timeout_err; scalar_t__ digest_err; int tmfrsp_pdus; int tmfcmd_pdus; int r2t_pdus; int datain_pdus; int scsirsp_pdus; int dataout_pdus; int scsicmd_pdus; int rxdata_octets; int txdata_octets; } ;
struct iscsi_conn {int eh_abort_cnt; int tmfrsp_pdus_cnt; int tmfcmd_pdus_cnt; int r2t_pdus_cnt; int datain_pdus_cnt; int scsirsp_pdus_cnt; int dataout_pdus_cnt; int scsicmd_pdus_cnt; int rxdata_octets; int txdata_octets; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {int value; int desc; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct iscsi_cls_conn *VAR_0,
     struct iscsi_stats *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_0->dd_data;

 VAR_1->txdata_octets = VAR_2->txdata_octets;
 VAR_1->rxdata_octets = VAR_2->rxdata_octets;
 VAR_1->scsicmd_pdus = VAR_2->scsicmd_pdus_cnt;
 VAR_1->dataout_pdus = VAR_2->dataout_pdus_cnt;
 VAR_1->scsirsp_pdus = VAR_2->scsirsp_pdus_cnt;
 VAR_1->datain_pdus = VAR_2->datain_pdus_cnt;
 VAR_1->r2t_pdus = VAR_2->r2t_pdus_cnt;
 VAR_1->tmfcmd_pdus = VAR_2->tmfcmd_pdus_cnt;
 VAR_1->tmfrsp_pdus = VAR_2->tmfrsp_pdus_cnt;
 VAR_1->digest_err = 0;
 VAR_1->timeout_err = 0;
 FUNC_0(VAR_1->custom[0].desc, "eh_abort_cnt");
 VAR_1->custom[0].value = VAR_2->eh_abort_cnt;
 VAR_1->custom_length = 1;
}
