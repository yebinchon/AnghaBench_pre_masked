
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dasd_device {TYPE_3__* cdev; } ;
struct TYPE_5__ {scalar_t__ cpa; } ;
struct TYPE_8__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_4__ scsw; } ;
struct dasd_ccw_req {char* data; void* status; struct ccw1* cpaddr; TYPE_2__ irb; struct dasd_ccw_req* refers; struct dasd_device* startdev; } ;
struct ccw1 {scalar_t__ cda; } ;
struct DE_eckd_data {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_4(struct dasd_ccw_req * VAR_3, char *VAR_4)
{

 struct dasd_device *VAR_5 = VAR_3->startdev;
 __u32 VAR_6 = 0;
 struct dasd_ccw_req *VAR_7;
 struct dasd_ccw_req *VAR_8;
 char *VAR_9;
 struct ccw1 *VAR_10;

 FUNC_0(VAR_2, VAR_5, "%s",
      "Write not finished because of unexpected condition"
      " - follow on");


 VAR_7 = VAR_3;

 while (VAR_7->refers != ((void*)0)) {
  VAR_7 = VAR_7->refers;
 }

 if (FUNC_3(&VAR_7->irb.scsw)) {
  FUNC_0(VAR_2, VAR_5, "%s",
         "32 bit sense, action 1B, update,"
         " in transport mode - just retry");
  return VAR_3;
 }


 if (VAR_4[1] & 0x01) {
  FUNC_0(VAR_2, VAR_5, "%s",
       "Imprecise ending is set - just retry");

  VAR_3->status = VAR_1;

  return VAR_3;
 }



 VAR_6 = VAR_3->irb.scsw.cmd.cpa;

 if (VAR_6 == 0) {


  FUNC_1(&VAR_5->cdev->dev, "An error occurred in the DASD "
   "device driver, reason=%s\n", "02");

  VAR_3->status = VAR_0;

  return VAR_3;
 }

 VAR_8 = VAR_3;


 VAR_9 = VAR_8->data + sizeof(struct DE_eckd_data);

 if ((VAR_4[3] == 0x01) && (VAR_9[1] & 0x01)) {

  VAR_3->status = VAR_0;

  return VAR_3;
 }

 if ((VAR_4[7] & 0x3F) == 0x01) {

  VAR_9[0] = 0x81;

 } else if ((VAR_4[7] & 0x3F) == 0x03) {

  VAR_9[0] = 0xC3;

 } else {
  VAR_9[0] = VAR_4[7];
 }

 VAR_9[1] = VAR_4[8];
 VAR_9[2] = VAR_4[9];
 VAR_9[3] = VAR_4[3];
 VAR_9[4] = VAR_4[29];
 VAR_9[5] = VAR_4[30];
 VAR_9[7] = VAR_4[31];

 FUNC_2(&(VAR_9[8]), &(VAR_4[11]), 8);


 VAR_10 = VAR_8->cpaddr;
 VAR_10++;
 VAR_10++;
 VAR_10->cda = VAR_6;

 VAR_8->status = VAR_1;

 return VAR_8;

}
