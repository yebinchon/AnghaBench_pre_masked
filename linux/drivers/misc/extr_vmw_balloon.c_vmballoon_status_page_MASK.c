
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmballoon {struct page* page; TYPE_1__* batch_page; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned long status; int pfn; } ;


 unsigned long VAR_0 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_2(struct vmballoon *VAR_2, int VAR_3,
        struct page **VAR_4)
{
 if (FUNC_1(&VAR_1)) {

  *VAR_4 = FUNC_0(VAR_2->batch_page[VAR_3].pfn);
  return VAR_2->batch_page[VAR_3].status;
 }


 *VAR_4 = VAR_2->page;







 return VAR_0;
}
