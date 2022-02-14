
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_bdr {int bd_count; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct enetc_bdr *VAR_0, int *VAR_1)
{
 if (FUNC_0(++*VAR_1 == VAR_0->bd_count))
  *VAR_1 = 0;
}
