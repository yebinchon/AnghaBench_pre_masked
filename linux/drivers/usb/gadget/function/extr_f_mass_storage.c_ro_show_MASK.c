
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fsg_lun* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fsg_lun*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct fsg_lun *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, VAR_2);
}
