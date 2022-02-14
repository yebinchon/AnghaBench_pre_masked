
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; scalar_t__ context; } ;
struct TYPE_2__ {int busy; int finished; int status; } ;
struct imon_context {TYPE_1__ tx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct imon_context *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = (struct imon_context *)VAR_0->context;
 if (!VAR_1)
  return;

 VAR_1->tx.status = VAR_0->status;


 VAR_1->tx.busy = 0;
 FUNC_1();
 FUNC_0(&VAR_1->tx.finished);
}
