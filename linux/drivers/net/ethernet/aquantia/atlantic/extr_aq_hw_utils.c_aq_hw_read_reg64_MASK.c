
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*,scalar_t__) ;

u64 FUNC_1(struct aq_hw_s *VAR_0, u32 VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_0, VAR_1);

 VAR_2 |= (u64)FUNC_0(VAR_0, VAR_1 + 4) << 32;
 return VAR_2;
}
