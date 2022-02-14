
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_path {int shared; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;
 struct channel_path* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct channel_path *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_3)
  return 0;
 if (VAR_3->shared == -1)
  return FUNC_0(VAR_2, "unknown\n");
 return FUNC_0(VAR_2, "%x\n", VAR_3->shared);
}
