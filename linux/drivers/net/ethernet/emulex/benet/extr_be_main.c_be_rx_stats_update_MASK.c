
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_rx_stats {int sync; int rx_compl_err; int rx_mcast_pkts; int rx_vxlan_offload_pkts; int rx_pkts; int rx_bytes; int rx_compl; } ;
struct be_rx_obj {int dummy; } ;
struct be_rx_compl_info {scalar_t__ pkt_type; scalar_t__ err; scalar_t__ tunneled; scalar_t__ pkt_size; } ;


 scalar_t__ VAR_0 ;
 struct be_rx_stats* FUNC_0 (struct be_rx_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct be_rx_obj *VAR_1,
          struct be_rx_compl_info *VAR_2)
{
 struct be_rx_stats *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->sync);
 VAR_3->rx_compl++;
 VAR_3->rx_bytes += VAR_2->pkt_size;
 VAR_3->rx_pkts++;
 if (VAR_2->tunneled)
  VAR_3->rx_vxlan_offload_pkts++;
 if (VAR_2->pkt_type == VAR_0)
  VAR_3->rx_mcast_pkts++;
 if (VAR_2->err)
  VAR_3->rx_compl_err++;
 FUNC_2(&VAR_3->sync);
}
