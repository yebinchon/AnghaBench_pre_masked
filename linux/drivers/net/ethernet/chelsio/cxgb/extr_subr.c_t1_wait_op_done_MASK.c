
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(adapter_t *VAR_0, int VAR_1, u32 VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
 while (1) {
  u32 VAR_6 = FUNC_0(VAR_0->regs + VAR_1) & VAR_2;

  if (!!VAR_6 == VAR_3)
   return 0;
  if (--VAR_4 == 0)
   return 1;
  if (VAR_5)
   FUNC_1(VAR_5);
 }
}
