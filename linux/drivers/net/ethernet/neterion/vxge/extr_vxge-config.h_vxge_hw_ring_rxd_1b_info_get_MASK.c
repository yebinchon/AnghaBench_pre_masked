
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vxge_hw_ring_rxd_info {void* rth_value; void* rth_hash_type; void* rth_spdm_hit; void* rth_it_hit; void* rth_bucket; void* vlan; void* is_vlan; void* proto; void* frame; void* l4_cksum; void* l4_cksum_valid; void* l3_cksum; void* l3_cksum_valid; void* fast_path_eligible; void* is_icmp; void* syn_flag; } ;
struct vxge_hw_ring_rxd_1 {int control_1; int control_0; } ;
struct __vxge_hw_ring {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static inline
void FUNC_16(
 struct __vxge_hw_ring *VAR_0,
 void *VAR_1,
 struct vxge_hw_ring_rxd_info *VAR_2)
{

 struct vxge_hw_ring_rxd_1 *VAR_3 = (struct vxge_hw_ring_rxd_1 *)VAR_1;
 VAR_2->syn_flag =
  (u32)FUNC_14(VAR_3->control_0);
 VAR_2->is_icmp =
  (u32)FUNC_4(VAR_3->control_0);
 VAR_2->fast_path_eligible =
  (u32)FUNC_2(VAR_3->control_0);
 VAR_2->l3_cksum_valid =
  (u32)FUNC_6(VAR_3->control_0);
 VAR_2->l3_cksum =
  (u32)FUNC_7(VAR_3->control_0);
 VAR_2->l4_cksum_valid =
  (u32)FUNC_8(VAR_3->control_0);
 VAR_2->l4_cksum =
  (u32)FUNC_9(VAR_3->control_0);
 VAR_2->frame =
  (u32)FUNC_1(VAR_3->control_0);
 VAR_2->proto =
  (u32)FUNC_3(VAR_3->control_0);
 VAR_2->is_vlan =
  (u32)FUNC_5(VAR_3->control_0);
 VAR_2->vlan =
  (u32)FUNC_15(VAR_3->control_1);
 VAR_2->rth_bucket =
  (u32)FUNC_10(VAR_3->control_0);
 VAR_2->rth_it_hit =
  (u32)FUNC_12(VAR_3->control_0);
 VAR_2->rth_spdm_hit =
  (u32)FUNC_13(VAR_3->control_0);
 VAR_2->rth_hash_type =
  (u32)FUNC_11(VAR_3->control_0);
 VAR_2->rth_value =
  (u32)FUNC_0(VAR_3->control_1);
}
