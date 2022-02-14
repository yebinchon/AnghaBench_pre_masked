
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {int dummy; } ;
struct tape_device {int cdev_id; TYPE_1__* cdev; } ;
struct tape_3590_sense {int rc_rqc; int rac; } ;
struct irb {scalar_t__ ecw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_3 (struct tape_device*,struct tape_request*,struct irb*,int ) ;
 int FUNC_4 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_5 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_6 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_7 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_8 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_9 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_10 (struct tape_device*,struct irb*) ;
 int FUNC_11 (struct tape_device*,int ) ;
 int FUNC_12 (struct tape_device*,int ) ;

__attribute__((used)) static int
FUNC_13(struct tape_device *VAR_8, struct tape_request *VAR_9,
       struct irb *VAR_10)
{
 struct tape_3590_sense *VAR_11;

 VAR_11 = (struct tape_3590_sense *) VAR_10->ecw;

 FUNC_0(6, "Unit Check: RQC = %x\n", VAR_11->rc_rqc);






 switch (VAR_11->rc_rqc) {

 case 0x1110:
  FUNC_10(VAR_8, VAR_10);
  return FUNC_6(VAR_8, VAR_9, VAR_10);

 case 0x2011:
  FUNC_10(VAR_8, VAR_10);
  return FUNC_5(VAR_8, VAR_9, VAR_10);

 case 0x2230:
 case 0x2231:
  FUNC_10(VAR_8, VAR_10);
  return FUNC_8(VAR_8, VAR_9, VAR_10);
 case 0x2240:
  return FUNC_2(VAR_8, VAR_9, VAR_10);

 case 0x3010:
  FUNC_0(2, "(%08x): Backward at Beginning of Partition\n",
     VAR_8->cdev_id);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_4);
 case 0x3012:
  FUNC_0(2, "(%08x): Forward at End of Partition\n",
     VAR_8->cdev_id);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_4);
 case 0x3020:
  FUNC_0(2, "(%08x): End of Data Mark\n", VAR_8->cdev_id);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_4);

 case 0x3122:
  FUNC_0(2, "(%08x): Rewind Unload initiated\n",
     VAR_8->cdev_id);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_1);
 case 0x3123:
  FUNC_0(2, "(%08x): Rewind Unload complete\n",
     VAR_8->cdev_id);
  FUNC_12(VAR_8, VAR_6);
  FUNC_11(VAR_8, VAR_7);
  return FUNC_3(VAR_8, VAR_9, VAR_10, 0);

 case 0x4010:




  FUNC_12(VAR_8, VAR_6);
  FUNC_11(VAR_8, VAR_7);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_3);
 case 0x4012:

  FUNC_0(6, "(%08x): LONG BUSY\n", VAR_8->cdev_id);
  FUNC_10(VAR_8, VAR_10);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_0);
 case 0x4014:
  FUNC_0(6, "(%08x): Crypto LONG BUSY\n", VAR_8->cdev_id);
  return FUNC_4(VAR_8, VAR_9, VAR_10);

 case 0x5010:
  if (VAR_11->rac == 0xd0) {

   FUNC_10(VAR_8, VAR_10);
   return FUNC_9(VAR_8, VAR_9, VAR_10);
  }
  if (VAR_11->rac == 0x26) {

   FUNC_10(VAR_8, VAR_10);
   return FUNC_7(VAR_8, VAR_9,
          VAR_10);
  }
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_1);
 case 0x5020:
 case 0x5021:
 case 0x5022:
 case 0x5040:
 case 0x5041:
 case 0x5042:
  FUNC_10(VAR_8, VAR_10);
  return FUNC_9(VAR_8, VAR_9, VAR_10);

 case 0x5110:
 case 0x5111:
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_2);

 case 0x5120:
 case 0x1120:
  FUNC_12(VAR_8, VAR_6);
  FUNC_11(VAR_8, VAR_7);
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_3);

 case 0x6020:
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_2);

 case 0x8011:
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_5);
 case 0x8013:
  FUNC_1 (&VAR_8->cdev->dev, "A different host has privileged"
   " access to the tape unit\n");
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_5);
 default:
  return FUNC_3(VAR_8, VAR_9, VAR_10, -VAR_1);
 }
}
