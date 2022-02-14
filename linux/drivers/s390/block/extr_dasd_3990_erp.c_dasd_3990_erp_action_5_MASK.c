
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*) ;} ;



__attribute__((used)) static struct dasd_ccw_req *
FUNC_0(struct dasd_ccw_req * VAR_0)
{


 VAR_0->retries = 10;
 VAR_0->function = FUNC_0;

 return VAR_0;

}
