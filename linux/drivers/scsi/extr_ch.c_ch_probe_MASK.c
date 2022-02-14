
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int minor; int name; struct scsi_device* device; int ref; int lock; } ;
typedef TYPE_1__ scsi_changer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 struct device* FUNC_6 (int ,struct device*,int ,TYPE_1__*,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,struct scsi_device*,char*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,char*,int) ;
 struct scsi_device* FUNC_20 (struct device*) ;

__attribute__((used)) static int FUNC_21(struct device *VAR_14)
{
 struct scsi_device *VAR_15 = FUNC_20(VAR_14);
 struct device *VAR_16;
 int VAR_17;
 scsi_changer *VAR_18;

 if (VAR_15->type != VAR_9)
  return -VAR_1;

 VAR_18 = FUNC_14(sizeof(*VAR_18), VAR_4);
 if (((void*)0) == VAR_18)
  return -VAR_2;

 FUNC_9(VAR_4);
 FUNC_17(&VAR_11);
 VAR_17 = FUNC_8(&VAR_10, VAR_18, 0, VAR_0 + 1, VAR_5);
 FUNC_18(&VAR_11);
 FUNC_10();

 if (VAR_17 < 0) {
  if (VAR_17 == -VAR_3)
   VAR_17 = -VAR_1;
  goto free_ch;
 }

 VAR_18->minor = VAR_17;
 FUNC_19(VAR_18->name,"ch%d",VAR_18->minor);

 VAR_16 = FUNC_6(VAR_12, VAR_14,
      FUNC_1(VAR_8, VAR_18->minor), VAR_18,
      "s%s", VAR_18->name);
 if (FUNC_0(VAR_16)) {
  FUNC_16(VAR_7, VAR_15, "ch%d: device_create failed\n",
       VAR_18->minor);
  VAR_17 = FUNC_2(VAR_16);
  goto remove_idr;
 }

 FUNC_15(&VAR_18->lock);
 FUNC_13(&VAR_18->ref);
 VAR_18->device = VAR_15;
 VAR_17 = FUNC_4(VAR_18);
 if (VAR_17)
  goto destroy_dev;
 if (VAR_13)
  FUNC_3(VAR_18);

 FUNC_5(VAR_14, VAR_18);
 FUNC_16(VAR_6, VAR_15, "Attached scsi changer %s\n", VAR_18->name);

 return 0;
destroy_dev:
 FUNC_7(VAR_12, FUNC_1(VAR_8, VAR_18->minor));
remove_idr:
 FUNC_11(&VAR_10, VAR_18->minor);
free_ch:
 FUNC_12(VAR_18);
 return VAR_17;
}
