
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int FUNC_0 (struct phy_device*,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct phy_device *VAR_0, int VAR_1, u32 VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->mdio.bus->mdio_lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->mdio.bus->mdio_lock);

 return VAR_5;
}
