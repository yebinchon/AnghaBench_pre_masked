
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stmmac_tc_entry {scalar_t__ prio; scalar_t__ is_frag; scalar_t__ is_last; scalar_t__ in_hw; int in_use; } ;



__attribute__((used)) static struct stmmac_tc_entry *
FUNC_0(struct stmmac_tc_entry *VAR_0,
       unsigned int VAR_1, u32 VAR_2)
{
 struct stmmac_tc_entry *VAR_3;
 u32 VAR_4 = ~0x0;
 int VAR_5, VAR_6;
 bool VAR_7 = 0;

 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--) {
  VAR_3 = &VAR_0[VAR_5];


  if (!VAR_3->in_use)
   continue;

  if (VAR_3->in_hw)
   continue;

  if (VAR_3->is_last)
   continue;

  if (VAR_3->is_frag)
   continue;

  if (VAR_3->prio < VAR_2)
   continue;

  if (VAR_3->prio < VAR_4) {
   VAR_4 = VAR_3->prio;
   VAR_6 = VAR_5;
   VAR_7 = 1;
  }
 }

 if (VAR_7)
  return &VAR_0[VAR_6];
 return ((void*)0);
}
