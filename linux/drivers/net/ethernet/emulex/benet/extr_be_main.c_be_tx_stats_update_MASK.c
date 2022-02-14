
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct be_tx_stats {int tx_pkts; int tx_vxlan_offload_pkts; int sync; int tx_bytes; int tx_reqs; } ;
struct be_tx_obj {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_segs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct be_tx_stats* FUNC_2 (struct be_tx_obj*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct be_tx_obj *VAR_1, struct sk_buff *VAR_2)
{
 struct be_tx_stats *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = FUNC_1(VAR_2)->gso_segs ? : 1;

 u32 VAR_5 = VAR_4 > 1 ? FUNC_0(VAR_2) * (VAR_4 - 1) : 0;

 FUNC_3(&VAR_3->sync);
 VAR_3->tx_reqs++;
 VAR_3->tx_bytes += VAR_2->len + VAR_5;
 VAR_3->tx_pkts += VAR_4;
 if (VAR_2->encapsulation && VAR_2->ip_summed == VAR_0)
  VAR_3->tx_vxlan_offload_pkts += VAR_4;
 FUNC_4(&VAR_3->sync);
}
