
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef long ssize_t ;


 long VAR_0 ;
 int VAR_1 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 long FUNC_2 (struct hl_device*,int ,int) ;
 long FUNC_3 (char*,char*,long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct hl_device *VAR_5 = FUNC_0(VAR_2);
 long VAR_6;

 if (FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, VAR_1, 1);

 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_3(VAR_4, "%lu\n", VAR_6);
}
