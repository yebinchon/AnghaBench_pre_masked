
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ethtool_flow_ext {scalar_t__ vlan_tci; scalar_t__ vlan_etype; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ethtool_flow_ext *VAR_4,
    struct ethtool_flow_ext *VAR_5,
    void *VAR_6, void *VAR_7, u64 *VAR_8)
{
 int VAR_9;

 if (VAR_5->vlan_etype)
  return -VAR_1;

 if (VAR_5->vlan_tci) {
  VAR_9 = FUNC_0(VAR_2, VAR_3);
  *(__be16 *)(VAR_6 + VAR_9) = VAR_4->vlan_tci;
  *(__be16 *)(VAR_7 + VAR_9) = VAR_5->vlan_tci;
  *VAR_8 |= VAR_0;
 }

 return 0;
}
