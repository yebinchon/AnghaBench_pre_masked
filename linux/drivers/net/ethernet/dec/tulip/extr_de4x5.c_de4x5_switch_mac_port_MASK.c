
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int csr15; int csr14; int csr13; int gep; int gepc; } ;
struct de4x5_private {int infoblock_csr6; int chipset; TYPE_1__ cache; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static long
FUNC_5(struct net_device *VAR_12)
{
    struct de4x5_private *VAR_13 = FUNC_2(VAR_12);
    u_long VAR_14 = VAR_12->base_addr;
    s32 VAR_15;

    VAR_11;


    VAR_15 = (FUNC_1(VAR_3) & ~(VAR_7 | VAR_5 | VAR_9 | VAR_6 | VAR_8 |
                                                VAR_4));
    VAR_15 |= VAR_13->infoblock_csr6;
    if (VAR_15 & VAR_7) VAR_15 |= VAR_5;
    FUNC_3(VAR_15, VAR_3);


    VAR_10;


    if (VAR_13->chipset == VAR_0) {
 FUNC_0(VAR_13->cache.gepc, VAR_12);
 FUNC_0(VAR_13->cache.gep, VAR_12);
    } else if ((VAR_13->chipset & ~0x0ff) == VAR_1) {
 FUNC_4(VAR_12, VAR_13->cache.csr13, VAR_13->cache.csr14, VAR_13->cache.csr15);
    }


    FUNC_3(VAR_15, VAR_3);


    FUNC_1(VAR_2);

    return VAR_15;
}
