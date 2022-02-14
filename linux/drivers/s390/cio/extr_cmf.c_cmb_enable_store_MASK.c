
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 struct ccw_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct ccw_device *VAR_5 = FUNC_3(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, 16, &VAR_6);
 if (VAR_7)
  return VAR_7;

 switch (VAR_6) {
 case 0:
  VAR_7 = FUNC_0(VAR_5);
  break;
 case 1:
  VAR_7 = FUNC_1(VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7 ? VAR_7 : VAR_4;
}
