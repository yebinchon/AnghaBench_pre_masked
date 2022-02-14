
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int csr15; } ;
struct de4x5_private {int chipset; TYPE_1__ cache; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(s32 VAR_4, struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_0(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;

    if (VAR_6->chipset == VAR_0) {
 FUNC_1(VAR_4, VAR_2);
    } else if ((VAR_6->chipset & ~0x00ff) == VAR_1) {
 FUNC_1((VAR_4<<16) | VAR_6->cache.csr15, VAR_3);
    }
}
