
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct aq_hw_s*,int ,unsigned int) ;

void FUNC_2(struct aq_hw_s *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  FUNC_1(VAR_0,
    FUNC_0(VAR_1 + VAR_2),
    0U);
}
