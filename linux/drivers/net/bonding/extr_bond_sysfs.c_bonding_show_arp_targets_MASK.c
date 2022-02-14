
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__* arp_targets; } ;
struct bonding {TYPE_1__ params; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__*) ;
 struct bonding* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct bonding *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->params.arp_targets[VAR_5])
   VAR_6 += FUNC_0(VAR_3 + VAR_6, "%pI4 ",
           &VAR_4->params.arp_targets[VAR_5]);
 }
 if (VAR_6)
  VAR_3[VAR_6-1] = '\n';

 return VAR_6;
}
