
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eckd_count {int dummy; } ;
struct dasd_eckd_private {struct eckd_count* count_area; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int retries; int flags; int status; int buildclk; struct dasd_device* memdev; struct dasd_device* startdev; int * block; struct LO_eckd_data* data; struct ccw1* cpaddr; } ;
struct ccw1 {int count; void* cda; scalar_t__ flags; void* cmd_code; } ;
struct LO_eckd_data {int dummy; } ;
struct DE_eckd_data {int dummy; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (int ,int,int,struct dasd_device*,int *) ;
 int FUNC_2 (int ,struct LO_eckd_data*,int ,int,void*,struct dasd_device*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int,int ,int,void*,struct dasd_device*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_6(struct dasd_device *VAR_5)
{
 struct dasd_eckd_private *VAR_6 = VAR_5->private;
 struct eckd_count *VAR_7;
 struct LO_eckd_data *VAR_8;
 struct dasd_ccw_req *VAR_9;
 struct ccw1 *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = 8;
 VAR_12 = sizeof(struct DE_eckd_data) + 2*sizeof(struct LO_eckd_data);
 VAR_9 = FUNC_1(VAR_4, VAR_11, VAR_12, VAR_5,
       ((void*)0));
 if (FUNC_0(VAR_9))
  return VAR_9;
 VAR_10 = VAR_9->cpaddr;

 FUNC_2(VAR_10++, VAR_9->data, 0, 1,
        VAR_3, VAR_5, 0);
 VAR_8 = VAR_9->data + sizeof(struct DE_eckd_data);

 VAR_10[-1].flags |= VAR_0;
 FUNC_4(VAR_10++, VAR_8++, 0, 0, 4,
        VAR_3, VAR_5, 0);

 VAR_7 = VAR_6->count_area;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_10[-1].flags |= VAR_0;
  VAR_10->cmd_code = VAR_3;
  VAR_10->flags = 0;
  VAR_10->count = 8;
  VAR_10->cda = (__u32)(addr_t) VAR_7;
  VAR_10++;
  VAR_7++;
 }


 VAR_10[-1].flags |= VAR_0;
 FUNC_4(VAR_10++, VAR_8++, 1, 0, 1,
        VAR_3, VAR_5, 0);

 VAR_10[-1].flags |= VAR_0;
 VAR_10->cmd_code = VAR_3;
 VAR_10->flags = 0;
 VAR_10->count = 8;
 VAR_10->cda = (__u32)(addr_t) VAR_7;

 VAR_9->block = ((void*)0);
 VAR_9->startdev = VAR_5;
 VAR_9->memdev = VAR_5;
 VAR_9->retries = 255;
 VAR_9->buildclk = FUNC_3();
 VAR_9->status = VAR_1;

 FUNC_5(VAR_2, &VAR_9->flags);

 return VAR_9;
}
