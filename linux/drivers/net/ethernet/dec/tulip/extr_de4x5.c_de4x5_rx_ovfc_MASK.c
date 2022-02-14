
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {size_t rx_new; int rxRingSize; TYPE_1__* rx_ring; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_3(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_0);
    FUNC_4(VAR_8 & ~VAR_2, VAR_0);
    while (FUNC_1(VAR_1) & VAR_4);

    for (; (s32)FUNC_2(VAR_6->rx_ring[VAR_6->rx_new].status)>=0;) {
 VAR_6->rx_ring[VAR_6->rx_new].status = FUNC_0(VAR_3);
 VAR_6->rx_new = (VAR_6->rx_new + 1) % VAR_6->rxRingSize;
    }

    FUNC_4(VAR_8, VAR_0);

    return 0;
}
