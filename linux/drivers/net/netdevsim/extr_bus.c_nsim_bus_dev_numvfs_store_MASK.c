
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bus_dev {unsigned int num_vfs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned int*) ;
 int FUNC_1 (struct nsim_bus_dev*) ;
 int FUNC_2 (struct nsim_bus_dev*,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct nsim_bus_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct nsim_bus_dev *VAR_5 = FUNC_5(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3();
 if (VAR_5->num_vfs == VAR_6)
  goto exit_good;
 if (VAR_5->num_vfs && VAR_6) {
  VAR_7 = -VAR_0;
  goto exit_unlock;
 }

 if (VAR_6) {
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  if (VAR_7)
   goto exit_unlock;
 } else {
  FUNC_1(VAR_5);
 }
exit_good:
 VAR_7 = VAR_4;
exit_unlock:
 FUNC_4();

 return VAR_7;
}
