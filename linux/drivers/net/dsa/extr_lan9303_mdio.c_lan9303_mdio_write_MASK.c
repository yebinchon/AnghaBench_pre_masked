
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lan9303_mdio {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct lan9303_mdio *VAR_3 = (struct lan9303_mdio *)VAR_0;

 VAR_1 <<= 2;
 FUNC_1(&VAR_3->device->bus->mdio_lock);
 FUNC_0(VAR_3->device, VAR_1, VAR_2 & 0xffff);
 FUNC_0(VAR_3->device, VAR_1 + 2, (VAR_2 >> 16) & 0xffff);
 FUNC_2(&VAR_3->device->bus->mdio_lock);

 return 0;
}
