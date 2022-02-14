
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vmci_queue {TYPE_3__* kernel_if; } ;
struct TYPE_4__ {int header_page; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct TYPE_6__ {int num_pages; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (uintptr_t,int,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_3,
       u64 VAR_4,
       struct vmci_queue *VAR_5,
       struct vmci_queue *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_2;

 VAR_7 = FUNC_0((uintptr_t) VAR_3,
         VAR_5->kernel_if->num_pages,
         VAR_0,
         VAR_5->kernel_if->u.h.header_page);
 if (VAR_7 < (int)VAR_5->kernel_if->num_pages) {
  FUNC_1("get_user_pages_fast(produce) failed (retval=%d)",
   VAR_7);
  FUNC_2(VAR_5->kernel_if->u.h.header_page,
     VAR_7, 0);
  VAR_8 = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_0((uintptr_t) VAR_4,
         VAR_6->kernel_if->num_pages,
         VAR_0,
         VAR_6->kernel_if->u.h.header_page);
 if (VAR_7 < (int)VAR_6->kernel_if->num_pages) {
  FUNC_1("get_user_pages_fast(consume) failed (retval=%d)",
   VAR_7);
  FUNC_2(VAR_6->kernel_if->u.h.header_page,
     VAR_7, 0);
  FUNC_2(VAR_5->kernel_if->u.h.header_page,
     VAR_5->kernel_if->num_pages, 0);
  VAR_8 = VAR_1;
 }

 out:
 return VAR_8;
}
