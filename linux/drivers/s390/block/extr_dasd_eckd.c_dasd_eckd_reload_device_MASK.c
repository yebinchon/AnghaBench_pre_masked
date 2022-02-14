
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_uid {int base_unit_addr; char* vduit; char* vendor; char* serial; int ssid; } ;
struct TYPE_3__ {int base_unit_addr; } ;
struct dasd_eckd_private {TYPE_1__ uid; } ;
struct dasd_device {TYPE_2__* cdev; struct dasd_eckd_private* private; } ;
typedef int print_uid ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,struct dasd_uid*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int,char*,char*,char*,int,int,...) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;
 int VAR_2, VAR_3;
 char VAR_4[60];
 struct dasd_uid VAR_5;
 unsigned long VAR_6;





 FUNC_0(VAR_0);

 FUNC_8(FUNC_6(VAR_0->cdev), VAR_6);
 VAR_3 = VAR_1->uid.base_unit_addr;
 FUNC_9(FUNC_6(VAR_0->cdev), VAR_6);


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto out_err;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto out_err;




 FUNC_1(VAR_0);

 FUNC_3(VAR_0, &VAR_5);

 if (VAR_3 != VAR_5.base_unit_addr) {
  if (FUNC_10(VAR_5.vduit) > 0)
   FUNC_7(VAR_4, sizeof(VAR_4),
     "%s.%s.%04x.%02x.%s", VAR_5.vendor, VAR_5.serial,
     VAR_5.ssid, VAR_5.base_unit_addr, VAR_5.vduit);
  else
   FUNC_7(VAR_4, sizeof(VAR_4),
     "%s.%s.%04x.%02x", VAR_5.vendor, VAR_5.serial,
     VAR_5.ssid, VAR_5.base_unit_addr);

  FUNC_5(&VAR_0->cdev->dev,
    "An Alias device was reassigned to a new base device "
    "with UID: %s\n", VAR_4);
 }
 return 0;

out_err:
 return -1;
}
