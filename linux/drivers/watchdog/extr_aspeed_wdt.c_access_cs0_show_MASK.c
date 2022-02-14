
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_wdt {scalar_t__ base; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct aspeed_wdt* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct aspeed_wdt *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = FUNC_1(VAR_5->base + VAR_0);

 return FUNC_2(VAR_4, "%u\n",
        !(VAR_6 & VAR_1));
}
