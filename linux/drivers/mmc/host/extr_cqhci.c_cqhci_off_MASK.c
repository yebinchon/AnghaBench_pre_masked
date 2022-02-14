
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {int cqe_on; struct cqhci_host* cqe_private; } ;
struct cqhci_host {TYPE_1__* ops; scalar_t__ recovery_halt; int enabled; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* disable ) (struct mmc_host*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cqhci_host*,int ) ;
 int FUNC_1 (struct cqhci_host*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct mmc_host*,int) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_3)
{
 struct cqhci_host *VAR_4 = VAR_3->cqe_private;
 ktime_t VAR_5;
 bool VAR_6;
 u32 VAR_7;

 if (!VAR_4->enabled || !VAR_3->cqe_on || VAR_4->recovery_halt)
  return;

 if (VAR_4->ops->disable)
  VAR_4->ops->disable(VAR_3, 0);

 FUNC_1(VAR_4, VAR_1, VAR_0);

 VAR_5 = FUNC_2(FUNC_4(), VAR_2);
 while (1) {
  VAR_6 = FUNC_3(FUNC_4(), VAR_5) > 0;
  VAR_7 = FUNC_0(VAR_4, VAR_0);
  if ((VAR_7 & VAR_1) || VAR_6)
   break;
 }

 if (VAR_6)
  FUNC_7("%s: cqhci: CQE stuck on\n", FUNC_5(VAR_3));
 else
  FUNC_6("%s: cqhci: CQE off\n", FUNC_5(VAR_3));

 VAR_3->cqe_on = 0;
}
