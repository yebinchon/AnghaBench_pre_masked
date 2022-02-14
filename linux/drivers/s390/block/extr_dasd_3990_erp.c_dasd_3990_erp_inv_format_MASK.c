
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 char VAR_2 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,int ) ;
 int FUNC_3 (struct dasd_ccw_req*,char*) ;
 int FUNC_4 (int *,char*,char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_5(struct dasd_ccw_req * VAR_3, char *VAR_4)
{

 struct dasd_device *VAR_5 = VAR_3->startdev;

 VAR_3->function = FUNC_5;

 if (VAR_4[2] & VAR_2) {

  FUNC_0(VAR_1, VAR_5, "%s",
       "Track format error when destaging or "
       "staging data");

  FUNC_3(VAR_3, VAR_4);

  VAR_3 = FUNC_1(VAR_3, VAR_4);

 } else {

  FUNC_4(&VAR_5->cdev->dev,
   "An error occurred in the DASD device driver, "
   "reason=%s\n", "06");

  VAR_3 = FUNC_2(VAR_3, VAR_0);
 }

 return VAR_3;

}
