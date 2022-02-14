
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int (* enable_get ) (struct fieldbus_dev*) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fieldbus_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct fieldbus_dev*) ;
 int FUNC_3 (struct fieldbus_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct fieldbus_dev *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->enable_get)
  return -VAR_0;
 return FUNC_1(VAR_3, "%d\n", !!VAR_4->enable_get(VAR_4));
}
