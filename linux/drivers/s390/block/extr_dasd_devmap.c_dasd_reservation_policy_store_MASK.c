
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccw_device*,int ,int) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 struct ccw_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct ccw_device *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (FUNC_1("ignore", VAR_4))
  VAR_7 = FUNC_0(VAR_6, VAR_0, 0);
 else if (FUNC_1("fail", VAR_4))
  VAR_7 = FUNC_0(VAR_6, VAR_0, 1);
 else
  VAR_7 = -VAR_1;

 return VAR_7 ? : VAR_5;
}
