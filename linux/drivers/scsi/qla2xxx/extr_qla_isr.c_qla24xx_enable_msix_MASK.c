
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rsp_que {struct qla_msix_entry* msix; } ;
struct qla_msix_entry {int vector; int entry; int have_irq; int in_use; int name; struct rsp_que* handle; } ;
struct TYPE_9__ {int msix_enabled; } ;
struct qla_hw_data {int msix_count; int max_req_queues; int max_rsp_queues; int mqenable; int pdev; int mqiobase; scalar_t__ msixbase; struct qla_msix_entry* msix_entries; TYPE_1__ flags; scalar_t__ max_qpairs; } ;
struct irq_affinity {int pre_vectors; } ;
struct TYPE_10__ {int irq_offset; int host_no; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_12__ {int handler; int name; } ;
struct TYPE_11__ {int name; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 struct qla_msix_entry* FUNC_7 (int,int,int ) ;
 TYPE_8__* VAR_6 ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (int ,int,int,int,struct irq_affinity*) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,TYPE_2__*,int,char*,int ,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ,int ,int,char*,scalar_t__) ;
 int FUNC_15 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_3__* VAR_14 ;
 int FUNC_17 (int,int ,int ,int ,struct rsp_que*) ;
 int FUNC_18 (int ,int,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_19(struct qla_hw_data *VAR_15, struct rsp_que *VAR_16)
{
 int VAR_17, VAR_18;
 struct qla_msix_entry *VAR_19;
 scsi_qla_host_t *VAR_20 = FUNC_11(VAR_15->pdev);
 int VAR_21 = VAR_5;
 struct irq_affinity VAR_22 = {
  .pre_vectors = VAR_5,
 };

 if (FUNC_5() && (VAR_7 != 0) &&
     FUNC_0(VAR_15)) {
  VAR_22.pre_vectors++;
  VAR_21++;
 }

 if (FUNC_6(VAR_15) || !VAR_15->mqiobase) {

  VAR_18 = FUNC_8(VAR_15->pdev, VAR_21,
      VAR_15->msix_count, VAR_3);
 } else
  VAR_18 = FUNC_9(VAR_15->pdev, VAR_21,
      VAR_15->msix_count, VAR_3 | VAR_2,
      &VAR_22);

 if (VAR_18 < 0) {
  FUNC_15(VAR_12, VAR_20, 0x00c7,
      "MSI-X: Failed to enable support, "
      "giving   up -- %d/%d.\n",
      VAR_15->msix_count, VAR_18);
  goto msix_out;
 } else if (VAR_18 < VAR_15->msix_count) {
  FUNC_15(VAR_13, VAR_20, 0x00c6,
      "MSI-X: Using %d vectors\n", VAR_18);
  VAR_15->msix_count = VAR_18;

  if (VAR_15->mqiobase && (VAR_8 || VAR_9)) {
   VAR_15->max_req_queues = VAR_15->msix_count - 1;


   if (FUNC_5())
    VAR_15->max_req_queues--;

   VAR_15->max_rsp_queues = VAR_15->max_req_queues;

   VAR_15->max_qpairs = VAR_15->max_req_queues - 1;
   FUNC_14(VAR_10, VAR_15->pdev, 0x0190,
       "Adjusted Max no of queues pairs: %d.\n", VAR_15->max_qpairs);
  }
 }
 VAR_20->irq_offset = VAR_22.pre_vectors;
 VAR_15->msix_entries = FUNC_7(VAR_15->msix_count,
       sizeof(struct qla_msix_entry),
       VAR_1);
 if (!VAR_15->msix_entries) {
  FUNC_15(VAR_12, VAR_20, 0x00c8,
      "Failed to allocate memory for ha->msix_entries.\n");
  VAR_18 = -VAR_0;
  goto free_irqs;
 }
 VAR_15->flags.msix_enabled = 1;

 for (VAR_17 = 0; VAR_17 < VAR_15->msix_count; VAR_17++) {
  VAR_19 = &VAR_15->msix_entries[VAR_17];
  VAR_19->vector = FUNC_12(VAR_15->pdev, VAR_17);
  VAR_19->entry = VAR_17;
  VAR_19->have_irq = 0;
  VAR_19->in_use = 0;
  VAR_19->handle = ((void*)0);
 }


 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_19 = &VAR_15->msix_entries[VAR_17];
  VAR_19->handle = VAR_16;
  VAR_16->msix = VAR_19;
  FUNC_18(VAR_19->name, sizeof(VAR_19->name),
      "qla2xxx%lu_%s", VAR_20->host_no, VAR_6[VAR_17].name);
  if (FUNC_1(VAR_15))
   VAR_18 = FUNC_17(VAR_19->vector,
    VAR_14[VAR_17].handler,
    0, VAR_14[VAR_17].name, VAR_16);
  else
   VAR_18 = FUNC_17(VAR_19->vector,
    VAR_6[VAR_17].handler,
    0, VAR_19->name, VAR_16);
  if (VAR_18)
   goto msix_register_fail;
  VAR_19->have_irq = 1;
  VAR_19->in_use = 1;
 }





 if (FUNC_5() && (VAR_7 != 0) &&
     FUNC_0(VAR_15)) {
  VAR_19 = &VAR_15->msix_entries[VAR_4];
  VAR_16->msix = VAR_19;
  VAR_19->handle = VAR_16;
  FUNC_18(VAR_19->name, sizeof(VAR_19->name),
      "qla2xxx%lu_%s", VAR_20->host_no,
      VAR_6[VAR_4].name);
  VAR_19->in_use = 1;
  VAR_18 = FUNC_17(VAR_19->vector,
   VAR_6[VAR_4].handler,
   0, VAR_19->name, VAR_16);
  VAR_19->have_irq = 1;
 }

msix_register_fail:
 if (VAR_18) {
  FUNC_15(VAR_12, VAR_20, 0x00cb,
      "MSI-X: unable to register handler -- %x/%d.\n",
      VAR_19->vector, VAR_18);
  FUNC_16(VAR_20);
  VAR_15->mqenable = 0;
  goto msix_out;
 }


 if (FUNC_4(VAR_15) || FUNC_2(VAR_15) || FUNC_3(VAR_15)) {
  if (VAR_15->msixbase && VAR_15->mqiobase &&
      (VAR_15->max_rsp_queues > 1 || VAR_15->max_req_queues > 1 ||
       VAR_8))
   VAR_15->mqenable = 1;
 } else
  if (VAR_15->mqiobase &&
      (VAR_15->max_rsp_queues > 1 || VAR_15->max_req_queues > 1 ||
       VAR_8))
   VAR_15->mqenable = 1;
 FUNC_13(VAR_11, VAR_20, 0xc005,
     "mqiobase=%p, max_rsp_queues=%d, max_req_queues=%d.\n",
     VAR_15->mqiobase, VAR_15->max_rsp_queues, VAR_15->max_req_queues);
 FUNC_13(VAR_10, VAR_20, 0x0055,
     "mqiobase=%p, max_rsp_queues=%d, max_req_queues=%d.\n",
     VAR_15->mqiobase, VAR_15->max_rsp_queues, VAR_15->max_req_queues);

msix_out:
 return VAR_18;

free_irqs:
 FUNC_10(VAR_15->pdev);
 goto msix_out;
}
