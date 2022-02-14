
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct q6v5 {int dump_mba_loaded; scalar_t__ version; int proxy_reg_count; int proxy_regs; int proxy_clk_count; int proxy_clks; int dev; int proxy_pd_count; int proxy_pds; int q6v5; int mba_size; int mba_phys; int mba_perm; int active_pd_count; int active_pds; int active_reg_count; int active_regs; int active_clk_count; int active_clks; int reset_clk_count; int reset_clks; int mpss_size; int mpss_phys; int mpss_perm; scalar_t__ reg_base; int halt_nc; int halt_map; int halt_modem; int halt_q6; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct q6v5*,int ,int ) ;
 int FUNC_3 (struct q6v5*,int ,int ) ;
 int FUNC_4 (struct q6v5*) ;
 int FUNC_5 (struct q6v5*,int *,int,int ,int ) ;
 int FUNC_6 (struct q6v5*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct q6v5 *VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 VAR_5->dump_mba_loaded = 0;

 FUNC_6(VAR_5, VAR_5->halt_map, VAR_5->halt_q6);
 FUNC_6(VAR_5, VAR_5->halt_map, VAR_5->halt_modem);
 FUNC_6(VAR_5, VAR_5->halt_map, VAR_5->halt_nc);
 if (VAR_5->version == VAR_0) {



  VAR_7 = FUNC_8(VAR_5->reg_base + VAR_2);
  VAR_7 |= VAR_1 | VAR_4 |
   VAR_3;
  FUNC_9(VAR_7, VAR_5->reg_base + VAR_2);
 }

 VAR_6 = FUNC_5(VAR_5, &VAR_5->mpss_perm,
          0, VAR_5->mpss_phys,
          VAR_5->mpss_size);
 FUNC_0(VAR_6);

 FUNC_4(VAR_5);

 FUNC_1(VAR_5->dev, VAR_5->reset_clks,
    VAR_5->reset_clk_count);
 FUNC_1(VAR_5->dev, VAR_5->active_clks,
    VAR_5->active_clk_count);
 FUNC_3(VAR_5, VAR_5->active_regs,
          VAR_5->active_reg_count);
 FUNC_2(VAR_5, VAR_5->active_pds, VAR_5->active_pd_count);




 VAR_6 = FUNC_5(VAR_5, &VAR_5->mba_perm, 0,
          VAR_5->mba_phys,
          VAR_5->mba_size);
 FUNC_0(VAR_6);

 VAR_6 = FUNC_7(&VAR_5->q6v5);
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_5->proxy_pds,
     VAR_5->proxy_pd_count);
  FUNC_1(VAR_5->dev, VAR_5->proxy_clks,
     VAR_5->proxy_clk_count);
  FUNC_3(VAR_5, VAR_5->proxy_regs,
           VAR_5->proxy_reg_count);
 }
}
