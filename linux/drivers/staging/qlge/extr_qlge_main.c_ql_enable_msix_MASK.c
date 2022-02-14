
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ql_adapter {int intr_count; int ndev; int flags; int pdev; TYPE_1__* msi_x_entry; } ;
struct msix_entry {int dummy; } ;
struct TYPE_4__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*,int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ql_adapter *VAR_9)
{
 int VAR_10, VAR_11;


 if (VAR_8 == VAR_3) {



  VAR_9->msi_x_entry = FUNC_0(VAR_9->intr_count,
         sizeof(struct msix_entry),
         VAR_0);
  if (!VAR_9->msi_x_entry) {
   VAR_8 = VAR_4;
   goto msi;
  }

  for (VAR_10 = 0; VAR_10 < VAR_9->intr_count; VAR_10++)
   VAR_9->msi_x_entry[VAR_10].entry = VAR_10;

  VAR_11 = FUNC_6(VAR_9->pdev, VAR_9->msi_x_entry,
         1, VAR_9->intr_count);
  if (VAR_11 < 0) {
   FUNC_1(VAR_9->msi_x_entry);
   VAR_9->msi_x_entry = ((void*)0);
   FUNC_4(VAR_9, VAR_7, VAR_9->ndev,
       "MSI-X Enable failed, trying MSI.\n");
   VAR_8 = VAR_4;
  } else {
   VAR_9->intr_count = VAR_11;
   FUNC_7(VAR_5, &VAR_9->flags);
   FUNC_2(VAR_9, VAR_7, VAR_9->ndev,
       "MSI-X Enabled, got %d vectors.\n",
       VAR_9->intr_count);
   return;
  }
 }
msi:
 VAR_9->intr_count = 1;
 if (VAR_8 == VAR_4) {
  if (!FUNC_5(VAR_9->pdev)) {
   FUNC_7(VAR_6, &VAR_9->flags);
   FUNC_2(VAR_9, VAR_7, VAR_9->ndev,
       "Running with MSI interrupts.\n");
   return;
  }
 }
 VAR_8 = VAR_2;
 FUNC_3(VAR_9, VAR_7, VAR_1, VAR_9->ndev,
       "Running with legacy interrupts.\n");
}
