
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_rssd_lcq {int suborder; int order; } ;
struct dasd_psf_prssd_data {int suborder; int order; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct dasd_eckd_private {TYPE_1__ uid; } ;
struct dasd_device {int default_expires; int cdev; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int retries; int expires; struct dasd_device* memdev; int flags; int * block; struct dasd_device* startdev; int status; int buildclk; struct ccw1* cpaddr; struct dasd_rssd_lcq* data; } ;
struct ccw1 {int count; void* cda; int flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dasd_device*,struct dasd_rssd_lcq*) ;
 int FUNC_5 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_6 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_7 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct dasd_rssd_lcq*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct dasd_device *VAR_13)
{
 struct dasd_eckd_private *VAR_14 = VAR_13->private;
 struct dasd_psf_prssd_data *VAR_15;
 struct dasd_rssd_lcq *VAR_16;
 struct dasd_ccw_req *VAR_17;
 struct ccw1 *VAR_18;
 int VAR_19;


 if (VAR_14->uid.type == VAR_11 ||
     VAR_14->uid.type == VAR_12)
  return 0;

 VAR_17 = FUNC_7(VAR_6, 2 ,
       sizeof(*VAR_15) + sizeof(*VAR_16), VAR_13, ((void*)0));
 if (FUNC_1(VAR_17)) {
  FUNC_0(VAR_7, VAR_13->cdev, "%s",
    "Could not allocate initialization request");
  return FUNC_2(VAR_17);
 }


 VAR_15 = VAR_17->data;
 FUNC_9(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->order = VAR_9;
 VAR_15->suborder = VAR_10;

 VAR_18 = VAR_17->cpaddr;
 VAR_18->cmd_code = VAR_4;
 VAR_18->count = sizeof(*VAR_15);
 VAR_18->flags |= VAR_0;
 VAR_18->cda = (__u32)(addr_t)VAR_15;

 VAR_16 = (struct dasd_rssd_lcq *)(VAR_15 + 1);
 FUNC_9(VAR_16, 0, sizeof(*VAR_16));

 VAR_18++;
 VAR_18->cmd_code = VAR_5;
 VAR_18->count = sizeof(*VAR_16);
 VAR_18->flags |= VAR_1;
 VAR_18->cda = (__u32)(addr_t)VAR_16;

 VAR_17->buildclk = FUNC_8();
 VAR_17->status = VAR_2;
 VAR_17->startdev = VAR_13;
 VAR_17->memdev = VAR_13;
 VAR_17->block = ((void*)0);
 VAR_17->retries = 256;
 VAR_17->expires = VAR_13->default_expires * VAR_8;

 FUNC_3(VAR_3, &VAR_17->flags);

 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19 == 0) {
  FUNC_4(VAR_13, VAR_16);
 } else {
  FUNC_0(VAR_7, VAR_13->cdev,
    "Reading the logical configuration failed with rc=%d", VAR_19);
 }

 FUNC_5(VAR_17, VAR_17->memdev);

 return VAR_19;
}
