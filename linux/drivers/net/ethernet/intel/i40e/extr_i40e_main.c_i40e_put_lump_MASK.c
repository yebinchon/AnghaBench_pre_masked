
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_lump_tracking {int num_entries; int* list; int search_hint; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct i40e_lump_tracking *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5 = (VAR_4 | VAR_1);
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_2 || VAR_3 >= VAR_2->num_entries)
  return -VAR_0;

 for (VAR_7 = VAR_3;
      VAR_7 < VAR_2->num_entries && VAR_2->list[VAR_7] == VAR_5;
      VAR_7++) {
  VAR_2->list[VAR_7] = 0;
  VAR_6++;
 }

 if (VAR_6 && VAR_3 < VAR_2->search_hint)
  VAR_2->search_hint = VAR_3;

 return VAR_6;
}
