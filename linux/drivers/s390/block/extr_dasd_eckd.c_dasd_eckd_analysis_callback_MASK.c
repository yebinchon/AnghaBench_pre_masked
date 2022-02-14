
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {int init_cqr_status; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {struct dasd_device* startdev; } ;


 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_ccw_req*,struct dasd_device*) ;

__attribute__((used)) static void FUNC_3(struct dasd_ccw_req *VAR_0,
     void *VAR_1)
{
 struct dasd_device *VAR_2 = VAR_0->startdev;
 struct dasd_eckd_private *VAR_3 = VAR_2->private;

 VAR_3->init_cqr_status = FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_2);
}
