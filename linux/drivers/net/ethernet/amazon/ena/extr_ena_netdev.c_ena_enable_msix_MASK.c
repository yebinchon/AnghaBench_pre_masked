
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int msix_vecs; int flags; int netdev; scalar_t__ num_queues; int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*,int) ;
 int FUNC_3 (struct ena_adapter*,int ,int ,char*,...) ;
 int FUNC_4 (struct ena_adapter*,int ,int ,char*,int,int) ;
 int FUNC_5 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct ena_adapter *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 if (FUNC_8(VAR_1, &VAR_7->flags)) {
  FUNC_3(VAR_7, VAR_6, VAR_7->netdev,
     "Error, MSI-X is already enabled\n");
  return -VAR_4;
 }


 VAR_9 = FUNC_0(VAR_8);
 FUNC_2(VAR_7, VAR_6, VAR_7->netdev,
    "trying to enable MSI-X, vectors %d\n", VAR_9);

 VAR_10 = FUNC_6(VAR_7->pdev, VAR_2,
     VAR_9, VAR_5);

 if (VAR_10 < 0) {
  FUNC_3(VAR_7, VAR_6, VAR_7->netdev,
     "Failed to enable MSI-X. irq_cnt %d\n", VAR_10);
  return -VAR_3;
 }

 if (VAR_10 != VAR_9) {
  FUNC_4(VAR_7, VAR_6, VAR_7->netdev,
        "enable only %d MSI-X (out of %d), reduce the number of queues\n",
        VAR_10, VAR_9);
  VAR_7->num_queues = VAR_10 - VAR_0;
 }

 if (FUNC_1(VAR_7))
  FUNC_5(VAR_7, VAR_6, VAR_7->netdev,
      "Failed to map IRQs to CPUs\n");

 VAR_7->msix_vecs = VAR_10;
 FUNC_7(VAR_1, &VAR_7->flags);

 return 0;
}
