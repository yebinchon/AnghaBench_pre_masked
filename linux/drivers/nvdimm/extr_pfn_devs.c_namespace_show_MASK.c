
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_pfn {TYPE_1__* ndns; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,char*) ;
 struct nd_pfn* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_pfn *VAR_3 = FUNC_4(VAR_0);
 ssize_t VAR_4;

 FUNC_1(VAR_0);
 VAR_4 = FUNC_3(VAR_2, "%s\n", VAR_3->ndns
   ? FUNC_0(&VAR_3->ndns->dev) : "");
 FUNC_2(VAR_0);
 return VAR_4;
}
