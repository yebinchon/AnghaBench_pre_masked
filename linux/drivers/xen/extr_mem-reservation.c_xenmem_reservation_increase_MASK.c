
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_pfn_t ;
struct xen_memory_reservation {int nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct xen_memory_reservation*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(int VAR_3, xen_pfn_t *VAR_4)
{
 struct xen_memory_reservation VAR_5 = {
  .address_bits = 0,
  .extent_order = VAR_1,
  .domid = VAR_0
 };


 FUNC_1(VAR_5.extent_start, VAR_4);
 VAR_5.nr_extents = VAR_3;
 return FUNC_0(VAR_2, &VAR_5);
}
