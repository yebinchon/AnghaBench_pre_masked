
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {int qpairs_available; } ;
struct scsi_qla_host {TYPE_1__ flags; int qp_list; struct qla_hw_data* hw; } ;
struct qla_qpair {int use_shadow_reg; size_t id; int vp_idx; int difdix_supported; int online; int qp_list_elem; struct qla_msix_entry* msix; TYPE_4__* rsp; int srb_mempool; int req; int reqq_start_iocbs; int pdev; int enable_explicit_conf; int enable_class_2; int chip_reset; int hints_list; int fw_started; int qp_lock; int * qp_lock_ptr; struct scsi_qla_host* vha; struct qla_hw_data* hw; } ;
struct qla_msix_entry {int in_use; size_t vector; } ;
struct TYPE_6__ {int fw_started; int msix_enabled; } ;
struct qla_hw_data {int fw_attributes; scalar_t__ max_qpairs; scalar_t__ num_qpairs; int msix_count; int mq_lock; int qpair_qid_map; struct qla_qpair** queue_pair_map; int * req_q_map; TYPE_4__** rsp_q_map; int pdev; struct qla_msix_entry* msix_entries; TYPE_3__* base_qpair; TYPE_2__ flags; } ;
struct TYPE_8__ {struct qla_qpair* qpair; int req; } ;
struct TYPE_7__ {int enable_explicit_conf; int enable_class_2; int chip_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 int VAR_3 ;
 int FUNC_6 (size_t,int ) ;
 size_t FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct qla_qpair*) ;
 struct qla_qpair* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_16 (int ,struct scsi_qla_host*,int,char*,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_9 ;
 int FUNC_18 (struct qla_hw_data*,int ,int,int ,int,int,int) ;
 int FUNC_19 (struct qla_hw_data*,int ,int ,int ,struct qla_qpair*,int) ;
 int FUNC_20 (struct scsi_qla_host*,TYPE_4__*) ;
 int VAR_10 ;
 int FUNC_21 (struct qla_qpair*,int ) ;
 int FUNC_22 (size_t,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int VAR_11 ;

struct qla_qpair *FUNC_25(struct scsi_qla_host *VAR_12, int VAR_13,
 int VAR_14, bool VAR_15)
{
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;
 struct qla_hw_data *VAR_19 = VAR_12->hw;
 uint16_t VAR_20 = 0;
 struct qla_qpair *VAR_21 = ((void*)0);
 struct qla_msix_entry *VAR_22;

 if (!(VAR_19->fw_attributes & VAR_1) || !VAR_19->flags.msix_enabled) {
  FUNC_17(VAR_9, VAR_12, 0x00181,
      "FW/Driver is not multi-queue capable.\n");
  return ((void*)0);
 }

 if (VAR_5 || VAR_6) {
  VAR_21 = FUNC_9(sizeof(struct qla_qpair), VAR_2);
  if (VAR_21 == ((void*)0)) {
   FUNC_17(VAR_9, VAR_12, 0x0182,
       "Failed to allocate memory for queue pair.\n");
   return ((void*)0);
  }

  VAR_21->hw = VAR_12->hw;
  VAR_21->vha = VAR_12;
  VAR_21->qp_lock_ptr = &VAR_21->qp_lock;
  FUNC_24(&VAR_21->qp_lock);
  VAR_21->use_shadow_reg = FUNC_4(VAR_19) ? 1 : 0;


  FUNC_14(&VAR_19->mq_lock);
  VAR_20 = FUNC_7(VAR_19->qpair_qid_map, VAR_19->max_qpairs);
  if (VAR_19->num_qpairs >= VAR_19->max_qpairs) {
   FUNC_15(&VAR_19->mq_lock);
   FUNC_17(VAR_9, VAR_12, 0x0183,
       "No resources to create additional q pair.\n");
   goto fail_qid_map;
  }
  VAR_19->num_qpairs++;
  FUNC_22(VAR_20, VAR_19->qpair_qid_map);
  VAR_19->queue_pair_map[VAR_20] = VAR_21;
  VAR_21->id = VAR_20;
  VAR_21->vp_idx = VAR_14;
  VAR_21->fw_started = VAR_19->flags.fw_started;
  FUNC_0(&VAR_21->hints_list);
  VAR_21->chip_reset = VAR_19->base_qpair->chip_reset;
  VAR_21->enable_class_2 = VAR_19->base_qpair->enable_class_2;
  VAR_21->enable_explicit_conf =
      VAR_19->base_qpair->enable_explicit_conf;

  for (VAR_18 = 0; VAR_18 < VAR_19->msix_count; VAR_18++) {
   VAR_22 = &VAR_19->msix_entries[VAR_18];
   if (VAR_22->in_use)
    continue;
   VAR_21->msix = VAR_22;
   FUNC_16(VAR_8, VAR_12, 0xc00f,
       "Vector %x selected for qpair\n", VAR_22->vector);
   break;
  }
  if (!VAR_21->msix) {
   FUNC_17(VAR_9, VAR_12, 0x0184,
       "Out of MSI-X vectors!.\n");
   goto fail_msix;
  }

  VAR_21->msix->in_use = 1;
  FUNC_10(&VAR_21->qp_list_elem, &VAR_12->qp_list);
  VAR_21->pdev = VAR_19->pdev;
  if (FUNC_1(VAR_19) || FUNC_3(VAR_19) || FUNC_2(VAR_19))
   VAR_21->reqq_start_iocbs = VAR_10;

  FUNC_15(&VAR_19->mq_lock);


  VAR_16 = FUNC_19(VAR_19, 0, 0, 0, VAR_21, VAR_15);
  if (!VAR_16) {
   FUNC_17(VAR_9, VAR_12, 0x0185,
       "Failed to create response queue.\n");
   goto fail_rsp;
  }

  VAR_21->rsp = VAR_19->rsp_q_map[VAR_16];


  VAR_17 = FUNC_18(VAR_19, 0, VAR_14, 0, VAR_16, VAR_13,
      VAR_15);
  if (!VAR_17) {
   FUNC_17(VAR_9, VAR_12, 0x0186,
       "Failed to create request queue.\n");
   goto fail_req;
  }

  VAR_21->req = VAR_19->req_q_map[VAR_17];
  VAR_21->rsp->req = VAR_21->req;
  VAR_21->rsp->qpair = VAR_21;

  FUNC_21(VAR_21, FUNC_23());

  if (FUNC_5(VAR_19) && VAR_4) {
   if (VAR_19->fw_attributes & VAR_0)
    VAR_21->difdix_supported = 1;
  }

  VAR_21->srb_mempool = FUNC_13(VAR_3, VAR_11);
  if (!VAR_21->srb_mempool) {
   FUNC_17(VAR_9, VAR_12, 0xd036,
       "Failed to create srb mempool for qpair %d\n",
       VAR_21->id);
   goto fail_mempool;
  }


  VAR_21->online = 1;

  if (!VAR_12->flags.qpairs_available)
   VAR_12->flags.qpairs_available = 1;

  FUNC_16(VAR_8, VAR_12, 0xc00d,
      "Request/Response queue pair created, id %d\n",
      VAR_21->id);
  FUNC_16(VAR_7, VAR_12, 0x0187,
      "Request/Response queue pair created, id %d\n",
      VAR_21->id);
 }
 return VAR_21;

fail_mempool:
fail_req:
 FUNC_20(VAR_12, VAR_21->rsp);
fail_rsp:
 FUNC_14(&VAR_19->mq_lock);
 VAR_21->msix->in_use = 0;
 FUNC_11(&VAR_21->qp_list_elem);
 if (FUNC_12(&VAR_12->qp_list))
  VAR_12->flags.qpairs_available = 0;
fail_msix:
 VAR_19->queue_pair_map[VAR_20] = ((void*)0);
 FUNC_6(VAR_20, VAR_19->qpair_qid_map);
 VAR_19->num_qpairs--;
 FUNC_15(&VAR_19->mq_lock);
fail_qid_map:
 FUNC_8(VAR_21);
 return ((void*)0);
}
