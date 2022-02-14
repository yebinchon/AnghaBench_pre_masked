
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_psf_prssd_data {int suborder; int order; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int retries; int expires; struct dasd_device* memdev; int status; int buildclk; struct ccw1* cpaddr; scalar_t__ data; int flags; struct dasd_device* startdev; } ;
struct ccw1 {int count; void* cda; int cmd_code; int flags; } ;
struct alias_lcu {int lock; int flags; struct dasd_psf_prssd_data* uac; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_4 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_5 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct dasd_psf_prssd_data*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct dasd_ccw_req*) ;

__attribute__((used)) static int FUNC_11(struct dasd_device *VAR_9,
        struct alias_lcu *VAR_10)
{
 struct dasd_psf_prssd_data *VAR_11;
 struct dasd_ccw_req *VAR_12;
 struct ccw1 *VAR_13;
 int VAR_14;
 unsigned long VAR_15;

 VAR_12 = FUNC_5(VAR_5, 1 + 1 ,
       (sizeof(struct dasd_psf_prssd_data)),
       VAR_9, ((void*)0));
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 VAR_12->startdev = VAR_9;
 VAR_12->memdev = VAR_9;
 FUNC_2(VAR_2, &VAR_12->flags);
 VAR_12->retries = 10;
 VAR_12->expires = 20 * VAR_6;


 VAR_11 = (struct dasd_psf_prssd_data *) VAR_12->data;
 FUNC_7(VAR_11, 0, sizeof(struct dasd_psf_prssd_data));
 VAR_11->order = VAR_8;
 VAR_11->suborder = 0x0e;


 VAR_13 = VAR_12->cpaddr;
 VAR_13->cmd_code = VAR_3;
 VAR_13->count = sizeof(struct dasd_psf_prssd_data);
 VAR_13->flags |= VAR_0;
 VAR_13->cda = (__u32)(addr_t) VAR_11;


 FUNC_7(VAR_10->uac, 0, sizeof(*(VAR_10->uac)));

 VAR_13++;
 VAR_13->cmd_code = VAR_4;
 VAR_13->count = sizeof(*(VAR_10->uac));
 VAR_13->cda = (__u32)(addr_t) VAR_10->uac;

 VAR_12->buildclk = FUNC_6();
 VAR_12->status = VAR_1;


 FUNC_8(&VAR_10->lock, VAR_15);
 VAR_10->flags &= ~VAR_7;
 FUNC_9(&VAR_10->lock, VAR_15);

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14 && !FUNC_10(VAR_12)) {
  FUNC_8(&VAR_10->lock, VAR_15);
  VAR_10->flags |= VAR_7;
  FUNC_9(&VAR_10->lock, VAR_15);
 }
 FUNC_3(VAR_12, VAR_12->memdev);
 return VAR_14;
}
