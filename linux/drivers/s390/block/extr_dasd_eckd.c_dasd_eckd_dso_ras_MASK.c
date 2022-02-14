
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct request {int dummy; } ;
struct dasd_rssd_features {int* feature; } ;
struct TYPE_8__ {int trk_per_cyl; } ;
struct dasd_eckd_private {TYPE_4__ rdc_data; TYPE_3__* ned; struct dasd_rssd_features features; } ;
struct dasd_dso_ras_ext_range {int end_ext; int beg_ext; } ;
struct TYPE_6__ {int by_extent; int guarantee_init; } ;
struct TYPE_5__ {scalar_t__ vol_type; } ;
struct dasd_dso_ras_data {int nr_exts; int dev_addr; int lss; TYPE_2__ op_flags; TYPE_1__ flags; int order; } ;
struct dasd_device {int default_expires; int cdev; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int retries; int expires; int status; int buildclk; struct dasd_block* block; struct dasd_device* memdev; struct dasd_device* startdev; struct dasd_dso_ras_data* data; struct ccw1* cpaddr; } ;
struct dasd_block {int dummy; } ;
struct ccw1 {size_t count; int cmd_code; scalar_t__ cda; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {int unit_addr; int ID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dasd_ccw_req* FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct dasd_ccw_req*) ;
 int * FUNC_3 (struct request*) ;
 int FUNC_4 (unsigned int,unsigned int,int) ;
 int FUNC_5 (struct dasd_device*) ;
 scalar_t__ FUNC_6 (struct dasd_device*,unsigned int,unsigned int) ;
 struct dasd_ccw_req* FUNC_7 (int ,int,size_t,struct dasd_device*,void*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct dasd_dso_ras_data*,int ,size_t) ;
 int FUNC_10 (int *,int,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_11(struct dasd_device *VAR_7, struct dasd_block *VAR_8,
    struct request *VAR_9, unsigned int VAR_10,
    unsigned int VAR_11, int VAR_12)
{
 struct dasd_eckd_private *VAR_13 = VAR_7->private;
 struct dasd_dso_ras_ext_range *VAR_14;
 struct dasd_rssd_features *VAR_15;
 struct dasd_dso_ras_data *VAR_16;
 u16 VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;
 struct dasd_ccw_req *VAR_22;
 u32 VAR_23, VAR_24;
 struct ccw1 *VAR_25;
 int VAR_26;
 size_t VAR_27;
 size_t VAR_28;
 int VAR_29;
 void *VAR_30;
 int VAR_31;

 if (FUNC_6(VAR_7, VAR_10, VAR_11))
  return FUNC_1(-VAR_5);

 VAR_30 = VAR_9 ? FUNC_3(VAR_9) : ((void*)0);

 VAR_15 = &VAR_13->features;

 VAR_26 = FUNC_5(VAR_7) * VAR_13->rdc_data.trk_per_cyl;
 VAR_29 = 0;
 if (VAR_12)
  VAR_29 = FUNC_4(VAR_10, VAR_11, VAR_26);
 VAR_27 = sizeof(*VAR_16);
 VAR_28 = VAR_27 + (VAR_29 * sizeof(*VAR_14));

 VAR_22 = FUNC_7(VAR_2, 1, VAR_28, VAR_7, VAR_30);
 if (FUNC_2(VAR_22)) {
  FUNC_0(VAR_3, VAR_7->cdev, "%s",
    "Could not allocate RAS request");
  return VAR_22;
 }

 VAR_16 = VAR_22->data;
 FUNC_9(VAR_16, 0, VAR_28);

 VAR_16->order = VAR_4;
 VAR_16->flags.vol_type = 0;

 VAR_16->op_flags.by_extent = VAR_12;





 VAR_16->op_flags.guarantee_init = !!(VAR_15->feature[56] & 0x01);
 VAR_16->lss = VAR_13->ned->ID;
 VAR_16->dev_addr = VAR_13->ned->unit_addr;
 VAR_16->nr_exts = VAR_29;

 if (VAR_12) {
  VAR_17 = VAR_13->rdc_data.trk_per_cyl;
  VAR_21 = VAR_10;
  VAR_20 = VAR_10 + VAR_26 -
   (VAR_10 % VAR_26) - 1;
  if (VAR_20 > VAR_11)
   VAR_20 = VAR_11;
  VAR_14 = (struct dasd_dso_ras_ext_range *)(VAR_22->data + VAR_27);

  for (VAR_31 = 0; VAR_31 < VAR_29; VAR_31++) {
   VAR_23 = VAR_21 / VAR_17;
   VAR_18 = VAR_21 % VAR_17;
   VAR_24 = VAR_20 / VAR_17;
   VAR_19 = VAR_20 % VAR_17;

   FUNC_10(&VAR_14->beg_ext, VAR_23, VAR_18);
   FUNC_10(&VAR_14->end_ext, VAR_24, VAR_19);

   VAR_21 = VAR_20 + 1;
   VAR_20 = VAR_21 + VAR_26 - 1;
   if (VAR_20 > VAR_11)
    VAR_20 = VAR_11;
   VAR_14++;
  }
 }

 VAR_25 = VAR_22->cpaddr;
 VAR_25->cda = (__u32)(addr_t)VAR_22->data;
 VAR_25->cmd_code = VAR_1;
 VAR_25->count = VAR_28;

 VAR_22->startdev = VAR_7;
 VAR_22->memdev = VAR_7;
 VAR_22->block = VAR_8;
 VAR_22->retries = 256;
 VAR_22->expires = VAR_7->default_expires * VAR_6;
 VAR_22->buildclk = FUNC_8();
 VAR_22->status = VAR_0;

 return VAR_22;
}
