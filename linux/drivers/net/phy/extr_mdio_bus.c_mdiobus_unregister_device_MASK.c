
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_device {size_t addr; TYPE_1__* bus; } ;
struct TYPE_2__ {struct mdio_device** mdio_map; } ;


 int VAR_0 ;

int FUNC_0(struct mdio_device *VAR_1)
{
 if (VAR_1->bus->mdio_map[VAR_1->addr] != VAR_1)
  return -VAR_0;

 VAR_1->bus->mdio_map[VAR_1->addr] = ((void*)0);

 return 0;
}
