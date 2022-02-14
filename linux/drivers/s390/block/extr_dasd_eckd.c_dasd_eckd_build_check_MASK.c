
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct format_data_t {int stop_unit; int start_unit; } ;
struct eckd_count {int dummy; } ;
struct TYPE_2__ {int* feature; } ;
struct dasd_eckd_private {int count; TYPE_1__ features; } ;
struct dasd_device {int default_expires; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int expires; int flags; int status; int buildclk; int retries; struct dasd_device* basedev; struct dasd_device* memdev; struct dasd_device* startdev; struct ccw1* cpaddr; void* data; } ;
struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct PFX_eckd_data {int dummy; } ;
struct LO_eckd_data {int dummy; } ;
struct DE_eckd_data {int dummy; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_device* FUNC_1 (struct dasd_device*) ;
 struct dasd_ccw_req* FUNC_2 (int ,int,int,struct dasd_device*) ;
 int FUNC_3 (int ,void*,int,int,int ,struct dasd_device*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,void*,int,int ,int,int ,struct dasd_device*,int ) ;
 int FUNC_6 (int ,void*,int,int,int ,struct dasd_device*,struct dasd_device*,int,int ,int,int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_8(struct dasd_device *VAR_8, struct format_data_t *VAR_9,
        int VAR_10, struct eckd_count *VAR_11, int VAR_12)
{
 struct dasd_eckd_private *VAR_13;
 struct dasd_eckd_private *VAR_14;
 struct dasd_device *VAR_15 = ((void*)0);
 struct dasd_ccw_req *VAR_16;
 struct ccw1 *VAR_17;
 void *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 if (VAR_10)
  VAR_15 = FUNC_1(VAR_8);

 if (!VAR_15)
  VAR_15 = VAR_8;

 VAR_13 = VAR_15->private;
 VAR_14 = VAR_8->private;

 VAR_22 = VAR_12 * (VAR_9->stop_unit - VAR_9->start_unit + 1);

 VAR_21 = VAR_14->features.feature[8] & 0x01;

 if (VAR_21) {
  VAR_19 = 1;
  VAR_20 = sizeof(struct PFX_eckd_data);
 } else {
  VAR_19 = 2;
  VAR_20 = sizeof(struct DE_eckd_data) +
   sizeof(struct LO_eckd_data);
 }
 VAR_19 += VAR_22;

 VAR_16 = FUNC_2(VAR_5, VAR_19, VAR_20, VAR_15);
 if (FUNC_0(VAR_16))
  return VAR_16;

 VAR_13->count++;
 VAR_18 = VAR_16->data;
 VAR_17 = VAR_16->cpaddr;

 if (VAR_21) {
  FUNC_6(VAR_17++, VAR_18, VAR_9->start_unit, VAR_9->stop_unit,
      VAR_4, VAR_8, VAR_15, 1, 0,
      VAR_22, 0, 0);
 } else {
  FUNC_3(VAR_17++, VAR_18, VAR_9->start_unit, VAR_9->stop_unit,
         VAR_4, VAR_15, 0);

  VAR_18 += sizeof(struct DE_eckd_data);
  VAR_17[-1].flags |= VAR_0;

  FUNC_5(VAR_17++, VAR_18, VAR_9->start_unit, 0, VAR_22,
         VAR_4, VAR_8, 0);
 }

 for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {
  VAR_17[-1].flags |= VAR_0;
  VAR_17->cmd_code = VAR_4;
  VAR_17->flags = VAR_1;
  VAR_17->count = 8;
  VAR_17->cda = (__u32)(addr_t) VAR_11;
  VAR_17++;
  VAR_11++;
 }

 VAR_16->startdev = VAR_15;
 VAR_16->memdev = VAR_15;
 VAR_16->basedev = VAR_8;
 VAR_16->retries = VAR_6;
 VAR_16->expires = VAR_15->default_expires * VAR_7;
 VAR_16->buildclk = FUNC_4();
 VAR_16->status = VAR_2;

 FUNC_7(VAR_3, &VAR_16->flags);

 return VAR_16;
}
