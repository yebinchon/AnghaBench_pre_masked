
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int tx_pool_size; int ndev_dev; int tx_pool; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct netcp_intf*,int ) ;
 struct netcp_intf* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct netcp_intf *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2 = FUNC_1(VAR_1->tx_pool);

 FUNC_0(VAR_1->ndev_dev, "transmit timed out tx descs(%d)\n", VAR_2);
 FUNC_2(VAR_1, VAR_1->tx_pool_size);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
}
