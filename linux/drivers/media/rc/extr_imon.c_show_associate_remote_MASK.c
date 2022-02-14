
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int lock; scalar_t__ rf_isassociating; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct imon_context* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct imon_context *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 if (VAR_5->rf_isassociating)
  FUNC_5(VAR_4, "associating\n", VAR_1);
 else
  FUNC_5(VAR_4, "closed\n", VAR_1);

 FUNC_1(VAR_2, "Visit http://www.lirc.org/html/imon-24g.html for instructions on how to associate your iMON 2.4G DT/LT remote\n");
 FUNC_3(&VAR_5->lock);
 return FUNC_4(VAR_4);
}
