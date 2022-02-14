
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int*,int ,int) ;
 int FUNC_1 (struct device*,int*,int ,int) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_3(VAR_5, 0, &VAR_8))
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_3, &VAR_7, VAR_0, 1);
 if (VAR_9)
  return VAR_9;

 if (VAR_8) {
  VAR_7 |= VAR_1;
  VAR_9 = FUNC_1(VAR_3, &VAR_7, VAR_0, 1);
  if (VAR_9)
   return VAR_9;

  FUNC_2(VAR_3, "Enabled trickle charge FET bypass.\n");
 } else {
  VAR_7 &= ~VAR_1;
  VAR_9 = FUNC_1(VAR_3, &VAR_7, VAR_0, 1);
  if (VAR_9)
   return VAR_9;

  FUNC_2(VAR_3, "Disabled trickle charge FET bypass.\n");
 }

 return VAR_6;
}
