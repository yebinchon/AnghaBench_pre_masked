
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {scalar_t__ sw_tail; scalar_t__ sw_head; scalar_t__ hw_head; } ;



int FUNC_0(struct aq_ring_s *VAR_0)
{
 VAR_0->hw_head = 0;
 VAR_0->sw_head = 0;
 VAR_0->sw_tail = 0;
 return 0;
}
