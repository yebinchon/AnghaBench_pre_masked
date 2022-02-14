
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static u64 FUNC_1(struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2 >= VAR_0)
  return 0;

 return VAR_0 - VAR_2;
}
