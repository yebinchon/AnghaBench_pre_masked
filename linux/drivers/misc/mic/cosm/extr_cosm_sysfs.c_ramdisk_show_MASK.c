
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {char* ramdisk; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cosm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct cosm_device *VAR_5 = FUNC_0(VAR_2);
 char *VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->ramdisk;

 if (VAR_6)
  return FUNC_1(VAR_4, VAR_1, "%s\n", VAR_6);
 return 0;
}
