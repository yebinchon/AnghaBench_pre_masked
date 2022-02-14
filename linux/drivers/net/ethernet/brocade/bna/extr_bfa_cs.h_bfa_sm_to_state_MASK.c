
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sm_table {scalar_t__ sm; int state; } ;
typedef scalar_t__ bfa_sm_t ;



__attribute__((used)) static inline int
FUNC_0(const struct bfa_sm_table *VAR_0, bfa_sm_t VAR_1)
{
 int VAR_2 = 0;

 while (VAR_0[VAR_2].sm && VAR_0[VAR_2].sm != VAR_1)
  VAR_2++;
 return VAR_0[VAR_2].state;
}
