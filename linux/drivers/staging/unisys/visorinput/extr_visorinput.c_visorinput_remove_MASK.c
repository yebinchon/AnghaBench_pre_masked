
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorinput_devdata {int visorinput_dev; int lock_visor_dev; } ;
struct visor_device {int device; } ;


 struct visorinput_devdata* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct visorinput_devdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct visor_device*) ;

__attribute__((used)) static void FUNC_7(struct visor_device *VAR_0)
{
 struct visorinput_devdata *VAR_1 = FUNC_0(&VAR_0->device);

 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->lock_visor_dev);
 FUNC_6(VAR_0);






 FUNC_1(&VAR_0->device, ((void*)0));
 FUNC_4(&VAR_1->lock_visor_dev);

 FUNC_5(VAR_1->visorinput_dev);
 FUNC_2(VAR_1);
}
