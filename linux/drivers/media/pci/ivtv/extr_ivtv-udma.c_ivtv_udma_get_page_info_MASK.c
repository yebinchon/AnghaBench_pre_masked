
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_dma_page_info {unsigned long uaddr; unsigned long offset; int tail; unsigned long first; unsigned long last; unsigned long page_count; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

void FUNC_0(struct ivtv_dma_page_info *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 VAR_2->uaddr = VAR_3 & VAR_0;
 VAR_2->offset = VAR_3 & ~VAR_0;
 VAR_2->tail = 1 + ((VAR_3+VAR_4-1) & ~VAR_0);
 VAR_2->first = (VAR_3 & VAR_0) >> VAR_1;
 VAR_2->last = ((VAR_3+VAR_4-1) & VAR_0) >> VAR_1;
 VAR_2->page_count = VAR_2->last - VAR_2->first + 1;
 if (VAR_2->page_count == 1) VAR_2->tail -= VAR_2->offset;
}
