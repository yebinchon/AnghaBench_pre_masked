
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvneta_port {int tx_ring_size; scalar_t__ rx_ring_size; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; int tx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct mvneta_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int ,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6,
     struct ethtool_ringparam *VAR_7)
{
 struct mvneta_port *VAR_8 = FUNC_4(VAR_6);

 if ((VAR_7->rx_pending == 0) || (VAR_7->tx_pending == 0))
  return -VAR_0;
 VAR_8->rx_ring_size = VAR_7->rx_pending < VAR_2 ?
  VAR_7->rx_pending : VAR_2;

 VAR_8->tx_ring_size = FUNC_0(VAR_5, VAR_7->tx_pending,
       VAR_3 * 2, VAR_4);
 if (VAR_8->tx_ring_size != VAR_7->tx_pending)
  FUNC_5(VAR_6, "TX queue size set to %u (requested %u)\n",
       VAR_8->tx_ring_size, VAR_7->tx_pending);

 if (FUNC_6(VAR_6)) {
  FUNC_2(VAR_6);
  if (FUNC_1(VAR_6)) {
   FUNC_3(VAR_6,
       "error on opening device after ring param change\n");
   return -VAR_1;
  }
 }

 return 0;
}
