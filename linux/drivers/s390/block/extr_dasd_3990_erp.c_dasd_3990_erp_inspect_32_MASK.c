
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_4 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_ccw_req*,int ) ;
 int FUNC_5 (struct dasd_ccw_req*,char*) ;
 int FUNC_6 (struct dasd_device*,char*) ;
 struct dasd_ccw_req* FUNC_7 (struct dasd_ccw_req*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_11(struct dasd_ccw_req * VAR_5, char *VAR_6)
{

 struct dasd_device *VAR_7 = VAR_5->startdev;

 VAR_5->function = FUNC_11;


 if ((VAR_6[6] & VAR_2) == VAR_2)
  FUNC_6(VAR_7, VAR_6);

 if (VAR_6[25] & VAR_1) {


  FUNC_5(VAR_5, VAR_6);

 } else {


  switch (VAR_6[25]) {

  case 0x00:
   FUNC_0(VAR_3, VAR_7, "%s",
        "ERP called for successful request"
        " - just retry");
   break;

  case 0x01:
   FUNC_9(&VAR_7->cdev->dev,
        "ERP failed for the DASD\n");

   VAR_5 = FUNC_4(VAR_5, VAR_0);
   break;

  case 0x02:
  case 0x03:
   VAR_5 = FUNC_7(VAR_5);
   break;

  case 0x0F:

   FUNC_9(&VAR_7->cdev->dev, "An error occurred in the "
    "DASD device driver, reason=%s\n", "08");

   VAR_5 = FUNC_4(VAR_5, VAR_0);
   break;

  case 0x10:
   VAR_5 = FUNC_1(VAR_5, VAR_6);
   break;

  case 0x15:


   FUNC_9(&VAR_7->cdev->dev,
    "An error occurred in the DASD device driver, "
    "reason=%s\n", "07");

   VAR_5 = FUNC_4(VAR_5, VAR_0);
   break;

  case 0x1B:

   VAR_5 = FUNC_2(VAR_5, VAR_6);
   break;

  case 0x1C:
   FUNC_8(&VAR_7->cdev->dev,
        "Data recovered during retry with PCI "
        "fetch mode active\n");


   FUNC_10
       ("Invalid data - No way to inform application "
        "about the possibly incorrect data");
   break;

  case 0x1D:
   FUNC_0(VAR_4, VAR_7, "%s",
        "A State change pending condition exists "
        "for the subsystem or device");

   VAR_5 = FUNC_3(VAR_5, VAR_6);
   break;

  case 0x1E:
   FUNC_0(VAR_4, VAR_7, "%s",
        "Busy condition exists "
        "for the subsystem or device");
                        VAR_5 = FUNC_3(VAR_5, VAR_6);
   break;

  default:
   break;
  }
 }

 return VAR_5;

}
