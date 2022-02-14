
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_psf_query_host_access {int dummy; } ;
struct dasd_psf_prssd_data {int volume; int lss; int suborder; int order; } ;
struct TYPE_5__ {int* feature; } ;
struct dasd_eckd_private {TYPE_3__* ned; TYPE_2__ features; TYPE_1__* lcu; } ;
struct dasd_device {int cdev; int block; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int retries; int expires; struct dasd_device* memdev; int flags; int status; int buildclk; struct ccw1* cpaddr; scalar_t__ data; int * block; struct dasd_device* startdev; } ;
struct ccw1 {int count; void* cda; int flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;
struct TYPE_6__ {int unit_addr; int ID; } ;
struct TYPE_4__ {scalar_t__ pav; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_5 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_6 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct dasd_psf_query_host_access*) ;
 struct dasd_psf_query_host_access* FUNC_9 (int,int) ;
 int FUNC_10 (struct dasd_psf_prssd_data*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct dasd_device *VAR_16,
           struct dasd_psf_query_host_access *VAR_17)
{
 struct dasd_eckd_private *VAR_18 = VAR_16->private;
 struct dasd_psf_query_host_access *VAR_19;
 struct dasd_psf_prssd_data *VAR_20;
 struct dasd_ccw_req *VAR_21;
 struct ccw1 *VAR_22;
 int VAR_23;


 if (!VAR_16->block && VAR_18->lcu->pav == VAR_12)
  return -VAR_9;


 if (!(VAR_18->features.feature[14] & 0x80))
  return -VAR_9;

 VAR_21 = FUNC_6(VAR_6, 1 + 1 ,
       sizeof(struct dasd_psf_prssd_data) + 1,
       VAR_16, ((void*)0));
 if (FUNC_1(VAR_21)) {
  FUNC_0(VAR_7, VAR_16->cdev, "%s",
    "Could not allocate read message buffer request");
  return FUNC_2(VAR_21);
 }
 VAR_19 = FUNC_9(sizeof(*VAR_19), VAR_11 | VAR_10);
 if (!VAR_19) {
  FUNC_4(VAR_21, VAR_16);
  FUNC_0(VAR_7, VAR_16->cdev, "%s",
    "Could not allocate host_access buffer");
  return -VAR_8;
 }
 VAR_21->startdev = VAR_16;
 VAR_21->memdev = VAR_16;
 VAR_21->block = ((void*)0);
 VAR_21->retries = 256;
 VAR_21->expires = 10 * VAR_13;


 VAR_20 = (struct dasd_psf_prssd_data *) VAR_21->data;
 FUNC_10(VAR_20, 0, sizeof(struct dasd_psf_prssd_data));
 VAR_20->order = VAR_14;
 VAR_20->suborder = VAR_15;

 VAR_20->lss = VAR_18->ned->ID;
 VAR_20->volume = VAR_18->ned->unit_addr;


 VAR_22 = VAR_21->cpaddr;
 VAR_22->cmd_code = VAR_4;
 VAR_22->count = sizeof(struct dasd_psf_prssd_data);
 VAR_22->flags |= VAR_0;
 VAR_22->flags |= VAR_1;
 VAR_22->cda = (__u32)(addr_t) VAR_20;


 VAR_22++;
 VAR_22->cmd_code = VAR_5;
 VAR_22->count = sizeof(struct dasd_psf_query_host_access);
 VAR_22->flags |= VAR_1;
 VAR_22->cda = (__u32)(addr_t) VAR_19;

 VAR_21->buildclk = FUNC_7();
 VAR_21->status = VAR_2;

 FUNC_3(VAR_3, &VAR_21->flags);
 VAR_23 = FUNC_5(VAR_21);
 if (VAR_23 == 0) {
  *VAR_17 = *VAR_19;
 } else {
  FUNC_0(VAR_7, VAR_16->cdev,
    "Reading host access data failed with rc=%d\n",
    VAR_23);
  VAR_23 = -VAR_9;
 }

 FUNC_4(VAR_21, VAR_21->memdev);
 FUNC_8(VAR_19);
 return VAR_23;
}
