
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iavf_ring {scalar_t__ next_to_clean; scalar_t__ count; int tail; } ;


 scalar_t__ FUNC_0 (int ) ;

u32 FUNC_1(struct iavf_ring *VAR_0, bool VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = VAR_0->next_to_clean;
 VAR_3 = FUNC_0(VAR_0->tail);

 if (VAR_2 != VAR_3)
  return (VAR_2 < VAR_3) ?
   VAR_3 - VAR_2 : (VAR_3 + VAR_0->count - VAR_2);

 return 0;
}
