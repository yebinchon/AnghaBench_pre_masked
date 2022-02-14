
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {struct page* page; scalar_t__ base_ni; scalar_t__ actx; scalar_t__ is_in_root; scalar_t__ entry; } ;
typedef TYPE_1__ ntfs_index_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(ntfs_index_context *VAR_1)
{
 if (VAR_1->entry) {
  if (VAR_1->is_in_root) {
   if (VAR_1->actx)
    FUNC_3(VAR_1->actx);
   if (VAR_1->base_ni)
    FUNC_6(VAR_1->base_ni);
  } else {
   struct page *VAR_2 = VAR_1->page;
   if (VAR_2) {
    FUNC_0(!FUNC_1(VAR_2));
    FUNC_5(VAR_2);
    FUNC_4(VAR_2);
   }
  }
 }
 FUNC_2(VAR_0, VAR_1);
 return;
}
