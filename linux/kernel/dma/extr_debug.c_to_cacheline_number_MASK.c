
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {int pfn; int offset; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static phys_addr_t FUNC_0(struct dma_debug_entry *VAR_2)
{
 return (VAR_2->pfn << VAR_0) +
  (VAR_2->offset >> VAR_1);
}
