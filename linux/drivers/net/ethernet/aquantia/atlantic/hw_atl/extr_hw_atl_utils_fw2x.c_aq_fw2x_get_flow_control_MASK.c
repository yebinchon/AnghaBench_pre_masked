
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
 int FUNC_0 (struct aq_hw_s*) ;

__attribute__((used)) static u32 FUNC_1(struct aq_hw_s *VAR_4, u32 *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4);

 if (VAR_6 & VAR_3)
  if (VAR_6 & VAR_2)
   *VAR_5 = VAR_0;
  else
   *VAR_5 = VAR_0 | VAR_1;
 else
  if (VAR_6 & VAR_2)
   *VAR_5 = VAR_1;
  else
   *VAR_5 = 0;

 return 0;
}
