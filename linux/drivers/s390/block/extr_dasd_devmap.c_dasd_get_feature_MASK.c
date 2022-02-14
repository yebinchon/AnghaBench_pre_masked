
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_devmap {int features; } ;
struct ccw_device {int dev; } ;


 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int FUNC_1 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct ccw_device *VAR_0, int VAR_1)
{
 struct dasd_devmap *VAR_2;

 VAR_2 = FUNC_2(FUNC_3(&VAR_0->dev));
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 return ((VAR_2->features & VAR_1) != 0);
}
