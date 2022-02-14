
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; TYPE_1__* filters; } ;
struct TYPE_2__ {int flags; } ;



__attribute__((used)) static int FUNC_0(struct vfpf_set_q_filters_tlv *VAR_0,
        u32 VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_mac_vlan_filters; VAR_2++)
  if ((VAR_0->filters[VAR_2].flags & VAR_1) == VAR_1)
   VAR_3++;

 return VAR_3;
}
