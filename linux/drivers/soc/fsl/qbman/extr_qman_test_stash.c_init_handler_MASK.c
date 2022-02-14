
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* fq_ctrl; } ;
struct TYPE_3__ {int dqrr; } ;
struct qm_mcc_initfq {TYPE_2__ fqd; void* we_mask; TYPE_1__ cb; } ;
struct hp_handler {scalar_t__ processor_id; struct qm_mcc_initfq tx; int fqid_tx; struct qm_mcc_initfq rx; int fqid_rx; } ;
typedef int opts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct qm_mcc_initfq*,int ,int) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,struct qm_mcc_initfq*) ;
 int FUNC_5 (struct qm_mcc_initfq*,int,struct qm_mcc_initfq*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_10 ;
 struct hp_handler* VAR_11 ;

__attribute__((used)) static int FUNC_7(void *VAR_12)
{
 struct qm_mcc_initfq VAR_13;
 struct hp_handler *VAR_14 = VAR_12;
 int VAR_15;

 if (VAR_14->processor_id != FUNC_6()) {
  VAR_15 = -VAR_0;
  goto failed;
 }

 FUNC_1(&VAR_14->rx, 0, sizeof(VAR_14->rx));
 if (VAR_14 == VAR_11)
  VAR_14->rx.cb.dqrr = VAR_10;
 else
  VAR_14->rx.cb.dqrr = VAR_9;
 VAR_15 = FUNC_4(VAR_14->fqid_rx, 0, &VAR_14->rx);
 if (VAR_15) {
  FUNC_2("qman_create_fq(rx) failed");
  goto failed;
 }
 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.we_mask = FUNC_0(VAR_6 |
       VAR_5);
 VAR_13.fqd.fq_ctrl = FUNC_0(VAR_4);
 FUNC_3(&VAR_13.fqd, 0, VAR_8, VAR_7);
 VAR_15 = FUNC_5(&VAR_14->rx, VAR_3 |
      VAR_2, &VAR_13);
 if (VAR_15) {
  FUNC_2("qman_init_fq(rx) failed");
  goto failed;
 }

 FUNC_1(&VAR_14->tx, 0, sizeof(VAR_14->tx));
 VAR_15 = FUNC_4(VAR_14->fqid_tx, VAR_1,
        &VAR_14->tx);
 if (VAR_15) {
  FUNC_2("qman_create_fq(tx) failed");
  goto failed;
 }

 return 0;
failed:
 return VAR_15;
}
