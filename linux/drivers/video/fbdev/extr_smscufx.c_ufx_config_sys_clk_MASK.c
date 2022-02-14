
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufx_data {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ufx_data*,int,int) ;
 int FUNC_3 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ufx_data *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0, 0x700C, 0x8000000F);
 FUNC_0(VAR_1, "error writing 0x700C");

 VAR_1 = FUNC_3(VAR_0, 0x7014, 0x0010024F);
 FUNC_0(VAR_1, "error writing 0x7014");

 VAR_1 = FUNC_3(VAR_0, 0x7010, 0x00000000);
 FUNC_0(VAR_1, "error writing 0x7010");

 VAR_1 = FUNC_2(VAR_0, 0x700C, 0x0000000A);
 FUNC_0(VAR_1, "error clearing PLL1 bypass in 0x700C");
 FUNC_1(1);

 VAR_1 = FUNC_2(VAR_0, 0x700C, 0x80000000);
 FUNC_0(VAR_1, "error clearing output gate in 0x700C");

 return 0;
}
