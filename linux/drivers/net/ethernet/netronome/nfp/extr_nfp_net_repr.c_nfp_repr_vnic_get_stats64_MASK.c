
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {void* rx_dropped; void* rx_bytes; void* rx_packets; void* tx_dropped; void* tx_bytes; void* tx_packets; } ;
struct nfp_port {scalar_t__ vnic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nfp_port *VAR_6,
     struct rtnl_link_stats64 *VAR_7)
{



 VAR_7->tx_packets = FUNC_0(VAR_6->vnic + VAR_1);
 VAR_7->tx_bytes = FUNC_0(VAR_6->vnic + VAR_2);
 VAR_7->tx_dropped = FUNC_0(VAR_6->vnic + VAR_0);

 VAR_7->rx_packets = FUNC_0(VAR_6->vnic + VAR_4);
 VAR_7->rx_bytes = FUNC_0(VAR_6->vnic + VAR_5);
 VAR_7->rx_dropped = FUNC_0(VAR_6->vnic + VAR_3);
}
