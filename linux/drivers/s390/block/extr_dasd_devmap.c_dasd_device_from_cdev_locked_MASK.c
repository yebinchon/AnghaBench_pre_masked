
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 struct dasd_device* FUNC_0 (int ) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (int *) ;

struct dasd_device *
FUNC_3(struct ccw_device *VAR_1)
{
 struct dasd_device *VAR_2 = FUNC_2(&VAR_1->dev);

 if (!VAR_2)
  return FUNC_0(-VAR_0);
 FUNC_1(VAR_2);
 return VAR_2;
}
