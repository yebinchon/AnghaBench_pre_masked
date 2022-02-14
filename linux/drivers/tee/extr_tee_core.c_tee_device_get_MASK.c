
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_device {int mutex; int num_users; int desc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct tee_device *VAR_0)
{
 FUNC_0(&VAR_0->mutex);
 if (!VAR_0->desc) {
  FUNC_1(&VAR_0->mutex);
  return 0;
 }
 VAR_0->num_users++;
 FUNC_1(&VAR_0->mutex);
 return 1;
}
