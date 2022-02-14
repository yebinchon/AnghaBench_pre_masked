
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int irq; } ;
struct mace_data {int tx_ring_phys; int tx_ring; int device; int rx_ring_phys; int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct mace_data* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct net_device *VAR_5 = FUNC_4(VAR_4);
 struct mace_data *VAR_6 = FUNC_3(VAR_5);

 FUNC_5(VAR_5);

 FUNC_1(VAR_5->irq, VAR_5);
 FUNC_1(VAR_0, VAR_5);

 FUNC_0(VAR_6->device, VAR_2 * VAR_1,
                   VAR_6->rx_ring, VAR_6->rx_ring_phys);
 FUNC_0(VAR_6->device, VAR_3 * VAR_1,
                   VAR_6->tx_ring, VAR_6->tx_ring_phys);

 FUNC_2(VAR_5);

 return 0;
}
