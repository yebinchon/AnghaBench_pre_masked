
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf_pf_resc_request {int num_sbs; scalar_t__ num_mc_filters; int num_vlan_filters; int num_mac_filters; scalar_t__ num_txqs; scalar_t__ num_rxqs; } ;
struct bnx2x_virtf {int sb_count; struct vf_pf_resc_request alloc_resc; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3)
{
 struct vf_pf_resc_request *VAR_4 = &VAR_3->alloc_resc;


 VAR_4->num_rxqs = 0;
 VAR_4->num_txqs = 0;

 VAR_4->num_mac_filters = VAR_0;
 VAR_4->num_vlan_filters = VAR_1;


 VAR_4->num_mc_filters = 0;


 VAR_4->num_sbs = VAR_3->sb_count;
}
