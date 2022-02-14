
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {size_t vovp; } ;
struct bq24257_device {TYPE_1__ init_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int * VAR_1 ;
 struct power_supply* FUNC_0 (struct device*) ;
 struct bq24257_device* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct power_supply *VAR_5 = FUNC_0(VAR_2);
 struct bq24257_device *VAR_6 = FUNC_1(VAR_5);

 return FUNC_2(VAR_4, VAR_0, "%u\n",
    VAR_1[VAR_6->init_data.vovp]);
}
