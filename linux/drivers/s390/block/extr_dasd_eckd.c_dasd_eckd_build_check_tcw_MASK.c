
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tidaw {int cpmode; int expires; int flags; int status; int buildclk; int retries; struct dasd_device* basedev; struct dasd_device* memdev; struct dasd_device* startdev; int cpaddr; int data; } ;
struct itcw {int cpmode; int expires; int flags; int status; int buildclk; int retries; struct dasd_device* basedev; struct dasd_device* memdev; struct dasd_device* startdev; int cpaddr; int data; } ;
struct format_data_t {int stop_unit; int start_unit; } ;
struct eckd_count {int dummy; } ;
struct dasd_eckd_private {int count; } ;
struct dasd_device {int default_expires; int default_retries; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int cpmode; int expires; int flags; int status; int buildclk; int retries; struct dasd_device* basedev; struct dasd_device* memdev; struct dasd_device* startdev; int cpaddr; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tidaw* FUNC_0 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct tidaw*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct dasd_device* FUNC_2 (struct dasd_device*) ;
 struct tidaw* FUNC_3 (int ,int ,int,struct dasd_device*) ;
 int FUNC_4 (struct tidaw*,struct dasd_device*) ;
 int FUNC_5 () ;
 struct tidaw* FUNC_6 (struct tidaw*,int ,int ,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct tidaw*) ;
 int FUNC_9 (struct tidaw*) ;
 struct tidaw* FUNC_10 (int ,int,int ,int ,int,int ) ;
 int FUNC_11 (struct tidaw*,int,int,int ,struct dasd_device*,struct dasd_device*,int ,int,int,int,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_13(struct dasd_device *VAR_9, struct format_data_t *VAR_10,
     int VAR_11, struct eckd_count *VAR_12,
     int VAR_13)
{
 struct dasd_eckd_private *VAR_14;
 struct dasd_device *VAR_15 = ((void*)0);
 struct tidaw *VAR_16 = ((void*)0);
 struct dasd_ccw_req *VAR_17;
 struct itcw *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 if (VAR_11)
  VAR_15 = FUNC_2(VAR_9);

 if (!VAR_15)
  VAR_15 = VAR_9;

 VAR_14 = VAR_15->private;

 VAR_20 = VAR_13 * (VAR_10->stop_unit - VAR_10->start_unit + 1);





 VAR_19 = FUNC_7(0, VAR_20, 0);

 VAR_17 = FUNC_3(VAR_4, 0, VAR_19, VAR_15);
 if (FUNC_1(VAR_17))
  return VAR_17;

 VAR_14->count++;

 VAR_18 = FUNC_10(VAR_17->data, VAR_19, VAR_7, 0, VAR_20, 0);
 if (FUNC_1(VAR_18)) {
  VAR_21 = -VAR_5;
  goto out_err;
 }

 VAR_17->cpaddr = FUNC_9(VAR_18);
 VAR_21 = FUNC_11(VAR_18, VAR_10->start_unit, VAR_10->stop_unit,
     VAR_3, VAR_9, VAR_15, 0, VAR_20,
     sizeof(struct eckd_count),
     VAR_20 * sizeof(struct eckd_count), 0, VAR_13);
 if (VAR_21)
  goto out_err;

 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
  VAR_16 = FUNC_6(VAR_18, 0, VAR_12++,
         sizeof(struct eckd_count));
  if (FUNC_1(VAR_16)) {
   VAR_21 = -VAR_5;
   goto out_err;
  }
 }

 VAR_16->flags |= VAR_8;
 FUNC_8(VAR_18);

 VAR_17->cpmode = 1;
 VAR_17->startdev = VAR_15;
 VAR_17->memdev = VAR_15;
 VAR_17->basedev = VAR_9;
 VAR_17->retries = VAR_15->default_retries;
 VAR_17->expires = VAR_15->default_expires * VAR_6;
 VAR_17->buildclk = FUNC_5();
 VAR_17->status = VAR_0;

 FUNC_12(VAR_1, &VAR_17->flags);
 FUNC_12(VAR_2, &VAR_17->flags);

 return VAR_17;

out_err:
 FUNC_4(VAR_17, VAR_15);

 return FUNC_0(VAR_21);
}
