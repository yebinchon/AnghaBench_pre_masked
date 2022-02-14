
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cqhci_host {int waiting_for_idle; int lock; scalar_t__ recovery_halt; int qcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct cqhci_host *VAR_1, int *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_4 = !VAR_1->qcnt || VAR_1->recovery_halt;
 *VAR_2 = VAR_1->recovery_halt ? -VAR_0 : 0;
 VAR_1->waiting_for_idle = !VAR_4;
 FUNC_1(&VAR_1->lock, VAR_3);

 return VAR_4;
}
