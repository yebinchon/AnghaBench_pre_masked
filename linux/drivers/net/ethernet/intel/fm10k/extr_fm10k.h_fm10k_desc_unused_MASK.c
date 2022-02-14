
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; scalar_t__ count; } ;
typedef scalar_t__ s16 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u16 FUNC_1(struct fm10k_ring *VAR_0)
{
 s16 VAR_1 = VAR_0->next_to_clean - VAR_0->next_to_use - 1;

 return FUNC_0(VAR_1 < 0) ? VAR_1 + VAR_0->count : VAR_1;
}
