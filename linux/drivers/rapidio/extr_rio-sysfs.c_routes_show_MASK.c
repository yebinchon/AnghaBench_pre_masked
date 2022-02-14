
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rio_dev {TYPE_1__* rswitch; TYPE_2__* net; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int sys_size; } ;
struct TYPE_5__ {TYPE_3__* hport; } ;
struct TYPE_4__ {scalar_t__* route_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,scalar_t__) ;
 struct rio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct rio_dev *VAR_4 = FUNC_2(VAR_1);
 char *VAR_5 = VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->net->hport->sys_size);
   VAR_6++) {
  if (VAR_4->rswitch->route_table[VAR_6] == VAR_0)
   continue;
  VAR_5 +=
      FUNC_1(VAR_5, "%04x %02x\n", VAR_6,
       VAR_4->rswitch->route_table[VAR_6]);
 }

 return (VAR_5 - VAR_3);
}
