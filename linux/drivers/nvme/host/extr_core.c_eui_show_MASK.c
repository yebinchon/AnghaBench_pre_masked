
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int eui64; } ;
struct TYPE_4__ {TYPE_1__ ids; } ;


 TYPE_2__* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 return FUNC_1(VAR_2, "%8ph\n", FUNC_0(VAR_0)->ids.eui64);
}
