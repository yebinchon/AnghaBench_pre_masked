
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int flags; struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_3(struct dasd_ccw_req * VAR_2, char *VAR_3)
{

 struct dasd_device *VAR_4 = VAR_2->startdev;






 if (!FUNC_2(VAR_1, &VAR_2->flags))
  FUNC_1(&VAR_4->cdev->dev,
   "The specified record was not found\n");

 return FUNC_0(VAR_2, VAR_0);

}
