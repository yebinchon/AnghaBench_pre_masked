
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dev_addr; int mtu; } ;
struct TYPE_2__ {int descs_dma; scalar_t__ dirty; scalar_t__ curr; } ;
struct ag71xx {TYPE_1__ tx_ring; struct net_device* ndev; int mac_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ag71xx*,int ) ;
 int FUNC_6 (struct ag71xx*,int) ;
 int FUNC_7 (struct ag71xx*,int ,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct ag71xx *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->ndev;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_3(VAR_4);

 VAR_7 = FUNC_5(VAR_4, VAR_1);
 VAR_6 = FUNC_5(VAR_4, VAR_2);

 FUNC_6(VAR_4, 1);

 FUNC_9(VAR_4->mac_reset);
 FUNC_11(10, 20);
 FUNC_10(VAR_4->mac_reset);
 FUNC_11(10, 20);

 FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 VAR_4->tx_ring.curr = 0;
 VAR_4->tx_ring.dirty = 0;
 FUNC_8(VAR_4->ndev);


 FUNC_7(VAR_4, VAR_0,
    FUNC_4(VAR_4->ndev->mtu));

 FUNC_7(VAR_4, VAR_2, VAR_6);
 FUNC_7(VAR_4, VAR_3, VAR_4->tx_ring.descs_dma);
 FUNC_7(VAR_4, VAR_1, VAR_7);

 FUNC_1(VAR_4, VAR_5->dev_addr);
}
