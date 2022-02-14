
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps62360_chip {int* lru_index; int* curr_vset_vsel; } ;



__attribute__((used)) static bool FUNC_0(struct tps62360_chip *VAR_0,
  int VAR_1, int *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;
 int VAR_5 = VAR_0->lru_index[3];
 int VAR_6 = 3;

 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  if (VAR_0->curr_vset_vsel[VAR_0->lru_index[VAR_3]] == VAR_1) {
   VAR_5 = VAR_0->lru_index[VAR_3];
   VAR_6 = VAR_3;
   VAR_4 = 1;
   goto update_lru_index;
  }
 }

update_lru_index:
 for (VAR_3 = VAR_6; VAR_3 > 0; VAR_3--)
  VAR_0->lru_index[VAR_3] = VAR_0->lru_index[VAR_3 - 1];

 VAR_0->lru_index[0] = VAR_5;
 *VAR_2 = VAR_5;
 return VAR_4;
}
