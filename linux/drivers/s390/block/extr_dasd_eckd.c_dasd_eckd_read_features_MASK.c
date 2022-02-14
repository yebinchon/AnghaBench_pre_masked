
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_rssd_features {int suborder; int order; } ;
struct dasd_psf_prssd_data {int suborder; int order; } ;
struct dasd_eckd_private {struct dasd_rssd_features features; } ;
struct dasd_device {TYPE_1__* cdev; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int retries; int expires; struct dasd_device* memdev; scalar_t__ data; int status; int buildclk; struct ccw1* cpaddr; int * block; struct dasd_device* startdev; } ;
struct ccw1 {int count; void* cda; int cmd_code; int flags; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_7 ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_4 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_5 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct dasd_rssd_features*,struct dasd_rssd_features*,int) ;
 int FUNC_9 (struct dasd_rssd_features*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct dasd_device *VAR_8)
{
 struct dasd_eckd_private *VAR_9 = VAR_8->private;
 struct dasd_psf_prssd_data *VAR_10;
 struct dasd_rssd_features *VAR_11;
 struct dasd_ccw_req *VAR_12;
 struct ccw1 *VAR_13;
 int VAR_14;

 FUNC_9(&VAR_9->features, 0, sizeof(struct dasd_rssd_features));
 VAR_12 = FUNC_5(VAR_4, 1 + 1 ,
       (sizeof(struct dasd_psf_prssd_data) +
        sizeof(struct dasd_rssd_features)),
       VAR_8, ((void*)0));
 if (FUNC_1(VAR_12)) {
  FUNC_0(VAR_5, VAR_8->cdev, "%s", "Could not "
    "allocate initialization request");
  return FUNC_2(VAR_12);
 }
 VAR_12->startdev = VAR_8;
 VAR_12->memdev = VAR_8;
 VAR_12->block = ((void*)0);
 VAR_12->retries = 256;
 VAR_12->expires = 10 * VAR_6;


 VAR_10 = (struct dasd_psf_prssd_data *) VAR_12->data;
 FUNC_9(VAR_10, 0, sizeof(struct dasd_psf_prssd_data));
 VAR_10->order = VAR_7;
 VAR_10->suborder = 0x41;


 VAR_13 = VAR_12->cpaddr;
 VAR_13->cmd_code = VAR_2;
 VAR_13->count = sizeof(struct dasd_psf_prssd_data);
 VAR_13->flags |= VAR_0;
 VAR_13->cda = (__u32)(addr_t) VAR_10;


 VAR_11 = (struct dasd_rssd_features *) (VAR_10 + 1);
 FUNC_9(VAR_11, 0, sizeof(struct dasd_rssd_features));

 VAR_13++;
 VAR_13->cmd_code = VAR_3;
 VAR_13->count = sizeof(struct dasd_rssd_features);
 VAR_13->cda = (__u32)(addr_t) VAR_11;

 VAR_12->buildclk = FUNC_7();
 VAR_12->status = VAR_1;
 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 == 0) {
  VAR_10 = (struct dasd_psf_prssd_data *) VAR_12->data;
  VAR_11 = (struct dasd_rssd_features *) (VAR_10 + 1);
  FUNC_8(&VAR_9->features, VAR_11,
         sizeof(struct dasd_rssd_features));
 } else
  FUNC_6(&VAR_8->cdev->dev, "Reading device feature codes"
    " failed with rc=%d\n", VAR_14);
 FUNC_3(VAR_12, VAR_12->memdev);
 return VAR_14;
}
