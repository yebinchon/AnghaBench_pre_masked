
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {long aux_nr_pages; unsigned long aux_pgoff; int * aux_pages; } ;
struct page {int dummy; } ;


 struct page* FUNC_0 (struct ring_buffer*,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 struct page* FUNC_2 (int ) ;

struct page *
FUNC_3(struct ring_buffer *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->aux_nr_pages) {

  if (VAR_1 > VAR_0->aux_pgoff + VAR_0->aux_nr_pages)
   return ((void*)0);


  if (VAR_1 >= VAR_0->aux_pgoff) {
   int VAR_2 = FUNC_1(VAR_1 - VAR_0->aux_pgoff, VAR_0->aux_nr_pages);
   return FUNC_2(VAR_0->aux_pages[VAR_2]);
  }
 }

 return FUNC_0(VAR_0, VAR_1);
}
