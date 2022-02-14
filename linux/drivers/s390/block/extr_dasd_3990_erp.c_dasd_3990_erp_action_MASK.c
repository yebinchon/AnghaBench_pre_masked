
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int features; TYPE_2__* cdev; } ;
struct TYPE_3__ {int scsw; } ;
struct dasd_ccw_req {int blocklist; int status; struct dasd_ccw_req* refers; scalar_t__ lpm; int flags; TYPE_1__ irb; struct dasd_device* startdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct dasd_device*,char*,struct dasd_ccw_req*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*,struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_ccw_req*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

struct dasd_ccw_req *
FUNC_11(struct dasd_ccw_req * VAR_7)
{
 struct dasd_ccw_req *VAR_8 = ((void*)0);
 struct dasd_device *VAR_9 = VAR_7->startdev;
 struct dasd_ccw_req *VAR_10 = ((void*)0);

 if (VAR_9->features & VAR_3) {

  FUNC_5(&VAR_9->cdev->dev,
       "ERP chain at BEGINNING of ERP-ACTION\n");
  for (VAR_10 = VAR_7;
       VAR_10 != ((void*)0); VAR_10 = VAR_10->refers) {

   FUNC_5(&VAR_9->cdev->dev,
        "ERP %p (%02x) refers to %p\n",
        VAR_10, VAR_10->status,
        VAR_10->refers);
  }
 }


 if ((FUNC_8(&VAR_7->irb.scsw) == 0x00) &&
     (FUNC_9(&VAR_7->irb.scsw) ==
      (VAR_5 | VAR_6))) {

  FUNC_0(VAR_4, VAR_9,
       "ERP called for successful request %p"
       " - NO ERP necessary", VAR_7);

  VAR_7->status = VAR_0;

  return VAR_7;
 }


 VAR_8 = FUNC_4(VAR_7);

 if (VAR_8 == ((void*)0)) {

  VAR_8 = FUNC_2(VAR_7);
  if (FUNC_1(VAR_8))
   return VAR_8;
 } else {

  VAR_8 = FUNC_3(VAR_7, VAR_8);
 }







 if (FUNC_10(VAR_2, &VAR_8->flags) && VAR_7->lpm) {
  VAR_8->lpm = VAR_7->lpm;
 }

 if (VAR_9->features & VAR_3) {

  FUNC_5(&VAR_9->cdev->dev,
       "ERP chain at END of ERP-ACTION\n");
  for (VAR_10 = VAR_8;
       VAR_10 != ((void*)0); VAR_10 = VAR_10->refers) {

   FUNC_5(&VAR_9->cdev->dev,
        "ERP %p (%02x) refers to %p\n",
        VAR_10, VAR_10->status,
        VAR_10->refers);
  }
 }


 if (FUNC_7(&VAR_8->blocklist)) {
  VAR_7->status = VAR_1;

  FUNC_6(&VAR_8->blocklist, &VAR_7->blocklist);
 }



 return VAR_8;

}
