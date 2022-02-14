
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irb {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; TYPE_2__* cdev; } ;
struct dasd_ccw_req {int intrc; struct dasd_device* startdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* dump_sense ) (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;

void
FUNC_2(struct dasd_ccw_req *VAR_2, struct irb *VAR_3)
{
 struct dasd_device *VAR_4;

 VAR_4 = VAR_2->startdev;
 if (VAR_2->intrc == -VAR_1) {
  FUNC_0(&VAR_4->cdev->dev,
   "A timeout error occurred for cqr %p\n", VAR_2);
  return;
 }
 if (VAR_2->intrc == -VAR_0) {
  FUNC_0(&VAR_4->cdev->dev,
   "A transport error occurred for cqr %p\n", VAR_2);
  return;
 }

 if (VAR_4->discipline && VAR_4->discipline->dump_sense)
  VAR_4->discipline->dump_sense(VAR_4, VAR_2, VAR_3);
}
