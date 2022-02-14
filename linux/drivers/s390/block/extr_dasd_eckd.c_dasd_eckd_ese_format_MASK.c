
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct format_data_t {unsigned int blksize; int intensity; void* stop_unit; void* start_unit; } ;
struct dasd_eckd_private {scalar_t__ uses_cdl; int rdc_data; } ;
struct dasd_device {struct dasd_block* block; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int callback; TYPE_1__* block; struct request* callback_data; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; } ;
typedef void* sector_t ;
struct TYPE_2__ {struct dasd_device* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dasd_ccw_req* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_device*,struct dasd_device*,struct format_data_t*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct dasd_device*,struct format_data_t*) ;
 unsigned int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (void*,unsigned int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_8(struct dasd_device *VAR_3, struct dasd_ccw_req *VAR_4)
{
 struct dasd_eckd_private *VAR_5;
 struct format_data_t VAR_6;
 unsigned int VAR_7;
 struct dasd_ccw_req *VAR_8;
 struct dasd_device *VAR_9;
 struct dasd_block *VAR_10;
 unsigned int VAR_11;
 struct request *VAR_12;
 sector_t VAR_13;
 sector_t VAR_14;
 int VAR_15;

 VAR_12 = VAR_4->callback_data;
 VAR_9 = VAR_4->block->base;
 VAR_5 = VAR_9->private;
 VAR_10 = VAR_9->block;
 VAR_11 = VAR_10->bp_block;
 VAR_7 = FUNC_6(&VAR_5->rdc_data, 0, VAR_11);

 VAR_13 = FUNC_2(VAR_12) >> VAR_10->s2b_shift;
 FUNC_7(VAR_13, VAR_7);
 VAR_14 =
  (FUNC_2(VAR_12) + FUNC_3(VAR_12) - 1) >> VAR_10->s2b_shift;
 FUNC_7(VAR_14, VAR_7);

 VAR_6.start_unit = VAR_13;
 VAR_6.stop_unit = VAR_14;
 VAR_6.blksize = VAR_11;
 VAR_6.intensity = VAR_5->uses_cdl ? VAR_0 : 0;

 VAR_15 = FUNC_5(VAR_9, &VAR_6);
 if (VAR_15)
  return FUNC_0(-VAR_1);





 VAR_8 = FUNC_4(VAR_9, VAR_3, &VAR_6, 0);
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_8->callback = VAR_2;

 return VAR_8;
}
