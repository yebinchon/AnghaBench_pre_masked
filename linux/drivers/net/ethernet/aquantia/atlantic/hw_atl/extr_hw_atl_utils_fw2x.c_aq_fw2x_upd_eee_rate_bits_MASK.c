
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct aq_hw_s *VAR_4, u32 *VAR_5,
          u32 VAR_6)
{
 *VAR_5 &= ~(VAR_1 |
         VAR_2 |
         VAR_3 |
         VAR_0);

 *VAR_5 |= FUNC_0(VAR_6);
}
