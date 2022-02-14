
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct aq_ring_s {unsigned int size; int idx; scalar_t__ dx_ring_pa; } ;
struct aq_ring_param_s {int cpu; int vec_idx; } ;
struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
struct TYPE_2__ {int is_vlan_rx_strip; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,int,int ) ;
 int FUNC_2 (struct aq_hw_s*,int ,int ) ;
 int FUNC_3 (struct aq_hw_s*,int ,int ) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_5 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_6 (struct aq_hw_s*,int,int ) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_8 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_9 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_10 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_11 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_12 (struct aq_hw_s*,int ,int ) ;
 int FUNC_13 (struct aq_hw_s*,int ,int ) ;
 int FUNC_14 (struct aq_hw_s*,int,int ) ;

__attribute__((used)) static int FUNC_15(struct aq_hw_s *VAR_1,
         struct aq_ring_s *VAR_2,
         struct aq_ring_param_s *VAR_3)
{
 u32 VAR_4 = (u32)VAR_2->dx_ring_pa;
 u32 VAR_5 = (u32)(((u64)VAR_2->dx_ring_pa) >> 32);
 u32 VAR_6 = VAR_1->aq_nic_cfg->is_vlan_rx_strip;

 FUNC_6(VAR_1, 0, VAR_2->idx);

 FUNC_8(VAR_1, 0U, VAR_2->idx);

 FUNC_12(VAR_1, VAR_4,
        VAR_2->idx);

 FUNC_13(VAR_1,
        VAR_5, VAR_2->idx);

 FUNC_9(VAR_1, VAR_2->size / 8U, VAR_2->idx);

 FUNC_4(VAR_1,
           VAR_0 / 1024U,
           VAR_2->idx);

 FUNC_7(VAR_1, 0U, VAR_2->idx);
 FUNC_8(VAR_1, 0U, VAR_2->idx);
 FUNC_14(VAR_1, !!VAR_6,
           VAR_2->idx);




 FUNC_2(VAR_1, VAR_3->vec_idx, VAR_2->idx);
 FUNC_1(VAR_1, 1, VAR_2->idx);

 FUNC_3(VAR_1, VAR_3->cpu, VAR_2->idx);
 FUNC_5(VAR_1, 0U, VAR_2->idx);
 FUNC_10(VAR_1, 0U, VAR_2->idx);
 FUNC_11(VAR_1, 0U, VAR_2->idx);

 return FUNC_0(VAR_1);
}
