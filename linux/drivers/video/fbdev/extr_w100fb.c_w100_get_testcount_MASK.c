
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_check_freq; unsigned int testclk_sel; int tstcount_rst; unsigned int test_count; } ;
union clk_test_cntl_u {TYPE_1__ f; scalar_t__ val; } ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned int VAR_2)
{
 union clk_test_cntl_u VAR_3;

 FUNC_1(5);


 VAR_3.f.start_check_freq = 0x0;
 VAR_3.f.testclk_sel = VAR_2;
 VAR_3.f.tstcount_rst = 0x1;
 FUNC_2((u32) (VAR_3.val), VAR_1 + VAR_0);

 VAR_3.f.tstcount_rst = 0x0;
 FUNC_2((u32) (VAR_3.val), VAR_1 + VAR_0);


 VAR_3.f.start_check_freq = 0x1;
 FUNC_2((u32) (VAR_3.val), VAR_1 + VAR_0);


 FUNC_1(20);


 VAR_3.val = FUNC_0(VAR_1 + VAR_0);
 VAR_3.f.start_check_freq = 0x0;
 FUNC_2((u32) (VAR_3.val), VAR_1 + VAR_0);

 return VAR_3.f.test_count;
}
