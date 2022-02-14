
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring_container {scalar_t__ next_update; int count; struct ixgbe_ring* ring; } ;
struct ixgbe_ring {struct ixgbe_ring* next; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ixgbe_ring *VAR_1,
      struct ixgbe_ring_container *VAR_2)
{
 VAR_1->next = VAR_2->ring;
 VAR_2->ring = VAR_1;
 VAR_2->count++;
 VAR_2->next_update = VAR_0 + 1;
}
