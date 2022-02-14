
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {scalar_t__ chipset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_9)
{
    struct de4x5_private *VAR_10 = FUNC_1(VAR_9);
    u_long VAR_11 = VAR_9->base_addr;
    int VAR_12;

    VAR_12 = FUNC_0(VAR_2);
    if (!(VAR_12 & VAR_4) || (VAR_10->chipset==VAR_1) || (VAR_10->chipset==VAR_0)) {
 VAR_12 &= ~(VAR_6|VAR_5);
 FUNC_2(VAR_12, VAR_2);
 while (FUNC_0(VAR_3) & VAR_8);
 if ((VAR_12 & VAR_7) < VAR_7) {
     VAR_12 += 0x4000;
 } else {
     VAR_12 |= VAR_4;
 }
 FUNC_2(VAR_12 | VAR_6 | VAR_5, VAR_2);
    }

    return 0;
}
