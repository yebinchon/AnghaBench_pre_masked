
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fm10k_intfc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fm10k_intfc*,scalar_t__) ;
 int FUNC_1 (struct fm10k_intfc*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fm10k_intfc *VAR_2)
{
 u32 VAR_3, VAR_4;


 for (VAR_3 = 0, VAR_4 = 0;
      VAR_4 < VAR_1;
      VAR_4 = VAR_3 + 1, VAR_3 = FUNC_0(VAR_2, VAR_3)) {
  if (VAR_4 == VAR_3)
   continue;


  VAR_4 += (VAR_3 - VAR_4 - 1) << VAR_0;
  FUNC_1(VAR_2, VAR_4, 0, 0);
 }
}
