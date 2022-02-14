
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mmcif_host {int addr; scalar_t__ clk_ctrl2_enable; scalar_t__ ccs_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sh_mmcif_host*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sh_mmcif_host *VAR_11)
{
 u32 VAR_12;

 VAR_12 = 0x010f0000 & FUNC_1(VAR_11->addr, VAR_2);

 FUNC_2(VAR_11->addr, VAR_4, VAR_7);
 FUNC_2(VAR_11->addr, VAR_4, VAR_6);
 if (VAR_11->ccs_enable)
  VAR_12 |= VAR_5;
 if (VAR_11->clk_ctrl2_enable)
  FUNC_2(VAR_11->addr, VAR_3, 0x0F0F0000);
 FUNC_0(VAR_11, VAR_2, VAR_12 |
  VAR_9 | VAR_8 | VAR_10);

 FUNC_0(VAR_11, VAR_1, VAR_0);
}
