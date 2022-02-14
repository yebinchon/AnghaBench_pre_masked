
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfpf_set_q_filters_tlv {int flags; int n_mac_vlan_filters; int n_multicast; int * multicast; int rx_mask; int * filters; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3, int VAR_4,
           struct vfpf_set_q_filters_tlv *VAR_5)
{
 int VAR_6;

 if (VAR_5->flags & VAR_0)
  for (VAR_6 = 0; VAR_6 < VAR_5->n_mac_vlan_filters; VAR_6++)
   FUNC_1(VAR_3, VAR_4, VAR_6,
       &VAR_5->filters[VAR_6]);

 if (VAR_5->flags & VAR_2)
  FUNC_0(VAR_4, "RX-MASK=0x%x\n", VAR_5->rx_mask);

 if (VAR_5->flags & VAR_1)
  for (VAR_6 = 0; VAR_6 < VAR_5->n_multicast; VAR_6++)
   FUNC_0(VAR_4, "MULTICAST=%pM\n", VAR_5->multicast[VAR_6]);
}
