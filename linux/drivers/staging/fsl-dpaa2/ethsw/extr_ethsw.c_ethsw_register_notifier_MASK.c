
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3, "Failed to register netdev notifier\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_3, "Failed to register switchdev notifier\n");
  goto err_switchdev_nb;
 }

 VAR_4 = FUNC_2(&VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3, "Failed to register switchdev blocking notifier\n");
  goto err_switchdev_blocking_nb;
 }

 return 0;

err_switchdev_blocking_nb:
 FUNC_5(&VAR_2);
err_switchdev_nb:
 FUNC_4(&VAR_0);
 return VAR_4;
}
