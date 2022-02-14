
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_msic {unsigned short irq_base; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned short) ;

int FUNC_2(struct intel_msic *VAR_3, unsigned short VAR_4, u8 *VAR_5)
{
 if (FUNC_0(VAR_4 < VAR_1 || VAR_4 > VAR_2))
  return -VAR_0;

 *VAR_5 = FUNC_1(VAR_3->irq_base + (VAR_4 - VAR_1));
 return 0;
}
