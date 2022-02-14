
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_blade_state {void* kernel_dsr; void* kernel_cb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gru_blade_state* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_2, void **VAR_3, void **VAR_4)
{
 struct gru_blade_state *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 > VAR_1);
 FUNC_2();
 VAR_5 = FUNC_1(-1);
 VAR_6 = FUNC_3();
 *VAR_3 = VAR_5->kernel_cb + VAR_6 * VAR_0;
 *VAR_4 = VAR_5->kernel_dsr + VAR_6 * VAR_1;
 return 0;
}
