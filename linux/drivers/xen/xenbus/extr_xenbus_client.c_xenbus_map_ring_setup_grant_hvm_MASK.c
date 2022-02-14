
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_ring_valloc_hvm {unsigned long* phys_addrs; size_t idx; unsigned long* addrs; } ;


 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0,
         unsigned int VAR_1,
         unsigned int VAR_2,
         void *VAR_3)
{
 struct map_ring_valloc_hvm *VAR_4 = VAR_3;
 unsigned long VAR_5 = (unsigned long)FUNC_0(VAR_0);

 VAR_4->phys_addrs[VAR_4->idx] = VAR_5;
 VAR_4->addrs[VAR_4->idx] = VAR_5;

 VAR_4->idx++;
}
