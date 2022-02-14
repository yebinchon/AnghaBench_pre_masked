
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_oob {int dummy; } ;
struct sm_ftl {int block_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sm_ftl*,int,int,int) ;
 int FUNC_1 (struct sm_oob*) ;
 scalar_t__ FUNC_2 (struct sm_ftl*,int,int,int,int *,struct sm_oob*) ;

__attribute__((used)) static int FUNC_3(struct sm_ftl *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 struct sm_oob VAR_6;
 int VAR_7[] = { -3, 0, 0, 0 };
 int VAR_8 = 0;
 int VAR_9;





 for (VAR_5 = 0; VAR_5 < VAR_2->block_size;
     VAR_5 += VAR_1) {


  if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), &VAR_6))
   return -2;

  VAR_9 = FUNC_1(&VAR_6);

  if (VAR_7[VAR_8] != VAR_9)
   VAR_7[++VAR_8] = VAR_9;


  if (VAR_8 == 3)
   return -VAR_0;
 }


 if (VAR_8 == 2) {
  FUNC_0(VAR_2, VAR_3, VAR_4, 1);
  return 1;
 }

 return 0;
}
