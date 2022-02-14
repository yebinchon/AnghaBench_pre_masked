
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int ,int ,struct pt_regs*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(u32 VAR_0, u64 VAR_1, struct pt_regs *VAR_2, u64 VAR_3)
{
 int VAR_4;

 FUNC_3();
 VAR_4 = FUNC_1();
 if (FUNC_5(VAR_4 < 0))
  goto fail;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_4);
fail:
 FUNC_4();
}
