
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {size_t active; int chipset; TYPE_1__* phy; scalar_t__ useMII; int useSROM; } ;
struct TYPE_2__ {int addr; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_2(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;

    if (VAR_6->phy[VAR_6->active].id && (!VAR_6->useSROM || VAR_6->useMII)) {
 return FUNC_1(VAR_3, VAR_6->phy[VAR_6->active].addr, VAR_1);
    } else if ((VAR_6->chipset & ~0x00ff) == VAR_0) {
 return (FUNC_0(VAR_2) & VAR_4) >> 12;
    } else {
 return 0;
    }
}
