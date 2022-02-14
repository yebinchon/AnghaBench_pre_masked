
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; struct vfpf_q_mac_vlan_filter* filters; } ;
struct vfpf_q_mac_vlan_filter {int flags; int mac; } ;
struct pf_vf_bulletin_content {int valid_bitmap; int mac; } ;
struct bnx2x_virtf {int abs_vfid; int index; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,...) ;
 struct pf_vf_bulletin_content* FUNC_1 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_3,
          struct bnx2x_virtf *VAR_4,
          struct vfpf_set_q_filters_tlv *VAR_5)
{
 struct pf_vf_bulletin_content *VAR_6 = FUNC_1(VAR_3, VAR_4->index);
 int VAR_7 = 0;






 if (VAR_6->valid_bitmap & 1 << VAR_1) {
  struct vfpf_q_mac_vlan_filter *VAR_8 = ((void*)0);
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_5->n_mac_vlan_filters; VAR_9++) {
   if (!(VAR_5->filters[VAR_9].flags &
         VAR_2))
    continue;




   if (VAR_8) {
    FUNC_0("VF[%d] requested the addition of multiple macs after set_vf_mac ndo was called [%d filters]\n",
       VAR_4->abs_vfid,
       VAR_5->n_mac_vlan_filters);
    VAR_7 = -VAR_0;
    goto response;
   }

   VAR_8 = &VAR_5->filters[VAR_9];
  }


  if (VAR_8 &&
      !FUNC_2(VAR_8->mac, VAR_6->mac)) {
   FUNC_0("VF[%d] requested the addition of a mac address not matching the one configured by set_vf_mac ndo\n",
      VAR_4->abs_vfid);

   VAR_7 = -VAR_0;
   goto response;
  }
 }

response:
 return VAR_7;
}
