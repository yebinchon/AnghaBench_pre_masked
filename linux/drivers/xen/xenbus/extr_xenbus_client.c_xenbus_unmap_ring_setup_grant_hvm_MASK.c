
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unmap_ring_vfree_hvm {unsigned long* addrs; size_t idx; } ;


 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2,
           void *VAR_3)
{
 struct unmap_ring_vfree_hvm *VAR_4 = VAR_3;

 VAR_4->addrs[VAR_4->idx] = (unsigned long)FUNC_0(VAR_0);

 VAR_4->idx++;
}
