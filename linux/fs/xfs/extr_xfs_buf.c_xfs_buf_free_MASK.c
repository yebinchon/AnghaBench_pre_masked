
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int b_flags; size_t b_page_count; scalar_t__ b_addr; struct page** b_pages; scalar_t__ b_offset; int b_lru; } ;
typedef TYPE_1__ xfs_buf_t ;
typedef size_t uint ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (scalar_t__,size_t) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;

void
FUNC_10(
 xfs_buf_t *VAR_4)
{
 FUNC_6(VAR_4, VAR_0);

 FUNC_0(FUNC_5(&VAR_4->b_lru));

 if (VAR_4->b_flags & VAR_2) {
  uint VAR_5;

  if (FUNC_9(VAR_4))
   FUNC_7(VAR_4->b_addr - VAR_4->b_offset,
     VAR_4->b_page_count);

  for (VAR_5 = 0; VAR_5 < VAR_4->b_page_count; VAR_5++) {
   struct page *VAR_6 = VAR_4->b_pages[VAR_5];

   FUNC_1(VAR_6);
  }
 } else if (VAR_4->b_flags & VAR_1)
  FUNC_3(VAR_4->b_addr);
 FUNC_2(VAR_4);
 FUNC_8(VAR_4);
 FUNC_4(VAR_3, VAR_4);
}
