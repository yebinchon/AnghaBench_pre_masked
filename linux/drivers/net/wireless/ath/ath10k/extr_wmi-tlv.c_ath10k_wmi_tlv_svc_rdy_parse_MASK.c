
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_tlv_svc_rdy_parse {int svc_bmap_done; int dbs_hw_mode_done; void const* svc_bmap; void const* mem_reqs; void const* reg; void const* ev; } ;
struct ath10k {int dummy; } ;







__attribute__((used)) static int FUNC_0(struct ath10k *VAR_0, u16 VAR_1, u16 VAR_2,
     const void *VAR_3, void *VAR_4)
{
 struct wmi_tlv_svc_rdy_parse *VAR_5 = VAR_4;

 switch (VAR_1) {
 case 128:
  VAR_5->ev = VAR_3;
  break;
 case 129:
  VAR_5->reg = VAR_3;
  break;
 case 131:
  VAR_5->mem_reqs = VAR_3;
  break;
 case 130:
  if (!VAR_5->svc_bmap_done) {
   VAR_5->svc_bmap_done = 1;
   VAR_5->svc_bmap = VAR_3;
  } else if (!VAR_5->dbs_hw_mode_done) {
   VAR_5->dbs_hw_mode_done = 1;
  }
  break;
 default:
  break;
 }
 return 0;
}
