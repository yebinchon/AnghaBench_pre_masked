
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_ring_container {int count; struct igc_ring* ring; } ;
struct igc_ring {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct igc_ring *VAR_0,
    struct igc_ring_container *VAR_1)
{
 VAR_1->ring = VAR_0;
 VAR_1->count++;
}
