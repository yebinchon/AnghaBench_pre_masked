
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ddb {TYPE_2__* link; } ;
typedef int ssize_t ;
struct TYPE_3__ {int hwid; } ;
struct TYPE_4__ {TYPE_1__ ids; } ;


 struct ddb* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "0x%08X\n", VAR_3->link[0].ids.hwid);
}
