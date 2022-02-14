
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int flags; } ;
struct dasd_ccw_req {int count; int retries; int expires; struct dasd_device* memdev; int status; int buildclk; int flags; struct dasd_device* startdev; int * data; scalar_t__ cda; int cmd_code; struct dasd_ccw_req* cpaddr; int magic; } ;
struct ccw1 {int count; int retries; int expires; struct dasd_device* memdev; int status; int buildclk; int flags; struct dasd_device* startdev; int * data; scalar_t__ cda; int cmd_code; struct ccw1* cpaddr; int magic; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int data; struct dasd_ccw_req ccw; struct dasd_ccw_req cqr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_4 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_5 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct dasd_ccw_req*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int
FUNC_11(struct dasd_device *VAR_12)
{
 struct dasd_ccw_req *VAR_13;
 int VAR_14;
 struct ccw1 *VAR_15;
 int VAR_16;

 if (!FUNC_1(VAR_0))
  return -VAR_8;

 VAR_16 = 0;
 VAR_13 = FUNC_5(VAR_6, 1, 32, VAR_12, ((void*)0));
 if (FUNC_0(VAR_13)) {
  FUNC_8(&VAR_10);
  VAR_16 = 1;
  VAR_13 = &VAR_11->cqr;
  FUNC_7(VAR_13, 0, sizeof(*VAR_13));
  FUNC_7(&VAR_11->ccw, 0,
         sizeof(VAR_11->ccw));
  VAR_13->cpaddr = &VAR_11->ccw;
  VAR_13->data = &VAR_11->data;
  VAR_13->magic = VAR_6;
 }
 VAR_15 = VAR_13->cpaddr;
 VAR_15->cmd_code = VAR_5;
 VAR_15->flags |= VAR_1;
 VAR_15->count = 32;
 VAR_15->cda = (__u32)(addr_t) VAR_13->data;
 VAR_13->startdev = VAR_12;
 VAR_13->memdev = VAR_12;
 FUNC_2(VAR_4, &VAR_13->flags);
 FUNC_10(VAR_3, &VAR_13->flags);
 VAR_13->retries = 2;
 VAR_13->expires = 2 * VAR_9;
 VAR_13->buildclk = FUNC_6();
 VAR_13->status = VAR_2;

 VAR_14 = FUNC_4(VAR_13);
 if (!VAR_14)
  FUNC_10(VAR_7, &VAR_12->flags);

 if (VAR_16)
  FUNC_9(&VAR_10);
 else
  FUNC_3(VAR_13, VAR_13->memdev);
 return VAR_14;
}
