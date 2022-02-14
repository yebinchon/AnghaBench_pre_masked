
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_4__ {int csr15; int csr14; int csr13; int gepc; int gep; } ;
struct de4x5_private {int ibn; size_t active; TYPE_2__ cache; TYPE_1__* phy; scalar_t__ useSROM; } ;
typedef int s32 ;
struct TYPE_3__ {int gep; int rst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_4, s32 VAR_5, s32 VAR_6, s32 VAR_7)
{
    struct de4x5_private *VAR_8 = FUNC_1(VAR_4);
    u_long VAR_9 = VAR_4->base_addr;

    VAR_3;
    if (VAR_8->useSROM) {
 if (VAR_8->ibn == 3) {
     FUNC_3(VAR_4, VAR_8->phy[VAR_8->active].rst);
     FUNC_3(VAR_4, VAR_8->phy[VAR_8->active].gep);
     FUNC_2(1, VAR_0);
     return;
 } else {
     VAR_7 = VAR_8->cache.csr15;
     VAR_6 = VAR_8->cache.csr14;
     VAR_5 = VAR_8->cache.csr13;
     FUNC_2(VAR_7 | VAR_8->cache.gepc, VAR_1);
     FUNC_2(VAR_7 | VAR_8->cache.gep, VAR_1);
 }
    } else {
 FUNC_2(VAR_7, VAR_1);
    }
    FUNC_2(VAR_6, VAR_2);
    FUNC_2(VAR_5, VAR_0);

    FUNC_0(10);
}
