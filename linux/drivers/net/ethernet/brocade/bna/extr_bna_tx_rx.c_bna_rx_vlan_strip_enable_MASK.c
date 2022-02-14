
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {scalar_t__ vlan_strip_status; int vlan_strip_pending; } ;
struct bna_rx {struct bna_rxf rxf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rxf*,int ) ;

void
FUNC_1(struct bna_rx *VAR_3)
{
 struct bna_rxf *VAR_4 = &VAR_3->rxf;

 if (VAR_4->vlan_strip_status == VAR_0) {
  VAR_4->vlan_strip_status = VAR_1;
  VAR_4->vlan_strip_pending = 1;
  FUNC_0(VAR_4, VAR_2);
 }
}
