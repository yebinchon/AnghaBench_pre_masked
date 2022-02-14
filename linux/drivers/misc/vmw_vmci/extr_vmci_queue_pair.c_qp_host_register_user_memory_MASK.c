
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vmci_queue {TYPE_1__* kernel_if; } ;
struct vmci_qp_page_store {scalar_t__ pages; } ;
struct TYPE_2__ {int num_pages; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,struct vmci_queue*,struct vmci_queue*) ;

__attribute__((used)) static int FUNC_1(struct vmci_qp_page_store *VAR_1,
     struct vmci_queue *VAR_2,
     struct vmci_queue *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5;






 VAR_4 = VAR_1->pages;
 VAR_5 = VAR_1->pages +
     VAR_2->kernel_if->num_pages * VAR_0;
 return FUNC_0(VAR_4, VAR_5, VAR_2,
           VAR_3);
}
