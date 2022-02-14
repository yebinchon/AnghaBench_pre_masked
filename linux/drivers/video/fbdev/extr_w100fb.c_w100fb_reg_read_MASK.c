
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5, VAR_6;
 VAR_5 = FUNC_2(VAR_3, ((void*)0), 16);
 VAR_6 = FUNC_1(VAR_0 + VAR_5);
 FUNC_0("Read Register 0x%08lX: 0x%08lX\n", VAR_5, VAR_6);
 return VAR_4;
}
