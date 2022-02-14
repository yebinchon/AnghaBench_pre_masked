
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int dummy; } ;
struct dasd_ccw_req {TYPE_2__* refers; struct dasd_device* startdev; } ;
struct TYPE_3__ {int scsw; } ;
struct TYPE_4__ {TYPE_1__ irb; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_4(struct dasd_ccw_req *VAR_3)
{
 struct dasd_device *VAR_4 = VAR_3->startdev;

 if (FUNC_3(&VAR_3->refers->irb.scsw) & (VAR_2
        | VAR_1)) {
  FUNC_0(VAR_0, VAR_4, "%s",
       "channel or interface control check");
  FUNC_1(VAR_3);
  VAR_3 = FUNC_2(VAR_3, ((void*)0));
 }
 return VAR_3;
}
