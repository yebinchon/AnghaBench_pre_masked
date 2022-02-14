
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int expires; int retries; int status; int buildclk; scalar_t__ magic; struct dasd_device* memdev; struct dasd_device* startdev; struct dasd_ccw_req* refers; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char) ;int flags; struct ccw1* cpaddr; struct DCTL_data* data; } ;
struct ccw1 {int count; scalar_t__ cda; int cmd_code; } ;
struct DCTL_data {int subcommand; char modifier; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (char*,int,int,struct dasd_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ccw1*,int ,int) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_5(struct dasd_ccw_req * VAR_4, char VAR_5)
{

 struct dasd_device *VAR_6 = VAR_4->startdev;
 struct DCTL_data *VAR_7;
 struct ccw1 *VAR_8;
 struct dasd_ccw_req *VAR_9;

 VAR_9 = FUNC_1((char *) &VAR_4->magic, 1,
       sizeof(struct DCTL_data),
       VAR_6);
 if (FUNC_0(VAR_9)) {
  FUNC_2(&VAR_6->cdev->dev,
       "Unable to allocate DCTL-CQR\n");
  VAR_4->status = VAR_1;
  return VAR_4;
 }

 VAR_7 = VAR_9->data;

 VAR_7->subcommand = 0x02;
 VAR_7->modifier = VAR_5;

 VAR_8 = VAR_9->cpaddr;
 FUNC_4(VAR_8, 0, sizeof(struct ccw1));
 VAR_8->cmd_code = VAR_0;
 VAR_8->count = 4;
 VAR_8->cda = (__u32)(addr_t) VAR_7;
 VAR_9->flags = VAR_4->flags;
 VAR_9->function = FUNC_5;
 VAR_9->refers = VAR_4;
 VAR_9->startdev = VAR_6;
 VAR_9->memdev = VAR_6;
 VAR_9->magic = VAR_4->magic;
 VAR_9->expires = 5 * 60 * VAR_3;
 VAR_9->retries = 2;

 VAR_9->buildclk = FUNC_3();

 VAR_9->status = VAR_2;

 return VAR_9;

}
