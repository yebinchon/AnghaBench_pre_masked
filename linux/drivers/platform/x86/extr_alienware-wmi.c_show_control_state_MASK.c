
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_4,
      struct device_attribute *VAR_5, char *VAR_6)
{
 if (VAR_3 == VAR_0)
  return FUNC_0(VAR_6, VAR_2, "[booting] running suspend\n");
 else if (VAR_3 == VAR_1)
  return FUNC_0(VAR_6, VAR_2, "booting running [suspend]\n");
 return FUNC_0(VAR_6, VAR_2, "booting [running] suspend\n");
}
