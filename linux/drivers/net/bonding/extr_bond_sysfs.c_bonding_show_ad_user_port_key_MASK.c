
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ad_user_port_key; } ;
struct bonding {TYPE_1__ params; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 struct bonding* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct bonding *VAR_5 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_5) == VAR_0 && FUNC_1(VAR_1))
  return FUNC_2(VAR_4, "%hu\n", VAR_5->params.ad_user_port_key);

 return 0;
}
