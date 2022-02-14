
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cosm_device {int state; int cosm_mutex; } ;





 int FUNC_0 (struct cosm_device*,int) ;
 struct cosm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct cosm_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->cosm_mutex);
 switch (VAR_1->state) {






 case 129:
 case 130:
 case 128:
  FUNC_3(&VAR_1->cosm_mutex);
  FUNC_0(VAR_1, 0);
  break;
 default:
  FUNC_3(&VAR_1->cosm_mutex);
  break;
 }
 return 0;
}
