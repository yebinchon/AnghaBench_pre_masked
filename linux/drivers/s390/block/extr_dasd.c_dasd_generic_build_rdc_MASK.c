
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int expires; int retries; int status; int buildclk; struct dasd_device* memdev; struct dasd_device* startdev; scalar_t__ data; struct ccw1* cpaddr; } ;
struct ccw1 {int count; scalar_t__ flags; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (int,int,int,struct dasd_device*,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_4(struct dasd_device *VAR_3,
         int VAR_4,
         int VAR_5)
{
 struct dasd_ccw_req *VAR_6;
 struct ccw1 *VAR_7;

 VAR_6 = FUNC_1(VAR_5, 1 , VAR_4, VAR_3,
       ((void*)0));

 if (FUNC_0(VAR_6)) {

  FUNC_2(&VAR_3->cdev->dev,
    "An error occurred in the DASD device driver, "
    "reason=%s\n", "13");
  return VAR_6;
 }

 VAR_7 = VAR_6->cpaddr;
 VAR_7->cmd_code = VAR_0;
 VAR_7->cda = (__u32)(addr_t) VAR_6->data;
 VAR_7->flags = 0;
 VAR_7->count = VAR_4;
 VAR_6->startdev = VAR_3;
 VAR_6->memdev = VAR_3;
 VAR_6->expires = 10*VAR_2;
 VAR_6->retries = 256;
 VAR_6->buildclk = FUNC_3();
 VAR_6->status = VAR_1;
 return VAR_6;
}
