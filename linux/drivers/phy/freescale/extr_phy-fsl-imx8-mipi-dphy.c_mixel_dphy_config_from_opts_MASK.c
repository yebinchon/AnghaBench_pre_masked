
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct phy_configure_opts_mipi_dphy {int hs_clk_rate; int lp_clk_rate; int hs_prepare; int clk_prepare; } ;
struct TYPE_3__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mixel_dphy_priv {int phy_ref_clk; } ;
struct mixel_dphy_cfg {int cn; int co; int cm; int m_prg_hs_prepare; int mc_prg_hs_prepare; int m_prg_hs_zero; int mc_prg_hs_zero; int m_prg_hs_trail; int mc_prg_hs_trail; int rxhs_settle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long long VAR_3 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int,int,...) ;
 int FUNC_4 (TYPE_1__*,char*,int,int,...) ;
 struct mixel_dphy_priv* FUNC_5 (int ) ;
 int FUNC_6 (unsigned long long,int) ;
 int FUNC_7 (int*,int*,int,int) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_4,
        struct phy_configure_opts_mipi_dphy *VAR_5,
        struct mixel_dphy_cfg *VAR_6)
{
 struct mixel_dphy_priv *VAR_7 = FUNC_5(VAR_4->dev.parent);
 unsigned long VAR_8 = FUNC_2(VAR_7->phy_ref_clk);
 u32 VAR_9, VAR_10, VAR_11;
 unsigned long long VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (VAR_5->hs_clk_rate > VAR_0 ||
     VAR_5->hs_clk_rate < VAR_1)
  return -VAR_2;

 VAR_10 = VAR_5->hs_clk_rate;
 VAR_11 = VAR_8;
 FUNC_7(&VAR_10, &VAR_11, 255, 256);
 if (!VAR_10 || !VAR_11) {
  FUNC_4(&VAR_4->dev, "Invalid %d/%d for %ld/%ld\n",
   VAR_10, VAR_11,
   VAR_5->hs_clk_rate, VAR_8);
  return -VAR_2;
 }

 while ((VAR_10 < 16) && (VAR_11 <= 128)) {
  VAR_10 <<= 1;
  VAR_11 <<= 1;
 }





 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14 > 3)
  VAR_14 = 3;
 VAR_6->cn = VAR_11 >> VAR_14;
 VAR_6->co = 1 << VAR_14;
 VAR_6->cm = VAR_10;

 if (VAR_6->cm < 16 || VAR_6->cm > 255 ||
     VAR_6->cn < 1 || VAR_6->cn > 32 ||
     VAR_6->co < 1 || VAR_6->co > 8) {
  FUNC_4(&VAR_4->dev, "Invalid CM/CN/CO values: %u/%u/%u\n",
   VAR_6->cm, VAR_6->cn, VAR_6->co);
  FUNC_4(&VAR_4->dev, "for hs_clk/ref_clk=%ld/%ld ~ %d/%d\n",
   VAR_5->hs_clk_rate, VAR_8,
   VAR_10, VAR_11);
  return -VAR_2;
 }

 FUNC_3(&VAR_4->dev, "hs_clk/ref_clk=%ld/%ld ~ %d/%d\n",
  VAR_5->hs_clk_rate, VAR_8, VAR_10, VAR_11);


 VAR_12 = 1000000000000LL;
 FUNC_6(VAR_12, VAR_5->lp_clk_rate);
 if (VAR_12 > VAR_3)
  return -VAR_2;

 VAR_9 = VAR_12;
 FUNC_3(&VAR_4->dev, "LP clock %lu, period: %u ps\n",
  VAR_5->lp_clk_rate, VAR_9);


 if (2 * VAR_5->hs_prepare > 5 * VAR_9) {
  FUNC_4(&VAR_4->dev,
   "hs_prepare (%u) > 2.5 * lp clock period (%u)\n",
   VAR_5->hs_prepare, VAR_9);
  return -VAR_2;
 }

 if (VAR_5->hs_prepare < VAR_9) {
  VAR_13 = 0;
 } else {
  VAR_12 = 2 * (VAR_5->hs_prepare - VAR_9);
  FUNC_6(VAR_12, VAR_9);
  VAR_13 = VAR_12;
 }
 VAR_6->m_prg_hs_prepare = VAR_13;


 if (2 * VAR_5->clk_prepare > 3 * VAR_9) {
  FUNC_4(&VAR_4->dev,
   "clk_prepare (%u) > 1.5 * lp clock period (%u)\n",
   VAR_5->clk_prepare, VAR_9);
  return -VAR_2;
 }

 VAR_6->mc_prg_hs_prepare = VAR_5->clk_prepare > VAR_9 ? 1 : 0;


 VAR_13 = (144 * (VAR_5->hs_clk_rate / 1000000) - 47500) / 10000;
 VAR_6->m_prg_hs_zero = VAR_13 < 1 ? 1 : VAR_13;


 VAR_13 = (34 * (VAR_5->hs_clk_rate / 1000000) - 2500) / 1000;
 VAR_6->mc_prg_hs_zero = VAR_13 < 1 ? 1 : VAR_13;


 VAR_13 = (103 * (VAR_5->hs_clk_rate / 1000000) + 10000) / 10000;
 if (VAR_13 > 15)
  VAR_13 = 15;
 if (VAR_13 < 1)
  VAR_13 = 1;
 VAR_6->m_prg_hs_trail = VAR_13;
 VAR_6->mc_prg_hs_trail = VAR_13;


 if (VAR_5->hs_clk_rate < FUNC_0(80))
  VAR_6->rxhs_settle = 0x0d;
 else if (VAR_5->hs_clk_rate < FUNC_0(90))
  VAR_6->rxhs_settle = 0x0c;
 else if (VAR_5->hs_clk_rate < FUNC_0(125))
  VAR_6->rxhs_settle = 0x0b;
 else if (VAR_5->hs_clk_rate < FUNC_0(150))
  VAR_6->rxhs_settle = 0x0a;
 else if (VAR_5->hs_clk_rate < FUNC_0(225))
  VAR_6->rxhs_settle = 0x09;
 else if (VAR_5->hs_clk_rate < FUNC_0(500))
  VAR_6->rxhs_settle = 0x08;
 else
  VAR_6->rxhs_settle = 0x07;

 FUNC_3(&VAR_4->dev, "phy_config: %u %u %u %u %u %u %u\n",
  VAR_6->m_prg_hs_prepare, VAR_6->mc_prg_hs_prepare,
  VAR_6->m_prg_hs_zero, VAR_6->mc_prg_hs_zero,
  VAR_6->m_prg_hs_trail, VAR_6->mc_prg_hs_trail,
  VAR_6->rxhs_settle);

 return 0;
}
