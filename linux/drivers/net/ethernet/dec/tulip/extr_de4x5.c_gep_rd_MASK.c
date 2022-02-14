
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_4)
{
    struct de4x5_private *VAR_5 = FUNC_1(VAR_4);
    u_long VAR_6 = VAR_4->base_addr;

    if (VAR_5->chipset == VAR_0) {
 return FUNC_0(VAR_2);
    } else if ((VAR_5->chipset & ~0x00ff) == VAR_1) {
 return FUNC_0(VAR_3) & 0x000fffff;
    }

    return 0;
}
