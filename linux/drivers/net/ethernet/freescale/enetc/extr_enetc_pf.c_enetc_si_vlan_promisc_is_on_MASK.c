
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_pf {int vlan_promisc_simap; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct enetc_pf *VAR_0, int VAR_1)
{
 return VAR_0->vlan_promisc_simap & FUNC_0(VAR_1);
}
