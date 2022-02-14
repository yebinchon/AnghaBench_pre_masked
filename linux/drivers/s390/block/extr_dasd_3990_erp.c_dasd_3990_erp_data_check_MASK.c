
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_6(struct dasd_ccw_req * VAR_4, char *VAR_5)
{

 struct dasd_device *VAR_6 = VAR_4->startdev;

 VAR_4->function = FUNC_6;

 if (VAR_5[2] & VAR_2) {


  FUNC_4(&VAR_6->cdev->dev,
       "Data recovered during retry with PCI "
       "fetch mode active\n");


  FUNC_5("No way to inform application about the possibly "
        "incorrect data");

 } else if (VAR_5[2] & VAR_3) {

  FUNC_0(VAR_0, VAR_6, "%s",
       "Uncorrectable data check recovered secondary "
       "addr of duplex pair");

  VAR_4 = FUNC_2(VAR_4, VAR_5);

 } else if (VAR_5[1] & VAR_1) {

  FUNC_0(VAR_0, VAR_6, "%s",
       "Uncorrectable data check with internal "
       "retry exhausted");

  VAR_4 = FUNC_1(VAR_4);

 } else {

  FUNC_0(VAR_0, VAR_6, "%s",
       "Uncorrectable data check with retry count "
       "exhausted...");

  VAR_4 = FUNC_3(VAR_4);
 }

 return VAR_4;

}
