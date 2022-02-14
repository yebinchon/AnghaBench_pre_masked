
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {scalar_t__ data_vnic_bar; scalar_t__ qc_area; scalar_t__ mac_stats_bar; scalar_t__ vf_cfg_bar; scalar_t__ vfcfg_tbl2_area; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nfp_pf *VAR_0)
{
 if (VAR_0->vfcfg_tbl2_area)
  FUNC_0(VAR_0->vfcfg_tbl2_area);
 if (VAR_0->vf_cfg_bar)
  FUNC_0(VAR_0->vf_cfg_bar);
 if (VAR_0->mac_stats_bar)
  FUNC_0(VAR_0->mac_stats_bar);
 FUNC_0(VAR_0->qc_area);
 FUNC_0(VAR_0->data_vnic_bar);
}
