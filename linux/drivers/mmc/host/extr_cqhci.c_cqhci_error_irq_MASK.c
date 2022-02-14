
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_slot {scalar_t__ mrq; void* flags; } ;
struct cqhci_host {int lock; struct cqhci_slot* slot; scalar_t__ recovery_halt; int qcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int ,int ,int,int,int ) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (struct cqhci_host*,int ) ;
 int FUNC_7 (struct mmc_host*,scalar_t__,int) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (char*,int ,int ,int,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct mmc_host *VAR_2, u32 VAR_3, int VAR_4,
       int VAR_5)
{
 struct cqhci_host *VAR_6 = VAR_2->cqe_private;
 struct cqhci_slot *VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_10(&VAR_6->lock);

 VAR_8 = FUNC_6(VAR_6, VAR_0);

 FUNC_9("%s: cqhci: error IRQ status: 0x%08x cmd error %d data error %d TERRI: 0x%08x\n",
   FUNC_8(VAR_2), VAR_3, VAR_4, VAR_5, VAR_8);


 if (VAR_6->recovery_halt)
  goto out_unlock;

 if (!VAR_6->qcnt) {
  FUNC_4(1, "%s: cqhci: error when idle. IRQ status: 0x%08x cmd error %d data error %d TERRI: 0x%08x\n",
     FUNC_8(VAR_2), VAR_3, VAR_4, VAR_5,
     VAR_8);
  goto out_unlock;
 }

 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_0(VAR_8);
  VAR_7 = &VAR_6->slot[VAR_9];
  if (VAR_7->mrq) {
   VAR_7->flags = FUNC_5(VAR_4, VAR_5);
   FUNC_7(VAR_2, VAR_7->mrq, 1);
  }
 }

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  VAR_7 = &VAR_6->slot[VAR_9];
  if (VAR_7->mrq) {
   VAR_7->flags = FUNC_5(VAR_5, VAR_4);
   FUNC_7(VAR_2, VAR_7->mrq, 1);
  }
 }

 if (!VAR_6->recovery_halt) {




  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_7 = &VAR_6->slot[VAR_9];
   if (!VAR_7->mrq)
    continue;
   VAR_7->flags = FUNC_5(VAR_5, VAR_4);
   FUNC_7(VAR_2, VAR_7->mrq, 1);
   break;
  }
 }

out_unlock:
 FUNC_11(&VAR_6->lock);
}
