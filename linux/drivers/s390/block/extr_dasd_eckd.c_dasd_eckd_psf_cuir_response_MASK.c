
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_psf_cuir_response {int cc; int ssid; int cssid; void* message_id; int chpid; int order; } ;
struct dasd_device {TYPE_1__* path; } ;
struct dasd_ccw_req {int retries; int expires; struct dasd_device* memdev; int flags; int status; int buildclk; int * block; struct dasd_device* startdev; struct ccw1* cpaddr; scalar_t__ data; } ;
struct ccw1 {int count; int flags; void* cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;
typedef void* __u32 ;
struct TYPE_2__ {int ssid; int cssid; int chpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_7 ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_4 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_5 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct dasd_device *VAR_8, int VAR_9,
       __u32 VAR_10, __u8 VAR_11)
{
 struct dasd_psf_cuir_response *VAR_12;
 int VAR_13 = FUNC_7(VAR_11);
 struct dasd_ccw_req *VAR_14;
 struct ccw1 *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_5(VAR_4, 1 ,
       sizeof(struct dasd_psf_cuir_response),
       VAR_8, ((void*)0));

 if (FUNC_1(VAR_14)) {
  FUNC_0(VAR_5, VAR_8, "%s",
      "Could not allocate PSF-CUIR request");
  return FUNC_2(VAR_14);
 }

 VAR_12 = (struct dasd_psf_cuir_response *)VAR_14->data;
 VAR_12->order = VAR_7;
 VAR_12->cc = VAR_9;
 VAR_12->chpid = VAR_8->path[VAR_13].chpid;
 VAR_12->message_id = VAR_10;
 VAR_12->cssid = VAR_8->path[VAR_13].cssid;
 VAR_12->ssid = VAR_8->path[VAR_13].ssid;
 VAR_15 = VAR_14->cpaddr;
 VAR_15->cmd_code = VAR_3;
 VAR_15->cda = (__u32)(addr_t)VAR_12;
 VAR_15->flags = VAR_0;
 VAR_15->count = sizeof(struct dasd_psf_cuir_response);

 VAR_14->startdev = VAR_8;
 VAR_14->memdev = VAR_8;
 VAR_14->block = ((void*)0);
 VAR_14->retries = 256;
 VAR_14->expires = 10*VAR_6;
 VAR_14->buildclk = FUNC_6();
 VAR_14->status = VAR_1;
 FUNC_8(VAR_2, &VAR_14->flags);

 VAR_16 = FUNC_4(VAR_14);

 FUNC_3(VAR_14, VAR_14->memdev);
 return VAR_16;
}
