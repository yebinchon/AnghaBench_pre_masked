
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_rssd_messages {int suborder; int order; } ;
struct dasd_psf_prssd_data {int suborder; int order; } ;
struct dasd_device {int cdev; } ;
struct dasd_ccw_req {int expires; int retries; struct dasd_device* memdev; scalar_t__ lpm; scalar_t__ data; int status; int buildclk; struct ccw1* cpaddr; int flags; int * block; struct dasd_device* startdev; } ;
struct ccw1 {int count; void* cda; int flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u8 ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_10 ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_5 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_6 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct dasd_rssd_messages*,struct dasd_rssd_messages*,int) ;
 int FUNC_9 (struct dasd_rssd_messages*,int ,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct dasd_device *VAR_11,
      struct dasd_rssd_messages *VAR_12,
      __u8 VAR_13)
{
 struct dasd_rssd_messages *VAR_14;
 struct dasd_psf_prssd_data *VAR_15;
 struct dasd_ccw_req *VAR_16;
 struct ccw1 *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_6(VAR_7, 1 + 1 ,
       (sizeof(struct dasd_psf_prssd_data) +
        sizeof(struct dasd_rssd_messages)),
       VAR_11, ((void*)0));
 if (FUNC_1(VAR_16)) {
  FUNC_0(VAR_8, VAR_11->cdev, "%s",
    "Could not allocate read message buffer request");
  return FUNC_2(VAR_16);
 }

 VAR_16->lpm = VAR_13;
retry:
 VAR_16->startdev = VAR_11;
 VAR_16->memdev = VAR_11;
 VAR_16->block = ((void*)0);
 VAR_16->expires = 10 * VAR_9;
 FUNC_10(VAR_4, &VAR_16->flags);



 FUNC_3(VAR_3, &VAR_16->flags);
 VAR_16->retries = 256;


 VAR_15 = (struct dasd_psf_prssd_data *) VAR_16->data;
 FUNC_9(VAR_15, 0, sizeof(struct dasd_psf_prssd_data));
 VAR_15->order = VAR_10;
 VAR_15->suborder = 0x03;


 VAR_17 = VAR_16->cpaddr;
 VAR_17->cmd_code = VAR_5;
 VAR_17->count = sizeof(struct dasd_psf_prssd_data);
 VAR_17->flags |= VAR_0;
 VAR_17->flags |= VAR_1;
 VAR_17->cda = (__u32)(addr_t) VAR_15;


 VAR_14 = (struct dasd_rssd_messages *) (VAR_15 + 1);
 FUNC_9(VAR_14, 0, sizeof(struct dasd_rssd_messages));

 VAR_17++;
 VAR_17->cmd_code = VAR_6;
 VAR_17->count = sizeof(struct dasd_rssd_messages);
 VAR_17->flags |= VAR_1;
 VAR_17->cda = (__u32)(addr_t) VAR_14;

 VAR_16->buildclk = FUNC_7();
 VAR_16->status = VAR_2;
 VAR_18 = FUNC_5(VAR_16);
 if (VAR_18 == 0) {
  VAR_15 = (struct dasd_psf_prssd_data *) VAR_16->data;
  VAR_14 = (struct dasd_rssd_messages *)
   (VAR_15 + 1);
  FUNC_8(VAR_12, VAR_14,
         sizeof(struct dasd_rssd_messages));
 } else if (VAR_16->lpm) {





  VAR_16->lpm = 0;
  goto retry;
 } else
  FUNC_0(VAR_8, VAR_11->cdev,
    "Reading messages failed with rc=%d\n"
    , VAR_18);
 FUNC_4(VAR_16, VAR_16->memdev);
 return VAR_18;
}
