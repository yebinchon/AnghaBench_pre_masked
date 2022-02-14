
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*,char*,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5, VAR_6;
 FUNC_1(VAR_3, "%lx %lx", &VAR_5, &VAR_6);

 if (VAR_5 <= 0x2000) {
  FUNC_0("Write Register 0x%08lX: 0x%08lX\n", VAR_5, VAR_6);
  FUNC_2(VAR_6, VAR_0 + VAR_5);
 }

 return VAR_4;
}
