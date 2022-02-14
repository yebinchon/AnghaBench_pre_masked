
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcm_pm_s3_context {int sc_boot_vec; int * cp0_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct brcm_pm_s3_context *VAR_11)
{

 VAR_11->cp0_regs[VAR_3] = FUNC_7();
 VAR_11->cp0_regs[VAR_10] = FUNC_11();
 VAR_11->cp0_regs[VAR_8] = FUNC_9();
 VAR_11->cp0_regs[VAR_6] = FUNC_5();
 VAR_11->cp0_regs[VAR_1] = FUNC_6();
 VAR_11->cp0_regs[VAR_9] = FUNC_10();


 VAR_11->cp0_regs[VAR_2] = FUNC_2();
 VAR_11->cp0_regs[VAR_7] = FUNC_4();
 VAR_11->cp0_regs[VAR_5] = FUNC_3();
 VAR_11->cp0_regs[VAR_0] = FUNC_1();
 VAR_11->cp0_regs[VAR_4] = FUNC_8();

 VAR_11->sc_boot_vec = FUNC_0(0xa0);
}
