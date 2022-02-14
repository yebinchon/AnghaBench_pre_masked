
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int timeout; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_4, s32 VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_1(VAR_4);
    u_long VAR_7 = VAR_4->base_addr;
    int VAR_8;

    if (VAR_6->timeout < 0) {
 VAR_6->timeout = VAR_5/100;
    }

    VAR_8 = (FUNC_0(VAR_0) & ~VAR_3) & (VAR_1 | VAR_2);

    if (VAR_8 && --VAR_6->timeout) {
 VAR_8 = 100 | VAR_3;
    } else {
 VAR_6->timeout = -1;
    }

    return VAR_8;
}
