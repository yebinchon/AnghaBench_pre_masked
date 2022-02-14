
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct log_group {TYPE_1__* ent; } ;
struct arena_info {int* log_index; } ;
struct TYPE_2__ {int seq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct log_group*,int) ;

__attribute__((used)) static int FUNC_2(struct arena_info *VAR_1, struct log_group *VAR_2)
{
 int VAR_3 = VAR_1->log_index[0];
 int VAR_4 = VAR_1->log_index[1];
 int VAR_5;






 if (FUNC_1(VAR_2, VAR_3) == 0) {
  VAR_2->ent[VAR_3].seq = FUNC_0(1);
  return 0;
 }

 if (FUNC_1(VAR_2, VAR_3) == FUNC_1(VAR_2, VAR_4))
  return -VAR_0;
 if (FUNC_1(VAR_2, VAR_3) + FUNC_1(VAR_2, VAR_4) > 5)
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_3) < FUNC_1(VAR_2, VAR_4)) {
  if ((FUNC_1(VAR_2, VAR_4) - FUNC_1(VAR_2, VAR_3)) == 1)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 } else {
  if ((FUNC_1(VAR_2, VAR_3) - FUNC_1(VAR_2, VAR_4)) == 1)
   VAR_5 = 1;
  else
   VAR_5 = 0;
 }

 return VAR_5;
}
