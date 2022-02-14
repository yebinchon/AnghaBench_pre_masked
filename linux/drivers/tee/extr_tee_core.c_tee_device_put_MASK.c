
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_device {int mutex; int c_no_users; int * desc; int num_users; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tee_device *VAR_0)
{
 FUNC_2(&VAR_0->mutex);

 if (!FUNC_0(!VAR_0->desc)) {
  VAR_0->num_users--;
  if (!VAR_0->num_users) {
   VAR_0->desc = ((void*)0);
   FUNC_1(&VAR_0->c_no_users);
  }
 }
 FUNC_3(&VAR_0->mutex);
}
