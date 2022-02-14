
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {void* b_addr; struct page** b_pages; scalar_t__ b_offset; } ;
struct page {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct page*) ;

void *
FUNC_1(
 struct xfs_buf *VAR_2,
 size_t VAR_3)
{
 struct page *VAR_4;

 if (VAR_2->b_addr)
  return VAR_2->b_addr + VAR_3;

 VAR_3 += VAR_2->b_offset;
 VAR_4 = VAR_2->b_pages[VAR_3 >> VAR_0];
 return FUNC_0(VAR_4) + (VAR_3 & (VAR_1-1));
}
