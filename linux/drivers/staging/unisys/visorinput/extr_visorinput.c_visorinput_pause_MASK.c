
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* visorbus_state_complete_func ) (struct visor_device*,int ) ;
struct visorinput_devdata {int paused; int lock_visor_dev; scalar_t__ interrupts_enabled; } ;
struct visor_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct visorinput_devdata* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct visor_device*) ;

__attribute__((used)) static int FUNC_4(struct visor_device *VAR_2,
       visorbus_state_complete_func VAR_3)
{
 int VAR_4;
 struct visorinput_devdata *VAR_5 = FUNC_0(&VAR_2->device);

 if (!VAR_5) {
  VAR_4 = -VAR_1;
  goto out;
 }

 FUNC_1(&VAR_5->lock_visor_dev);
 if (VAR_5->paused) {
  VAR_4 = -VAR_0;
  goto out_locked;
 }
 if (VAR_5->interrupts_enabled)
  FUNC_3(VAR_2);





 VAR_5->paused = 1;
 VAR_3(VAR_2, 0);
 VAR_4 = 0;
out_locked:
 FUNC_2(&VAR_5->lock_visor_dev);
out:
 return VAR_4;
}
