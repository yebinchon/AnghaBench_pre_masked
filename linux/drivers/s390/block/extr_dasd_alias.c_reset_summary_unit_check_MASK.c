
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int retries; int expires; int status; int buildclk; int * block; struct dasd_device* memdev; struct dasd_device* startdev; int flags; scalar_t__ data; struct ccw1* cpaddr; int magic; } ;
struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct alias_lcu {struct dasd_ccw_req* rsu_cqr; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct alias_lcu *VAR_5,
        struct dasd_device *VAR_6,
        char VAR_7)
{
 struct dasd_ccw_req *VAR_8;
 int VAR_9 = 0;
 struct ccw1 *VAR_10;

 VAR_8 = VAR_5->rsu_cqr;
 FUNC_4((char *) &VAR_8->magic, "ECKD", 4);
 FUNC_0((char *) &VAR_8->magic, 4);
 VAR_10 = VAR_8->cpaddr;
 VAR_10->cmd_code = VAR_3;
 VAR_10->flags = VAR_0;
 VAR_10->count = 16;
 VAR_10->cda = (__u32)(addr_t) VAR_8->data;
 ((char *)VAR_8->data)[0] = VAR_7;

 FUNC_1(VAR_2, &VAR_8->flags);
 VAR_8->retries = 255;
 VAR_8->startdev = VAR_6;
 VAR_8->memdev = VAR_6;
 VAR_8->block = ((void*)0);
 VAR_8->expires = 5 * VAR_4;
 VAR_8->buildclk = FUNC_3();
 VAR_8->status = VAR_1;

 VAR_9 = FUNC_2(VAR_8);
 return VAR_9;
}
