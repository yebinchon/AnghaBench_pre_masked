
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int status; int callback_data; int (* callback ) (struct dasd_ccw_req*,int ) ;} ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int,char*,struct dasd_ccw_req*,int) ;
 int FUNC_3 (struct dasd_ccw_req*,int ) ;

__attribute__((used)) static void FUNC_4(struct dasd_device *VAR_4,
          struct dasd_ccw_req *VAR_5)
{
 char VAR_6[VAR_3];

 switch (VAR_5->status) {
 case 128:
  VAR_5->status = VAR_0;
  break;
 case 129:
  VAR_5->status = VAR_1;
  break;
 case 130:
  VAR_5->status = VAR_2;
  break;
 default:

  FUNC_2(VAR_6, VAR_3, "12 %p %x02", VAR_5, VAR_5->status);
  FUNC_1(&VAR_4->cdev->dev,
   "An error occurred in the DASD device driver, "
   "reason=%s\n", VAR_6);
  FUNC_0();
 }
 if (VAR_5->callback)
  VAR_5->callback(VAR_5, VAR_5->callback_data);
}
