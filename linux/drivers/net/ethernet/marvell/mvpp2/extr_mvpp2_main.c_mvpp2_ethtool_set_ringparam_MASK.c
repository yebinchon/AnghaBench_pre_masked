
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct net_device {int dummy; } ;
struct mvpp2_port {void* tx_ring_size; void* rx_ring_size; } ;
struct ethtool_ringparam {void* tx_pending; void* rx_pending; } ;


 int FUNC_0 (struct net_device*,struct ethtool_ringparam*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 int FUNC_5 (struct mvpp2_port*) ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 int FUNC_8 (struct mvpp2_port*) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct mvpp2_port* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0,
           struct ethtool_ringparam *VAR_1)
{
 struct mvpp2_port *VAR_2 = FUNC_10(VAR_0);
 u16 VAR_3 = VAR_2->rx_ring_size;
 u16 VAR_4 = VAR_2->tx_ring_size;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_11(VAR_0)) {
  VAR_2->rx_ring_size = VAR_1->rx_pending;
  VAR_2->tx_ring_size = VAR_1->tx_pending;
  return 0;
 }




 FUNC_8(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 VAR_2->rx_ring_size = VAR_1->rx_pending;
 VAR_2->tx_ring_size = VAR_1->tx_pending;

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5) {

  VAR_2->rx_ring_size = VAR_3;
  VAR_1->rx_pending = VAR_3;
  VAR_5 = FUNC_5(VAR_2);
  if (VAR_5)
   goto err_out;
 }
 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5) {

  VAR_2->tx_ring_size = VAR_4;
  VAR_1->tx_pending = VAR_4;
  VAR_5 = FUNC_6(VAR_2);
  if (VAR_5)
   goto err_clean_rxqs;
 }

 FUNC_7(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 return 0;

err_clean_rxqs:
 FUNC_1(VAR_2);
err_out:
 FUNC_9(VAR_0, "failed to change ring parameters");
 return VAR_5;
}
