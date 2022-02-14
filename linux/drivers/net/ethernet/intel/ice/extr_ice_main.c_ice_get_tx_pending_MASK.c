
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; scalar_t__ count; } ;



__attribute__((used)) static u16 FUNC_0(struct ice_ring *VAR_0)
{
 u16 VAR_1, VAR_2;

 VAR_1 = VAR_0->next_to_clean;
 VAR_2 = VAR_0->next_to_use;

 if (VAR_1 != VAR_2)
  return (VAR_1 < VAR_2) ?
   VAR_2 - VAR_1 : (VAR_2 + VAR_0->count - VAR_1);
 return 0;
}
