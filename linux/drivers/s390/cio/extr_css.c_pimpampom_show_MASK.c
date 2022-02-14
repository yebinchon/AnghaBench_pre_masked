
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcw {int pim; int pam; int pom; } ;
struct TYPE_2__ {struct pmcw pmcw; } ;
struct subchannel {TYPE_1__ schib; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct subchannel *VAR_3 = FUNC_1(VAR_0);
 struct pmcw *VAR_4 = &VAR_3->schib.pmcw;

 return FUNC_0(VAR_2, "%02x %02x %02x\n",
         VAR_4->pim, VAR_4->pam, VAR_4->pom);
}
