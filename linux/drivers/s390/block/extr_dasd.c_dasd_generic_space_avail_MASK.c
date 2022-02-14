
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
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct dasd_device*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dasd_device *VAR_3)
{
 FUNC_5(&VAR_3->cdev->dev, "Extent pool space is available\n");
 FUNC_0(VAR_1, VAR_3, "%s", "space available");

 FUNC_2(VAR_3, VAR_0);
 FUNC_4(VAR_3);

 if (VAR_3->block) {
  FUNC_3(VAR_3->block);
  if (VAR_3->block->request_queue)
   FUNC_1(VAR_3->block->request_queue, 1);
 }
 if (!VAR_3->stopped)
  FUNC_6(&VAR_2);
}
