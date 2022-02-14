
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t u16 ;
struct seq_file {struct scsi_qla_host* private; } ;
struct TYPE_7__ {scalar_t__ dif_app_tag_err; scalar_t__ dif_ref_tag_err; scalar_t__ dif_guard_err; scalar_t__ dif_output_requests; scalar_t__ dif_input_requests; scalar_t__ dif_output_bytes; scalar_t__ dif_input_bytes; } ;
struct TYPE_8__ {TYPE_3__ qla_dif_stats; } ;
struct scsi_qla_host {TYPE_4__ qla_stats; TYPE_1__* hw; } ;
struct TYPE_6__ {scalar_t__ num_term_xchg_sent; scalar_t__ num_alloc_iocb_failed; scalar_t__ num_q_full_sent; scalar_t__ core_qla_free_cmd; scalar_t__ qla_core_ret_sta_ctio; scalar_t__ core_qla_snd_status; scalar_t__ qla_core_ret_ctio; scalar_t__ core_qla_que_buf; scalar_t__ qla_core_sbt_cmd; } ;
struct qla_qpair {TYPE_2__ tgt_counters; } ;
struct TYPE_5__ {size_t max_qpairs; struct qla_qpair** queue_pair_map; struct qla_qpair* base_qpair; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct scsi_qla_host *VAR_2 = VAR_0->private;
 struct qla_qpair *VAR_3 = VAR_2->hw->base_qpair;
 uint64_t VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8, VAR_9,
  VAR_10, VAR_11, VAR_12;
 u16 VAR_13;

 VAR_4 = VAR_3->tgt_counters.qla_core_sbt_cmd;
 VAR_5 = VAR_3->tgt_counters.core_qla_que_buf;
 VAR_6 = VAR_3->tgt_counters.qla_core_ret_ctio;
 VAR_7 = VAR_3->tgt_counters.core_qla_snd_status;
 VAR_8 = VAR_3->tgt_counters.qla_core_ret_sta_ctio;
 VAR_9 = VAR_3->tgt_counters.core_qla_free_cmd;
 VAR_10 = VAR_3->tgt_counters.num_q_full_sent;
 VAR_11 = VAR_3->tgt_counters.num_alloc_iocb_failed;
 VAR_12 = VAR_3->tgt_counters.num_term_xchg_sent;

 for (VAR_13 = 0; VAR_13 < VAR_2->hw->max_qpairs; VAR_13++) {
  VAR_3 = VAR_2->hw->queue_pair_map[VAR_13];
  if (!VAR_3)
   continue;
  VAR_4 += VAR_3->tgt_counters.qla_core_sbt_cmd;
  VAR_5 += VAR_3->tgt_counters.core_qla_que_buf;
  VAR_6 += VAR_3->tgt_counters.qla_core_ret_ctio;
  VAR_7 += VAR_3->tgt_counters.core_qla_snd_status;
  VAR_8 +=
      VAR_3->tgt_counters.qla_core_ret_sta_ctio;
  VAR_9 += VAR_3->tgt_counters.core_qla_free_cmd;
  VAR_10 += VAR_3->tgt_counters.num_q_full_sent;
  VAR_11 +=
      VAR_3->tgt_counters.num_alloc_iocb_failed;
  VAR_12 += VAR_3->tgt_counters.num_term_xchg_sent;
 }

 FUNC_1(VAR_0, "Target Counters\n");
 FUNC_0(VAR_0, "qla_core_sbt_cmd = %lld\n",
  VAR_4);
 FUNC_0(VAR_0, "qla_core_ret_sta_ctio = %lld\n",
  VAR_8);
 FUNC_0(VAR_0, "qla_core_ret_ctio = %lld\n",
  VAR_6);
 FUNC_0(VAR_0, "core_qla_que_buf = %lld\n",
  VAR_5);
 FUNC_0(VAR_0, "core_qla_snd_status = %lld\n",
  VAR_7);
 FUNC_0(VAR_0, "core_qla_free_cmd = %lld\n",
  VAR_9);
 FUNC_0(VAR_0, "num alloc iocb failed = %lld\n",
  VAR_11);
 FUNC_0(VAR_0, "num term exchange sent = %lld\n",
  VAR_12);
 FUNC_0(VAR_0, "num Q full sent = %lld\n",
  VAR_10);


 FUNC_0(VAR_0, "DIF Inp Bytes = %lld\n",
  VAR_2->qla_stats.qla_dif_stats.dif_input_bytes);
 FUNC_0(VAR_0, "DIF Outp Bytes = %lld\n",
  VAR_2->qla_stats.qla_dif_stats.dif_output_bytes);
 FUNC_0(VAR_0, "DIF Inp Req = %lld\n",
  VAR_2->qla_stats.qla_dif_stats.dif_input_requests);
 FUNC_0(VAR_0, "DIF Outp Req = %lld\n",
  VAR_2->qla_stats.qla_dif_stats.dif_output_requests);
 FUNC_0(VAR_0, "DIF Guard err = %d\n",
  VAR_2->qla_stats.qla_dif_stats.dif_guard_err);
 FUNC_0(VAR_0, "DIF Ref tag err = %d\n",
  VAR_2->qla_stats.qla_dif_stats.dif_ref_tag_err);
 FUNC_0(VAR_0, "DIF App tag err = %d\n",
  VAR_2->qla_stats.qla_dif_stats.dif_app_tag_err);
 return 0;
}
