
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int timeout; scalar_t__ chipset; scalar_t__ useSROM; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5, s32 VAR_6, s32 VAR_7, s32 VAR_8, s32 VAR_9, s32 VAR_10, s32 VAR_11)
{
    struct de4x5_private *VAR_12 = FUNC_1(VAR_5);
    u_long VAR_13 = VAR_5->base_addr;
    s32 VAR_14, VAR_15;

    if (VAR_12->timeout < 0) {
 VAR_12->timeout = VAR_11/100;
 if (!VAR_12->useSROM) {
     FUNC_3(VAR_5, VAR_8, VAR_9, VAR_10);
 }


 FUNC_2(VAR_7, VAR_1);


 VAR_14 = FUNC_0(VAR_3);
 FUNC_2(VAR_14, VAR_3);


 if ((VAR_12->chipset == VAR_0) || VAR_12->useSROM) {
     VAR_15 = FUNC_0(VAR_2);
     FUNC_2(VAR_15, VAR_2);
 }
    }

    VAR_14 = FUNC_0(VAR_3) & ~VAR_4;

    if (!(VAR_14 & VAR_6) && --VAR_12->timeout) {
 VAR_14 = 100 | VAR_4;
    } else {
 VAR_12->timeout = -1;
    }

    return VAR_14;
}
