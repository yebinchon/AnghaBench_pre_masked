
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int stopped; TYPE_2__* block; TYPE_1__* cdev; } ;
struct TYPE_4__ {scalar_t__ request_queue; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct dasd_device*,int) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dasd_device *VAR_4)
{
 FUNC_6(&VAR_4->cdev->dev, "A channel path to the device has become "
   "operational\n");
 FUNC_0(VAR_2, VAR_4, "%s", "path operational");
 FUNC_2(VAR_4, VAR_0);
 if (VAR_4->stopped & VAR_1) {
  FUNC_2(VAR_4, VAR_1);
  FUNC_3(VAR_4);
  return 1;
 }
 FUNC_5(VAR_4);
 if (VAR_4->block) {
  FUNC_4(VAR_4->block);
  if (VAR_4->block->request_queue)
   FUNC_1(VAR_4->block->request_queue,
          1);
  }

 if (!VAR_4->stopped)
  FUNC_7(&VAR_3);

 return 1;
}
