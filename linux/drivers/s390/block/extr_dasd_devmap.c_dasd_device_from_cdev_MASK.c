
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct ccw_device {int dummy; } ;


 struct dasd_device* FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

struct dasd_device *
FUNC_4(struct ccw_device *VAR_0)
{
 struct dasd_device *VAR_1;
 unsigned long VAR_2;

 FUNC_2(FUNC_1(VAR_0), VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_3(FUNC_1(VAR_0), VAR_2);
 return VAR_1;
}
