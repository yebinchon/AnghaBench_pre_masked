
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {int * rotation_thread; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int ,struct sd*,char*) ;
 int FUNC_4 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sd*,scalar_t__,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_6 (struct sd*,int) ;
 scalar_t__** VAR_2 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct sd *VAR_3)
{
 int VAR_4, VAR_5 = 0;




 VAR_3->rotation_thread = FUNC_3(VAR_1,
          VAR_3, "rotation thread");
 if (FUNC_1(VAR_3->rotation_thread)) {
  VAR_5 = FUNC_2(VAR_3->rotation_thread);
  VAR_3->rotation_thread = ((void*)0);
  return VAR_5;
 }
 FUNC_7(VAR_3->rotation_thread);


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2) && !VAR_5; VAR_4++) {
  u8 VAR_6[2] = {VAR_2[VAR_4][2], VAR_2[VAR_4][3]};
  if (VAR_2[VAR_4][0] == VAR_0)
   VAR_5 = FUNC_5(VAR_3, VAR_2[VAR_4][1],
    VAR_6, 2);
  else
   VAR_5 = FUNC_4(VAR_3, VAR_2[VAR_4][1],
    VAR_6[0]);
 }
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_6(VAR_3, 1);
}
