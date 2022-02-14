
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_wdt {scalar_t__ base; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct aspeed_wdt* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4, const char *VAR_5,
    size_t VAR_6)
{
 struct aspeed_wdt *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;

 if (FUNC_1(VAR_5, 10, &VAR_8))
  return -VAR_0;

 if (VAR_8)
  FUNC_2(VAR_1,
         VAR_7->base + VAR_2);

 return VAR_6;
}
