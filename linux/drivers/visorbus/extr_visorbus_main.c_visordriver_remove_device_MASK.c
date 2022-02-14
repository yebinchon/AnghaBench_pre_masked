
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_driver {int (* remove ) (struct visor_device*) ;} ;
struct visor_device {int being_removed; int device; int visordriver_callback_lock; } ;
struct device {int driver; } ;


 int FUNC_0 (struct visor_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct visor_device*) ;
 struct visor_device* FUNC_5 (struct device*) ;
 struct visor_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct visor_device *VAR_1 = FUNC_5(VAR_0);
 struct visor_driver *VAR_2 = FUNC_6(VAR_0->driver);

 FUNC_1(&VAR_1->visordriver_callback_lock);
 VAR_1->being_removed = 1;
 VAR_2->remove(VAR_1);
 FUNC_2(&VAR_1->visordriver_callback_lock);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->device);
 return 0;
}
