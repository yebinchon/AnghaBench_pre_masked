
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct ixgbe_ring {unsigned int next_to_clean; unsigned int next_to_use; unsigned int count; } ;



__attribute__((used)) static u64 FUNC_0(struct ixgbe_ring *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 VAR_1 = VAR_0->next_to_clean;
 VAR_2 = VAR_0->next_to_use;

 return ((VAR_1 <= VAR_2) ? VAR_2 : VAR_2 + VAR_0->count) - VAR_1;
}
