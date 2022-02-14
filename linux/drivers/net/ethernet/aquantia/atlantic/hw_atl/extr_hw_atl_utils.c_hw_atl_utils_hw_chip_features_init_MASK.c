
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aq_hw_s*) ;

void FUNC_1(struct aq_hw_s *VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = 0U;
 u32 VAR_10 = FUNC_0(VAR_7);
 u32 VAR_11 = VAR_10 & 0xFFU;

 if ((0xFU & VAR_11) == 1U) {
  VAR_9 |= VAR_2 |
   VAR_1 |
   VAR_0;
 } else if ((0xFU & VAR_11) == 2U) {
  VAR_9 |= VAR_3 |
   VAR_1 |
   VAR_0 |
   VAR_6 |
   VAR_5;
 } else if ((0xFU & VAR_11) == 0xAU) {
  VAR_9 |= VAR_4 |
   VAR_1 |
   VAR_0 |
   VAR_6 |
   VAR_5;
 }

 *VAR_8 = VAR_9;
}
