
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,long*) ;
 scalar_t__ FUNC_1 (char*,char*,long) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 long VAR_4;

 VAR_3 = FUNC_0(FUNC_2(VAR_0), &VAR_4);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(VAR_2, "%ld\n", VAR_4);

 return VAR_3;
}
