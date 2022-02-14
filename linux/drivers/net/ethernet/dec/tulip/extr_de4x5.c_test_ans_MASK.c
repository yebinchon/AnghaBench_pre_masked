
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_6, s32 VAR_7, s32 VAR_8, s32 VAR_9)
{
    struct de4x5_private *VAR_10 = FUNC_1(VAR_6);
    u_long VAR_11 = VAR_6->base_addr;
    s32 VAR_12, VAR_13;

    if (VAR_10->timeout < 0) {
 VAR_10->timeout = VAR_9/100;
 FUNC_2(VAR_8, VAR_1);


 VAR_12 = FUNC_0(VAR_3);
 FUNC_2(VAR_12, VAR_3);
    }

    VAR_13 = FUNC_0(VAR_2) & VAR_4;
    VAR_12 = FUNC_0(VAR_3) & ~VAR_5;

    if (!(VAR_12 & VAR_7) && (VAR_13 ^ VAR_0) && --VAR_10->timeout) {
 VAR_12 = 100 | VAR_5;
    } else {
 VAR_10->timeout = -1;
    }

    return VAR_12;
}
