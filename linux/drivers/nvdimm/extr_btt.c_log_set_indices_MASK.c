
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct log_group {int * ent; } ;
struct arena_info {scalar_t__ nfree; int* log_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct arena_info*,scalar_t__,struct log_group*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct arena_info*) ;

__attribute__((used)) static int FUNC_5(struct arena_info *VAR_1)
{
 bool VAR_2 = 0, VAR_3 = 1;
 int VAR_4, VAR_5[2] = {-1, -1};
 u32 VAR_6, VAR_7, VAR_8 = 0;
 struct log_group VAR_9;
 u32 VAR_10 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1->nfree; VAR_6++) {
  VAR_4 = FUNC_0(VAR_1, VAR_6, &VAR_9);
  if (VAR_4 < 0)
   return VAR_4;

  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if (!VAR_2) {
    if (FUNC_3(&VAR_9.ent[VAR_7])) {
     VAR_10++;
     continue;
    } else {

     if ((VAR_8 == 1) &&
      (VAR_7 == VAR_5[0]))
      continue;

     VAR_5[VAR_8] = VAR_7;
     VAR_8++;
    }
    if (VAR_8 == 2) {

     VAR_2 = 1;
    } else if (VAR_8 > 2) {

     return -VAR_0;
    }
   } else {






    if (VAR_7 == VAR_5[0]) {

     if (FUNC_3(&VAR_9.ent[VAR_7]))
      return -VAR_0;
    } else if (VAR_7 == VAR_5[1]) {
     ;






    } else {

     if (!FUNC_3(&VAR_9.ent[VAR_7]))
      return -VAR_0;
    }
   }
  }





  if (VAR_10 < 3)
   VAR_3 = 0;
  VAR_10 = 0;
 }

 if (!VAR_3 && !VAR_2)
  return -VAR_0;





 if (VAR_3)
  VAR_5[1] = 1;





 if ((VAR_5[0] == 0) && ((VAR_5[1] == 1) || (VAR_5[1] == 2)))
  ;
 else {
  FUNC_2(FUNC_4(VAR_1), "Found an unknown padding scheme\n");
  return -VAR_0;
 }

 VAR_1->log_index[0] = VAR_5[0];
 VAR_1->log_index[1] = VAR_5[1];
 FUNC_1(FUNC_4(VAR_1), "log_index_0 = %d\n", VAR_5[0]);
 FUNC_1(FUNC_4(VAR_1), "log_index_1 = %d\n", VAR_5[1]);
 return 0;
}
