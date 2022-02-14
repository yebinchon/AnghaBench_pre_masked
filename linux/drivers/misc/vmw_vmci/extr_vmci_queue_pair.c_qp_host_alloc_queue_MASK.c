
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_3__ {struct page** header_page; struct page** page; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct vmci_queue_kern_if {int host; TYPE_2__ u; scalar_t__ num_pages; int * mutex; } ;
struct vmci_queue {struct vmci_queue_kern_if* kernel_if; int * saved_header; int * q_header; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t const VAR_2 ;
 struct vmci_queue* FUNC_1 (size_t const,int ) ;

__attribute__((used)) static struct vmci_queue *FUNC_2(u64 VAR_3)
{
 struct vmci_queue *VAR_4;
 size_t VAR_5;
 u64 VAR_6;
 const size_t VAR_7 = sizeof(*VAR_4) + sizeof(*(VAR_4->kernel_if));

 if (VAR_3 > VAR_2 - VAR_1)
  return ((void*)0);
 VAR_6 = FUNC_0(VAR_3, VAR_1) + 1;
 if (VAR_6 > (VAR_2 - VAR_7) /
   sizeof(*VAR_4->kernel_if->u.h.page))
  return ((void*)0);

 VAR_5 = VAR_6 * sizeof(*VAR_4->kernel_if->u.h.page);

 VAR_4 = FUNC_1(VAR_7 + VAR_5, VAR_0);
 if (VAR_4) {
  VAR_4->q_header = ((void*)0);
  VAR_4->saved_header = ((void*)0);
  VAR_4->kernel_if = (struct vmci_queue_kern_if *)(VAR_4 + 1);
  VAR_4->kernel_if->host = 1;
  VAR_4->kernel_if->mutex = ((void*)0);
  VAR_4->kernel_if->num_pages = VAR_6;
  VAR_4->kernel_if->u.h.header_page =
      (struct page **)((u8 *)VAR_4 + VAR_7);
  VAR_4->kernel_if->u.h.page =
   &VAR_4->kernel_if->u.h.header_page[1];
 }

 return VAR_4;
}
