
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {int dummy; } ;
struct aq_nic_s {struct aq_ring_s** aq_ring_tx; } ;



void FUNC_0(struct aq_nic_s *VAR_0, unsigned int VAR_1,
   struct aq_ring_s *VAR_2)
{
 VAR_0->aq_ring_tx[VAR_1] = VAR_2;
}
