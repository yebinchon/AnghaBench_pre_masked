
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int write_area_sz; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fieldbus_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct fieldbus_dev *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%zu\n", VAR_3->write_area_sz);
}
