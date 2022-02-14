
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {unsigned long flags; int intrc; int memdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 () ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_device*,int) ;
 int FUNC_4 (struct dasd_ccw_req*,int ) ;
 int FUNC_5 (struct dasd_ccw_req*) ;

__attribute__((used)) static int
FUNC_6(struct dasd_device *VAR_1, int VAR_2,
    unsigned long VAR_3)
{
 struct dasd_ccw_req *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);





 VAR_4->flags |= VAR_3;

 VAR_5 = FUNC_5(VAR_4);
 if (!VAR_5)

  FUNC_2();
 else if (VAR_4->intrc == -VAR_0)
  VAR_5 = -VAR_0;

 FUNC_4(VAR_4, VAR_4->memdev);
 return VAR_5;
}
