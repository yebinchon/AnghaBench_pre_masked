
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {scalar_t__ sw_tail; scalar_t__ sw_head; int size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct aq_ring_s *VAR_0)
{
 return (((VAR_0->sw_tail >= VAR_0->sw_head)) ?
  (VAR_0->size - 1) - VAR_0->sw_tail + VAR_0->sw_head :
  VAR_0->sw_head - VAR_0->sw_tail - 1);
}
