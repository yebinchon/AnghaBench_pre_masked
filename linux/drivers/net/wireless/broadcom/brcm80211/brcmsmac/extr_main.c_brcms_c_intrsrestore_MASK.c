
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int d11core; int clk; } ;
struct brcms_c_info {int macintmask; struct brcms_hardware* hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct brcms_c_info *VAR_0, u32 VAR_1)
{
 struct brcms_hardware *VAR_2 = VAR_0->hw;
 if (!VAR_2->clk)
  return;

 VAR_0->macintmask = VAR_1;
 FUNC_1(VAR_2->d11core, FUNC_0(VAR_1), VAR_0->macintmask);
}
