
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_mmc_host {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct goldfish_mmc_host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct goldfish_mmc_host*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct goldfish_mmc_host *VAR_3 = FUNC_0(VAR_0);

 return FUNC_2(VAR_2, "%s\n", FUNC_1(VAR_3) ? "open" :
         "closed");
}
