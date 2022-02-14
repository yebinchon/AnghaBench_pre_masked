
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcms_hardware {int d11core; int clk; } ;
struct brcms_c_info {scalar_t__ macintstatus; scalar_t__ macintmask; struct brcms_hardware* hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;

u32 FUNC_4(struct brcms_c_info *VAR_0)
{
 struct brcms_hardware *VAR_1 = VAR_0->hw;
 u32 VAR_2;

 if (!VAR_1->clk)
  return 0;

 VAR_2 = VAR_0->macintmask;

 FUNC_2(VAR_1->d11core, FUNC_0(VAR_2), 0);
 (void)FUNC_1(VAR_1->d11core, FUNC_0(VAR_2));
 FUNC_3(1);
 VAR_0->macintmask = 0;


 return VAR_0->macintstatus ? 0 : VAR_2;
}
