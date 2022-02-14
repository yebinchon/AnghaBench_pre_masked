
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct qla_tgt* qla_tgt; } ;
struct scsi_qla_host {TYPE_4__* req; int vp_idx; TYPE_3__ vha_tgt; TYPE_2__* host; int host_no; } ;
struct qla_tgt {int tgt_list_entry; int sg_tablesize; int tgt_global_resets_count; int sess_works_list; int sess_work; int sess_work_lock; int del_sess_list; int waitQ; struct scsi_qla_host* vha; struct qla_hw_data* ha; int cpuid; int hint_elem; struct qla_qpair* qpair; struct qla_tgt* qphints; int lun_qpair_map; } ;
struct qla_qpair_hint {int tgt_list_entry; int sg_tablesize; int tgt_global_resets_count; int sess_works_list; int sess_work; int sess_work_lock; int del_sess_list; int waitQ; struct scsi_qla_host* vha; struct qla_hw_data* ha; int cpuid; int hint_elem; struct qla_qpair* qpair; struct qla_qpair_hint* qphints; int lun_qpair_map; } ;
struct qla_qpair {int cpuid; int qp_lock_ptr; int hints_list; } ;
struct TYPE_12__ {TYPE_5__* tgt_ops; } ;
struct qla_hw_data {int max_qpairs; TYPE_6__ tgt; struct qla_qpair** queue_pair_map; struct qla_qpair* base_qpair; } ;
struct TYPE_11__ {int (* add_target ) (struct scsi_qla_host*) ;} ;
struct TYPE_10__ {scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__* hostt; } ;
struct TYPE_7__ {int supported_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct qla_tgt* FUNC_9 (int,int,int ) ;
 int FUNC_10 (struct qla_tgt*) ;
 struct qla_tgt* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_4 ;
 int FUNC_16 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,unsigned long) ;
 int FUNC_19 (int ,unsigned long) ;
 int FUNC_20 (struct scsi_qla_host*) ;

int FUNC_21(struct qla_hw_data *VAR_10, struct scsi_qla_host *VAR_11)
{
 struct qla_tgt *VAR_12;
 int VAR_13, VAR_14;
 struct qla_qpair_hint *VAR_15;

 if (!FUNC_5())
  return 0;

 if (!FUNC_3(VAR_10)) {
  FUNC_16(VAR_6, VAR_11, 0xe070,
      "This adapter does not support target mode.\n");
  return 0;
 }

 FUNC_15(VAR_4, VAR_11, 0xe03b,
     "Registering target for host %ld(%p).\n", VAR_11->host_no, VAR_10);

 FUNC_0(VAR_11->vha_tgt.qla_tgt != ((void*)0));

 VAR_12 = FUNC_11(sizeof(struct qla_tgt), VAR_2);
 if (!VAR_12) {
  FUNC_15(VAR_4, VAR_11, 0xe066,
      "Unable to allocate struct qla_tgt\n");
  return -VAR_1;
 }

 VAR_12->qphints = FUNC_9(VAR_10->max_qpairs + 1,
          sizeof(struct qla_qpair_hint),
          VAR_2);
 if (!VAR_12->qphints) {
  FUNC_10(VAR_12);
  FUNC_16(VAR_6, VAR_11, 0x0197,
      "Unable to allocate qpair hints.\n");
  return -VAR_1;
 }

 if (!(VAR_11->host->hostt->supported_mode & VAR_3))
  VAR_11->host->hostt->supported_mode |= VAR_3;

 VAR_13 = FUNC_7(&VAR_12->lun_qpair_map);
 if (VAR_13) {
  FUNC_10(VAR_12->qphints);
  FUNC_10(VAR_12);
  FUNC_16(VAR_5, VAR_11, 0x0198,
   "Unable to initialize lun_qpair_map btree\n");
  return -VAR_0;
 }
 VAR_15 = &VAR_12->qphints[0];
 VAR_15->qpair = VAR_10->base_qpair;
 FUNC_1(&VAR_15->hint_elem);
 VAR_15->cpuid = VAR_10->base_qpair->cpuid;
 FUNC_12(&VAR_15->hint_elem, &VAR_10->base_qpair->hints_list);

 for (VAR_14 = 0; VAR_14 < VAR_10->max_qpairs; VAR_14++) {
  unsigned long VAR_16;

  struct qla_qpair *VAR_17 = VAR_10->queue_pair_map[VAR_14];

  VAR_15 = &VAR_12->qphints[VAR_14 + 1];
  FUNC_1(&VAR_15->hint_elem);
  if (VAR_17) {
   VAR_15->qpair = VAR_17;
   FUNC_18(VAR_17->qp_lock_ptr, VAR_16);
   FUNC_12(&VAR_15->hint_elem, &VAR_17->hints_list);
   FUNC_19(VAR_17->qp_lock_ptr, VAR_16);
   VAR_15->cpuid = VAR_17->cpuid;
  }
 }

 VAR_12->ha = VAR_10;
 VAR_12->vha = VAR_11;
 FUNC_8(&VAR_12->waitQ);
 FUNC_1(&VAR_12->del_sess_list);
 FUNC_17(&VAR_12->sess_work_lock);
 FUNC_2(&VAR_12->sess_work, VAR_9);
 FUNC_1(&VAR_12->sess_works_list);
 FUNC_6(&VAR_12->tgt_global_resets_count, 0);

 VAR_11->vha_tgt.qla_tgt = VAR_12;

 FUNC_15(VAR_4, VAR_11, 0xe067,
  "qla_target(%d): using 64 Bit PCI addressing",
  VAR_11->vp_idx);

 VAR_12->sg_tablesize = FUNC_4(VAR_11->req->length - 3);

 FUNC_13(&VAR_8);
 FUNC_12(&VAR_12->tgt_list_entry, &VAR_7);
 FUNC_14(&VAR_8);

 if (VAR_10->tgt.tgt_ops && VAR_10->tgt.tgt_ops->add_target)
  VAR_10->tgt.tgt_ops->add_target(VAR_11);

 return 0;
}
