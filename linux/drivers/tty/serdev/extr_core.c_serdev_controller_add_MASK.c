
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_controller {int dev; int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct serdev_controller*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct serdev_controller*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct serdev_controller *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;


 if (FUNC_0(!VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_3->dev);
 if (VAR_6)
  return VAR_6;

 FUNC_7(&VAR_3->dev);

 VAR_4 = FUNC_5(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_4 && VAR_5) {
  FUNC_2(&VAR_3->dev, "no devices registered: of:%d acpi:%d\n",
   VAR_4, VAR_5);
  VAR_6 = -VAR_1;
  goto err_rpm_disable;
 }

 FUNC_2(&VAR_3->dev, "serdev%d registered: dev:%p\n",
  VAR_3->nr, VAR_3->dev);
 return 0;

err_rpm_disable:
 FUNC_6(&VAR_3->dev);
 FUNC_4(&VAR_3->dev);
 return VAR_6;
}
