
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_modedef {struct device** devs; struct cdev** cdevs; } ;
struct scsi_tape {int index; struct st_modedef* modes; TYPE_2__* device; TYPE_1__* disk; } ;
struct device {int dummy; } ;
struct cdev {int * ops; int owner; } ;
typedef int dev_t ;
struct TYPE_4__ {int sdev_gendev; } ;
struct TYPE_3__ {char* disk_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (struct cdev*,int ,int) ;
 struct cdev* FUNC_5 () ;
 int FUNC_6 (struct cdev*) ;
 struct device* FUNC_7 (int *,int *,int ,struct st_modedef*,char*,char*) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (char*,int,char*,char*,char*,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct scsi_tape *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 dev_t VAR_12;
 struct cdev *VAR_13;
 struct device *VAR_14;
 struct st_modedef *VAR_15 = &(VAR_7->modes[VAR_8]);
 char VAR_16[10];
 int VAR_17 = VAR_7->index;

 VAR_12 = FUNC_1(VAR_1, FUNC_3(VAR_17, VAR_8, VAR_9));

 VAR_13 = FUNC_5();
 if (!VAR_13) {
  FUNC_8("st%d: out of memory. Device not attached.\n", VAR_17);
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_13->owner = VAR_3;
 VAR_13->ops = &VAR_4;
 VAR_15->cdevs[VAR_9] = VAR_13;

 VAR_11 = FUNC_4(VAR_13, VAR_12, 1);
 if (VAR_11) {
  FUNC_8("st%d: Can't add %s-rewind mode %d\n", VAR_17,
         VAR_9 ? "non" : "auto", VAR_8);
  FUNC_8("st%d: Device not attached.\n", VAR_17);
  goto out_free;
 }

 VAR_10 = VAR_8 << (4 - VAR_2);
 FUNC_9(VAR_16, 10, "%s%s%s", VAR_9 ? "n" : "",
   VAR_7->disk->disk_name, VAR_5[VAR_10]);

 VAR_14 = FUNC_7(&VAR_6, &VAR_7->device->sdev_gendev,
       VAR_12, &VAR_7->modes[VAR_8], "%s", VAR_16);
 if (FUNC_0(VAR_14)) {
  FUNC_8("st%d: device_create failed\n", VAR_17);
  VAR_11 = FUNC_2(VAR_14);
  goto out_free;
 }

 VAR_15->devs[VAR_9] = VAR_14;

 return 0;
out_free:
 FUNC_6(VAR_15->cdevs[VAR_9]);
out:
 VAR_15->cdevs[VAR_9] = ((void*)0);
 VAR_15->devs[VAR_9] = ((void*)0);
 return VAR_11;
}
