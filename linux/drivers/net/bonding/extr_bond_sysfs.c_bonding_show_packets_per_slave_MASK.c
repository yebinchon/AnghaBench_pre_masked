
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int packets_per_slave; } ;
struct bonding {TYPE_1__ params; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned int) ;
 struct bonding* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct bonding *VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4 = VAR_3->params.packets_per_slave;

 return FUNC_0(VAR_2, "%u\n", VAR_4);
}
