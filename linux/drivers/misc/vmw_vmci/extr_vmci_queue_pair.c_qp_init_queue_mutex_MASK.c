
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_queue {TYPE_1__* kernel_if; } ;
struct TYPE_2__ {int * mutex; int __mutex; scalar_t__ host; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vmci_queue *VAR_0,
    struct vmci_queue *VAR_1)
{





 if (VAR_0->kernel_if->host) {
  VAR_0->kernel_if->mutex = &VAR_0->kernel_if->__mutex;
  VAR_1->kernel_if->mutex = &VAR_0->kernel_if->__mutex;
  FUNC_0(VAR_0->kernel_if->mutex);
 }
}
