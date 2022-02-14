
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {void* invalid_crc_cnt; void* invalid_trans_word; void* primitive_seq_proto_err; void* loss_of_signal_cnt; void* loss_of_synch_cnt; void* link_failure_cnt; } ;
struct TYPE_6__ {TYPE_1__ link_status; void* port_type; } ;
struct fc_rdp_link_error_status_desc {void* length; TYPE_2__ info; void* tag; } ;
struct TYPE_7__ {int linkFailureCnt; int lossSyncCnt; int lossSignalCnt; int primSeqErrCnt; int invalidXmitWord; int crcCnt; } ;
typedef TYPE_3__ READ_LNK_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct fc_rdp_link_error_status_desc *VAR_3,
  READ_LNK_VAR *VAR_4)
{
 uint32_t VAR_5;

 VAR_3->tag = FUNC_0(VAR_0);

 VAR_5 = VAR_1 << VAR_2;

 VAR_3->info.port_type = FUNC_0(VAR_5);

 VAR_3->info.link_status.link_failure_cnt =
  FUNC_0(VAR_4->linkFailureCnt);
 VAR_3->info.link_status.loss_of_synch_cnt =
  FUNC_0(VAR_4->lossSyncCnt);
 VAR_3->info.link_status.loss_of_signal_cnt =
  FUNC_0(VAR_4->lossSignalCnt);
 VAR_3->info.link_status.primitive_seq_proto_err =
  FUNC_0(VAR_4->primSeqErrCnt);
 VAR_3->info.link_status.invalid_trans_word =
  FUNC_0(VAR_4->invalidXmitWord);
 VAR_3->info.link_status.invalid_crc_cnt = FUNC_0(VAR_4->crcCnt);

 VAR_3->length = FUNC_0(sizeof(VAR_3->info));

 return sizeof(struct fc_rdp_link_error_status_desc);
}
