
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,struct device_attribute*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(VAR_3, 0, &VAR_5) < 0)
  return -VAR_0;

 if (VAR_5 && FUNC_0(VAR_1, VAR_2))
  FUNC_2(FUNC_3(VAR_1));
 return VAR_4;
}
