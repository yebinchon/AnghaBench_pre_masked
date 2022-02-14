
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfpf_update_tunn_param_tlv {scalar_t__ update_vxlan_port; scalar_t__ update_geneve_port; scalar_t__ update_tun_cls; scalar_t__ tun_mode_update_mask; } ;



__attribute__((used)) static bool
FUNC_0(struct vfpf_update_tunn_param_tlv *VAR_0)
{
 bool VAR_1 = 0;

 if (VAR_0->tun_mode_update_mask || VAR_0->update_tun_cls ||
     VAR_0->update_geneve_port || VAR_0->update_vxlan_port)
  VAR_1 = 1;

 return VAR_1;
}
