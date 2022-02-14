
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bna_rxf {scalar_t__ vlan_filter_status; scalar_t__ vlan_pending_bitmask; } ;
struct bna_rx {struct bna_rxf rxf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bna_rxf*,int ) ;

void
FUNC_1(struct bna_rx *VAR_4)
{
 struct bna_rxf *VAR_5 = &VAR_4->rxf;

 if (VAR_5->vlan_filter_status == VAR_1) {
  VAR_5->vlan_filter_status = VAR_2;
  VAR_5->vlan_pending_bitmask = (u8)VAR_0;
  FUNC_0(VAR_5, VAR_3);
 }
}
