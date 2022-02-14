
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; struct vfpf_q_mac_vlan_filter* filters; } ;
struct vfpf_q_mac_vlan_filter {int flags; int vlan_tag; int mac; } ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vf_mac_vlan_filters {int count; TYPE_1__* filters; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int add; int type; int vid; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnx2x_vf_mac_vlan_filters*) ;
 struct bnx2x_vf_mac_vlan_filters* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct bnx2x_vf_mac_vlan_filters*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_8,
         struct bnx2x_virtf *VAR_9,
         struct vfpf_set_q_filters_tlv *VAR_10,
         struct bnx2x_vf_mac_vlan_filters **VAR_11,
         u32 VAR_12)
{
 int VAR_13, VAR_14;
 struct bnx2x_vf_mac_vlan_filters *VAR_15 = ((void*)0);

 VAR_15 = FUNC_1(FUNC_3(VAR_15, VAR_7, VAR_10->n_mac_vlan_filters),
       VAR_3);
 if (!VAR_15)
  return -VAR_2;

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_10->n_mac_vlan_filters; VAR_13++) {
  struct vfpf_q_mac_vlan_filter *VAR_16 = &VAR_10->filters[VAR_13];

  if ((VAR_16->flags & VAR_12) != VAR_12)
   continue;
  FUNC_2(&VAR_15->filters[VAR_14], 0, sizeof(VAR_15->filters[VAR_14]));
  if (VAR_12 & VAR_4) {
   VAR_15->filters[VAR_14].mac = VAR_16->mac;
   VAR_15->filters[VAR_14].type |= VAR_0;
  }
  if (VAR_12 & VAR_6) {
   VAR_15->filters[VAR_14].vid = VAR_16->vlan_tag;
   VAR_15->filters[VAR_14].type |= VAR_1;
  }
  VAR_15->filters[VAR_14].add = !!(VAR_16->flags & VAR_5);
  VAR_15->count++;
  VAR_14++;
 }
 if (!VAR_15->count)
  FUNC_0(VAR_15);
 else
  *VAR_11 = VAR_15;

 return 0;
}
