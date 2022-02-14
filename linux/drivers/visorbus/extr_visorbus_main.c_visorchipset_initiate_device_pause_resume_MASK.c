
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visor_driver {int (* pause ) (struct visor_device*,int ) ;int (* resume ) (struct visor_device*,int ) ;} ;
struct TYPE_2__ {int driver; } ;
struct visor_device {int pausing; int resuming; TYPE_1__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct visor_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct visor_device*,int ) ;
 int FUNC_2 (struct visor_device*,int ) ;
 struct visor_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct visor_device *VAR_3,
           bool VAR_4)
{
 int VAR_5;
 struct visor_driver *VAR_6;


 if (!VAR_3->device.driver)
  return 0;
 if (VAR_3->pausing || VAR_3->resuming)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3->device.driver);
 if (VAR_4) {
  VAR_3->pausing = 1;
  VAR_5 = VAR_6->pause(VAR_3, VAR_1);
 } else {




  FUNC_0(VAR_3);
  VAR_3->resuming = 1;
  VAR_5 = VAR_6->resume(VAR_3, VAR_2);
 }
 return VAR_5;
}
