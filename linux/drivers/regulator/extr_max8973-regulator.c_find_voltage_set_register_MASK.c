
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8973_chip {int* lru_index; int* curr_vout_val; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct max8973_chip *VAR_2,
  int VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;
 int VAR_8 = VAR_2->lru_index[VAR_0 - 1];
 int VAR_9 = VAR_0 - 1;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  if (VAR_2->curr_vout_val[VAR_2->lru_index[VAR_6]] == VAR_3) {
   VAR_8 = VAR_2->lru_index[VAR_6];
   VAR_9 = VAR_6;
   VAR_7 = 1;
   goto update_lru_index;
  }
 }

update_lru_index:
 for (VAR_6 = VAR_9; VAR_6 > 0; VAR_6--)
  VAR_2->lru_index[VAR_6] = VAR_2->lru_index[VAR_6 - 1];

 VAR_2->lru_index[0] = VAR_8;
 *VAR_5 = VAR_8;
 *VAR_4 = VAR_1 + VAR_8;
 return VAR_7;
}
