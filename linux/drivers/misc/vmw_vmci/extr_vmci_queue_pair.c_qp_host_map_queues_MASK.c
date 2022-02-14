
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vmci_queue_header {int dummy; } ;
struct vmci_queue {struct vmci_queue_header* q_header; TYPE_3__* kernel_if; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct page** header_page; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 struct vmci_queue_header* FUNC_1 (struct page**,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vmci_queue *VAR_7,
         struct vmci_queue *VAR_8)
{
 int VAR_9;

 if (!VAR_7->q_header || !VAR_8->q_header) {
  struct page *VAR_10[2];

  if (VAR_7->q_header != VAR_8->q_header)
   return VAR_3;

  if (VAR_7->kernel_if->u.h.header_page == ((void*)0) ||
      *VAR_7->kernel_if->u.h.header_page == ((void*)0))
   return VAR_4;

  VAR_10[0] = *VAR_7->kernel_if->u.h.header_page;
  VAR_10[1] = *VAR_8->kernel_if->u.h.header_page;

  VAR_7->q_header = FUNC_1(VAR_10, 2, VAR_6, VAR_0);
  if (VAR_7->q_header != ((void*)0)) {
   VAR_8->q_header =
       (struct vmci_queue_header *)((u8 *)
        VAR_7->q_header +
        VAR_1);
   VAR_9 = VAR_5;
  } else {
   FUNC_0("vmap failed\n");
   VAR_9 = VAR_2;
  }
 } else {
  VAR_9 = VAR_5;
 }

 return VAR_9;
}
