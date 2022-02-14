
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct aq_ring_s {unsigned int size; int idx; scalar_t__ dx_ring_pa; } ;
struct aq_ring_param_s {int cpu; int vec_idx; } ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,struct aq_ring_s*) ;
 int FUNC_2 (struct aq_hw_s*,int,int ) ;
 int FUNC_3 (struct aq_hw_s*,int ,int ) ;
 int FUNC_4 (struct aq_hw_s*,int ,int ) ;
 int FUNC_5 (struct aq_hw_s*,int ,int ) ;
 int FUNC_6 (struct aq_hw_s*,int ,int ) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_8 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_9 (struct aq_hw_s*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_10(struct aq_hw_s *VAR_0,
         struct aq_ring_s *VAR_1,
         struct aq_ring_param_s *VAR_2)
{
 u32 VAR_3 = (u32)VAR_1->dx_ring_pa;
 u32 VAR_4 = (u32)(((u64)VAR_1->dx_ring_pa) >> 32);

 FUNC_4(VAR_0, VAR_3,
        VAR_1->idx);

 FUNC_5(VAR_0, VAR_4,
        VAR_1->idx);

 FUNC_8(VAR_0, VAR_1->size / 8U, VAR_1->idx);

 FUNC_1(VAR_0, VAR_1);


 FUNC_9(VAR_0, 0U, VAR_1->idx);


 FUNC_3(VAR_0, VAR_2->vec_idx, VAR_1->idx);
 FUNC_2(VAR_0, 1, VAR_1->idx);

 FUNC_6(VAR_0, VAR_2->cpu, VAR_1->idx);
 FUNC_7(VAR_0, 0U, VAR_1->idx);

 return FUNC_0(VAR_0);
}
