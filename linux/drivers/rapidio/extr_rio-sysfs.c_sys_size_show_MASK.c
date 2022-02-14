
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int sys_size; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct rio_mport* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct rio_mport *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4)
  return FUNC_0(VAR_3, "%u\n", VAR_4->sys_size);
 else
  return -VAR_0;
}
