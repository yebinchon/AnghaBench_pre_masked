
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct net_device {int base_addr; } ;
struct de4x5_private {long timeout; size_t active; TYPE_1__* phy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, int VAR_3, int VAR_4, bool VAR_5, long VAR_6)
{
    struct de4x5_private *VAR_7 = FUNC_1(VAR_2);
    int VAR_8;
    u_long VAR_9 = VAR_2->base_addr;

    if (VAR_7->timeout < 0) {
 VAR_7->timeout = VAR_6/100;
    }

    VAR_3 = FUNC_0((u_char)VAR_3, VAR_7->phy[VAR_7->active].addr, VAR_0) & VAR_4;
    VAR_8 = (VAR_3 ^ (VAR_5 ? ~0 : 0)) & VAR_4;

    if (VAR_8 && --VAR_7->timeout) {
 VAR_3 = 100 | VAR_1;
    } else {
 VAR_7->timeout = -1;
    }

    return VAR_3;
}
