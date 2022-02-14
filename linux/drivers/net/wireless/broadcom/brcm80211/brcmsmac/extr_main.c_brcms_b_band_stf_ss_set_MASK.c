
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_hardware {scalar_t__ clk; int hw_stf_ss_opmode; } ;


 int FUNC_0 (struct brcms_hardware*) ;

void FUNC_1(struct brcms_hardware *VAR_0, u8 VAR_1)
{
 VAR_0->hw_stf_ss_opmode = VAR_1;

 if (VAR_0->clk)
  FUNC_0(VAR_0);
}
