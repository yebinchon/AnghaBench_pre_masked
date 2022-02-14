
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_driver {int (* rescan ) (struct device*) ;} ;
struct scsi_device {TYPE_1__* handler; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int (* rescan ) (struct scsi_device*) ;} ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct device*) ;
 struct scsi_device* FUNC_6 (struct device*) ;
 struct scsi_driver* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(struct device *VAR_0)
{
 struct scsi_device *VAR_1 = FUNC_6(VAR_0);

 FUNC_0(VAR_0);

 FUNC_3(VAR_1);

 if (VAR_1->handler && VAR_1->handler->rescan)
  VAR_1->handler->rescan(VAR_1);

 if (VAR_0->driver && FUNC_8(VAR_0->driver->owner)) {
  struct scsi_driver *VAR_2 = FUNC_7(VAR_0->driver);

  if (VAR_2->rescan)
   VAR_2->rescan(VAR_0);
  FUNC_2(VAR_0->driver->owner);
 }
 FUNC_1(VAR_0);
}
