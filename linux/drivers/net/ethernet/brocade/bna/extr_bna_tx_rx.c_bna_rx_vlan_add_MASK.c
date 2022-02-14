
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int* vlan_filter_table; scalar_t__ vlan_filter_status; int vlan_pending_bitmask; } ;
struct bna_rx {struct bna_rxf rxf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bna_rxf*,int ) ;

void
FUNC_2(struct bna_rx *VAR_5, int VAR_6)
{
 struct bna_rxf *VAR_7 = &VAR_5->rxf;
 int VAR_8 = (VAR_6 >> VAR_2);
 int VAR_9 = FUNC_0(VAR_6 & VAR_1);
 int VAR_10 = (VAR_6 >> VAR_0);

 VAR_7->vlan_filter_table[VAR_8] |= VAR_9;
 if (VAR_7->vlan_filter_status == VAR_3) {
  VAR_7->vlan_pending_bitmask |= FUNC_0(VAR_10);
  FUNC_1(VAR_7, VAR_4);
 }
}
