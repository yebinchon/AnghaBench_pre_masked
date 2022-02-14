
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_set_ipv4_tun {int outer_vlan_tci; int outer_vlan_tpid; } ;
struct nfp_fl_push_vlan {int vlan_tci; int vlan_tpid; } ;
struct nfp_fl_act_head {scalar_t__ jump_id; unsigned int len_lw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int
FUNC_0(char *VAR_3, int VAR_4, struct nfp_fl_push_vlan *VAR_5)
{
 struct nfp_fl_set_ipv4_tun *VAR_6;
 struct nfp_fl_act_head *VAR_7;
 unsigned int VAR_8 = 0;

 while (VAR_8 < VAR_4) {
  VAR_7 = (struct nfp_fl_act_head *)&VAR_3[VAR_8];

  if (VAR_7->jump_id == VAR_1) {
   VAR_6 = (struct nfp_fl_set_ipv4_tun *)VAR_7;
   VAR_6->outer_vlan_tpid = VAR_5->vlan_tpid;
   VAR_6->outer_vlan_tci = VAR_5->vlan_tci;

   return 0;
  }

  VAR_8 += VAR_7->len_lw << VAR_2;
 }


 return -VAR_0;
}
