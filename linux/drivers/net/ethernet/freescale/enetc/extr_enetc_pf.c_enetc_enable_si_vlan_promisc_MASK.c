
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_pf {int vlan_promisc_simap; TYPE_1__* si; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_pf *VAR_0, int VAR_1)
{
 VAR_0->vlan_promisc_simap |= FUNC_0(VAR_1);
 FUNC_1(&VAR_0->si->hw, VAR_0->vlan_promisc_simap);
}
