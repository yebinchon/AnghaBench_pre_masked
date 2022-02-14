
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int retries; int flags; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,int ) ;
 int FUNC_2 (struct dasd_ccw_req*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_5(struct dasd_ccw_req * VAR_5, char *VAR_6)
{

 struct dasd_device *VAR_7 = VAR_5->startdev;

 VAR_5->function = FUNC_5;


 if (VAR_6[2] & VAR_4) {

  FUNC_0(VAR_2, VAR_7, "%s",
       "Command Reject - environmental data present");

  FUNC_2(VAR_5, VAR_6);

  VAR_5->retries = 5;

 } else if (VAR_6[1] & VAR_3) {
  FUNC_3(&VAR_7->cdev->dev, "An I/O request was rejected"
   " because writing is inhibited\n");
  VAR_5 = FUNC_1(VAR_5, VAR_0);
 } else {


  if (!FUNC_4(VAR_1, &VAR_5->flags))
   FUNC_3(&VAR_7->cdev->dev,
    "An error occurred in the DASD device driver, reason=09\n");

  VAR_5 = FUNC_1(VAR_5, VAR_0);
 }

 return VAR_5;

}
