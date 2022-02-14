
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int stopclk; int status; int lpm; int flags; int retries; struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int *) ;

struct dasd_ccw_req *
FUNC_6(struct dasd_ccw_req *VAR_4)
{
 struct dasd_device *VAR_5;

 VAR_5 = VAR_4->startdev;


        if (VAR_4->retries > 0) {
  FUNC_0(VAR_3, VAR_5,
                             "default ERP called (%i retries left)",
                             VAR_4->retries);
  if (!FUNC_5(VAR_2, &VAR_4->flags))
   VAR_4->lpm = FUNC_1(VAR_5);
  VAR_4->status = VAR_1;
        } else {
  FUNC_4("%s: default ERP has run out of retries and failed\n",
         FUNC_2(&VAR_5->cdev->dev));
  VAR_4->status = VAR_0;
  VAR_4->stopclk = FUNC_3();
        }
        return VAR_4;
}
