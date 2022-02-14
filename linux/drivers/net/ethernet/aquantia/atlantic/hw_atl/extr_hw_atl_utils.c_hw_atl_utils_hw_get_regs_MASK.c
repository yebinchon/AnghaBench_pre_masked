
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;
struct aq_hw_caps_s {unsigned int mac_regs_count; } ;


 int FUNC_0 (struct aq_hw_s*,int ) ;
 int * VAR_0 ;

int FUNC_1(struct aq_hw_s *VAR_1,
        const struct aq_hw_caps_s *VAR_2,
        u32 *VAR_3)
{
 unsigned int VAR_4 = 0U;

 for (VAR_4 = 0; VAR_4 < VAR_2->mac_regs_count; VAR_4++)
  VAR_3[VAR_4] = FUNC_0(VAR_1,
           VAR_0[VAR_4]);
 return 0;
}
