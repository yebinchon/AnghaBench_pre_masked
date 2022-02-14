
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int product; } ;
struct ulpi {TYPE_1__ id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (char*,char*,int,int) ;
 struct ulpi* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 int VAR_5;
 struct ulpi *VAR_6 = FUNC_2(VAR_2);

 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_1);
 if (VAR_5 != -VAR_0)
  return VAR_5;

 return FUNC_1(VAR_4, "ulpi:v%04xp%04x\n",
         VAR_6->id.vendor, VAR_6->id.product);
}
