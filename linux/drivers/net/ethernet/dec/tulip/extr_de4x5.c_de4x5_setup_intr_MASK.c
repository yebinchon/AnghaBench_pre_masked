
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_1(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;
    s32 VAR_8, VAR_9;

    if (FUNC_0(VAR_0) & VAR_3) {
 VAR_8 = 0;
 VAR_4;
 VAR_9 = FUNC_0(VAR_1);
 FUNC_2(VAR_9, VAR_1);
 VAR_2;
    }
}
