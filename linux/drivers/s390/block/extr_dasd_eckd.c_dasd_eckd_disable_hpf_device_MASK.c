
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {scalar_t__ fcx_max_data; } ;
struct dasd_device {TYPE_1__* cdev; struct dasd_eckd_private* private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_0->cdev->dev,
  "High Performance FICON disabled\n");
 VAR_1->fcx_max_data = 0;
}
