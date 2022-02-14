
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ths_term; int ths_settle; int tclk_term; int tclk_miss; int tclk_settle; } ;
struct iss_csiphy {int phy_regs; int iss; TYPE_1__ dphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct iss_csiphy *VAR_8)
{
 u32 VAR_9;


 VAR_9 = VAR_8->dphy.ths_term << VAR_2;
 VAR_9 |= VAR_8->dphy.ths_settle << VAR_1;

 FUNC_0(VAR_8->iss, VAR_8->phy_regs, VAR_0, VAR_9);


 VAR_9 = VAR_8->dphy.tclk_term << VAR_7;
 VAR_9 |= VAR_8->dphy.tclk_miss << VAR_4;
 VAR_9 |= VAR_8->dphy.tclk_settle << VAR_6;
 VAR_9 |= 0xb8 << VAR_5;

 FUNC_0(VAR_8->iss, VAR_8->phy_regs, VAR_3, VAR_9);
}
