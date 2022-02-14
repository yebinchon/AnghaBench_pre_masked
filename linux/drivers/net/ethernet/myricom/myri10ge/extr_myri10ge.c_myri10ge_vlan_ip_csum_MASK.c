
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ protocol; int ip_summed; int csum; scalar_t__ data; } ;
typedef int __wsum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_4, __wsum VAR_5)
{
 struct vlan_hdr *VAR_6 = (struct vlan_hdr *)(VAR_4->data);

 if ((VAR_4->protocol == FUNC_0(VAR_1)) &&
     (VAR_6->h_vlan_encapsulated_proto == FUNC_0(VAR_2) ||
      VAR_6->h_vlan_encapsulated_proto == FUNC_0(VAR_3))) {
  VAR_4->csum = VAR_5;
  VAR_4->ip_summed = VAR_0;
 }
}
