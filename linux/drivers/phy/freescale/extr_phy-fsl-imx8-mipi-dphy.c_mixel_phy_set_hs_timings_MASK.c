
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy {int dummy; } ;
struct TYPE_4__ {int rxhs_settle; int mc_prg_hs_trail; int m_prg_hs_trail; int mc_prg_hs_zero; int m_prg_hs_zero; int mc_prg_hs_prepare; int m_prg_hs_prepare; } ;
struct mixel_dphy_priv {TYPE_1__* devdata; TYPE_2__ cfg; } ;
struct TYPE_3__ {int reg_rxhs_settle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mixel_dphy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct phy *VAR_6)
{
 struct mixel_dphy_priv *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_7->cfg.m_prg_hs_prepare, VAR_3);
 FUNC_1(VAR_6, VAR_7->cfg.mc_prg_hs_prepare, VAR_0);
 FUNC_1(VAR_6, VAR_7->cfg.m_prg_hs_zero, VAR_5);
 FUNC_1(VAR_6, VAR_7->cfg.mc_prg_hs_zero, VAR_2);
 FUNC_1(VAR_6, VAR_7->cfg.m_prg_hs_trail, VAR_4);
 FUNC_1(VAR_6, VAR_7->cfg.mc_prg_hs_trail, VAR_1);
 FUNC_1(VAR_6, VAR_7->cfg.rxhs_settle, VAR_7->devdata->reg_rxhs_settle);
}
