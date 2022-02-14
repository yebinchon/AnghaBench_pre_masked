
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_window {int offset; scalar_t__ type; TYPE_1__* pinned_pages; } ;
struct page {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct page*) ;

__attribute__((used)) static inline
void *FUNC_1(off_t VAR_3, struct scif_window *VAR_4, size_t VAR_5)
{
 int VAR_6 = (VAR_3 - VAR_4->offset) >> VAR_1;
 off_t VAR_7 = VAR_3 & ~VAR_0;
 void *VAR_8 = ((void*)0);

 if (VAR_4->type == VAR_2) {
  struct page **VAR_9 = VAR_4->pinned_pages->pages;

  VAR_8 = FUNC_0(VAR_9[VAR_6]) + VAR_7;
 }
 return VAR_8;
}
