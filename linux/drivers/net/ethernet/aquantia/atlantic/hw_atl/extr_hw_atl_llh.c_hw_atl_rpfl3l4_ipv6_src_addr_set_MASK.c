
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct aq_hw_s*,int ,int ) ;

void FUNC_2(struct aq_hw_s *VAR_0, u8 VAR_1,
          u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
  FUNC_1(VAR_0,
    FUNC_0(VAR_1 + VAR_3),
    VAR_2[VAR_3]);
}
