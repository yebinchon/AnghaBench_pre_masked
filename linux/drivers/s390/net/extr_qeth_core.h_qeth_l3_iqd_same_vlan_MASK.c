
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_hdr_layer3 {int ext_flags; scalar_t__ vlan_id; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct qeth_hdr_layer3 *VAR_1,
      struct qeth_hdr_layer3 *VAR_2)
{
 return !((VAR_1->ext_flags ^ VAR_2->ext_flags) & VAR_0) &&
        VAR_1->vlan_id == VAR_2->vlan_id;
}
