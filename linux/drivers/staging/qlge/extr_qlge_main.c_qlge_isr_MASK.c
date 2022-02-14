
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rx_ring {int napi; struct ql_adapter* qdev; } ;
struct ql_adapter {int ndev; int mpi_work; int workqueue; int hw_lock; struct intr_context* intr_context; } ;
struct intr_context {int irq_mask; int intr; int irq_cnt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_5 (struct ql_adapter*,int ,int ,int ,char*) ;
 int FUNC_6 (struct ql_adapter*,int ) ;
 int FUNC_7 (struct ql_adapter*,int ) ;
 int FUNC_8 (struct ql_adapter*) ;
 int FUNC_9 (struct ql_adapter*,int ) ;
 int FUNC_10 (struct ql_adapter*,int ,int) ;
 int FUNC_11 (int ,int ,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_10, void *VAR_11)
{
 struct rx_ring *VAR_12 = VAR_11;
 struct ql_adapter *VAR_13 = VAR_12->qdev;
 struct intr_context *VAR_14 = &VAR_13->intr_context[0];
 u32 VAR_15;
 int VAR_16 = 0;

 FUNC_13(&VAR_13->hw_lock);
 if (FUNC_0(&VAR_13->intr_context[0].irq_cnt)) {
  FUNC_5(VAR_13, VAR_9, VAR_6, VAR_13->ndev,
        "Shared Interrupt, Not ours!\n");
  FUNC_14(&VAR_13->hw_lock);
  return VAR_4;
 }
 FUNC_14(&VAR_13->hw_lock);

 VAR_15 = FUNC_6(VAR_13, VAR_14->intr);




 if (VAR_15 & VAR_7) {
  FUNC_8(VAR_13);
  FUNC_2(VAR_13->ndev, "Got fatal error, STS = %x.\n", VAR_15);
  VAR_15 = FUNC_9(VAR_13, VAR_0);
  FUNC_2(VAR_13->ndev, "Resetting chip. "
     "Error Status Register = 0x%x\n", VAR_15);
  return VAR_3;
 }




 if ((VAR_15 & VAR_8) &&
  (FUNC_9(VAR_13, VAR_1) & VAR_2)) {




  FUNC_3(VAR_13, VAR_9, VAR_13->ndev,
     "Got MPI processor interrupt.\n");
  FUNC_6(VAR_13, VAR_14->intr);
  FUNC_10(VAR_13, VAR_1, (VAR_2 << 16));
  FUNC_11(FUNC_12(),
    VAR_13->workqueue, &VAR_13->mpi_work, 0);
  VAR_16++;
 }






 VAR_15 = FUNC_9(VAR_13, VAR_5);
 if (VAR_15 & VAR_14->irq_mask) {
  FUNC_4(VAR_13, VAR_9, VAR_13->ndev,
      "Waking handler for rx_ring[0].\n");
  FUNC_6(VAR_13, VAR_14->intr);
  FUNC_1(&VAR_12->napi);
  VAR_16++;
 }
 FUNC_7(VAR_13, VAR_14->intr);
 return VAR_16 ? VAR_3 : VAR_4;
}
