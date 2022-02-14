
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_driver {int (* probe ) (struct visor_device*) ;} ;
struct visor_device {int being_removed; int visordriver_callback_lock; int device; } ;
struct device {int driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct visor_device*) ;
 int FUNC_4 (struct visor_device*) ;
 struct visor_device* FUNC_5 (struct device*) ;
 struct visor_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 int VAR_1;
 struct visor_driver *VAR_2 = FUNC_6(VAR_0->driver);
 struct visor_device *VAR_3 = FUNC_5(VAR_0);

 FUNC_1(&VAR_3->visordriver_callback_lock);
 VAR_3->being_removed = 0;
 VAR_1 = VAR_2->probe(VAR_3);
 if (VAR_1) {
  FUNC_2(&VAR_3->visordriver_callback_lock);
  return VAR_1;
 }

 FUNC_0(&VAR_3->device);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->visordriver_callback_lock);
 return 0;
}
