
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static u16
FUNC_3(u16 VAR_1, u16 VAR_2,
   struct pt_regs *VAR_3)
{
 u64 VAR_4;


 if (!VAR_3)
  return 0;
 VAR_4 = FUNC_0((u64) VAR_0, FUNC_1(VAR_3));
 VAR_1 = FUNC_0(VAR_1, (u16) VAR_4);


 VAR_2 += 2 * sizeof(u64);


 if ((u16) (VAR_2 + VAR_1) < VAR_2) {




  VAR_1 = VAR_0 - VAR_2 - sizeof(u64);
  VAR_1 = FUNC_2(VAR_1, sizeof(u64));
 }

 return VAR_1;
}
