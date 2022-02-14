
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int memdev; } ;


 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_device*,int *,int *,int ,int ,int ) ;
 int FUNC_3 (struct dasd_ccw_req*,int ) ;
 int FUNC_4 (struct dasd_ccw_req*) ;

__attribute__((used)) static int FUNC_5(struct dasd_device *VAR_0)
{
 struct dasd_ccw_req *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0, ((void*)0), ((void*)0), 0, 0, 0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1, VAR_1->memdev);

 return VAR_2;
}
