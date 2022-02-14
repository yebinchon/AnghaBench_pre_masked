
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_device {size_t addr; int flags; TYPE_1__* bus; } ;
struct TYPE_2__ {struct mdio_device** mdio_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mdio_device*,int) ;
 int FUNC_1 (struct mdio_device*) ;
 int FUNC_2 (struct mdio_device*) ;

int FUNC_3(struct mdio_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->bus->mdio_map[VAR_2->addr])
  return -VAR_0;

 if (VAR_2->flags & VAR_1) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;


  FUNC_0(VAR_2, 1);
 }

 VAR_2->bus->mdio_map[VAR_2->addr] = VAR_2;

 return 0;
}
