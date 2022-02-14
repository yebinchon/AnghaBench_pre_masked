
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sbp2_pointer {void* low; void* high; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(u64 VAR_0, struct sbp2_pointer *VAR_1)
{
 VAR_1->high = FUNC_0(VAR_0 >> 32);
 VAR_1->low = FUNC_0(VAR_0);
}
