
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int (* fieldbus_id_get ) (struct fieldbus_dev*,char*,int ) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fieldbus_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fieldbus_dev*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct fieldbus_dev *VAR_4 = FUNC_0(VAR_1);

 return VAR_4->fieldbus_id_get(VAR_4, VAR_3, VAR_0);
}
