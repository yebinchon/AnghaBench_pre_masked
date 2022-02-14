
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
typedef int u_char ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int csr13; int csr14; } ;
struct de4x5_private {int ibn; scalar_t__ chipset; TYPE_1__ cache; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_4, u_char *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_3(VAR_4);
    u_long VAR_7 = VAR_4->base_addr;
    u_char VAR_8 = (VAR_5 ? *VAR_5++ : 0);
    u_short *VAR_9 = (u_short *)VAR_5;

    if (((VAR_6->ibn != 1) && (VAR_6->ibn != 3) && (VAR_6->ibn != 5)) || !VAR_8) return;

    if (VAR_6->chipset != VAR_0) VAR_3;

    while (VAR_8--) {
 FUNC_0(((VAR_6->chipset==VAR_0) && (VAR_6->ibn!=5) ?
                                     *VAR_5++ : FUNC_1(VAR_9++)), VAR_4);
 FUNC_2(2);
    }

    if (VAR_6->chipset != VAR_0) {
 FUNC_4(VAR_6->cache.csr14, VAR_2);
 FUNC_4(VAR_6->cache.csr13, VAR_1);
    }
}
