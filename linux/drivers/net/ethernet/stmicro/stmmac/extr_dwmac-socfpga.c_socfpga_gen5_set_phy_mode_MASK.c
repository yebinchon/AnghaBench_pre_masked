
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tse_pcs_base; } ;
struct socfpga_dwmac {int reg_offset; int reg_shift; int dev; TYPE_1__ pcs; int stmmac_rst; int stmmac_ocp_rst; scalar_t__ f2h_ptp_ref_clk; scalar_t__ splitter_base; struct regmap* sys_mgr_base_addr; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct regmap*,int,int*) ;
 int FUNC_2 (struct regmap*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct socfpga_dwmac*) ;
 scalar_t__ FUNC_6 (int,int*) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct socfpga_dwmac *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->sys_mgr_base_addr;
 int VAR_11 = FUNC_5(VAR_9);
 u32 VAR_12 = VAR_9->reg_offset;
 u32 VAR_13 = VAR_9->reg_shift;
 u32 VAR_14, VAR_15, VAR_16;

 if (FUNC_6(VAR_11, &VAR_15)) {
  FUNC_0(VAR_9->dev, "bad phy mode %d\n", VAR_11);
  return -VAR_0;
 }





 if (VAR_9->splitter_base)
  VAR_15 = VAR_4;


 FUNC_3(VAR_9->stmmac_ocp_rst);
 FUNC_3(VAR_9->stmmac_rst);

 FUNC_1(VAR_10, VAR_12, &VAR_14);
 VAR_14 &= ~(VAR_5 << VAR_13);
 VAR_14 |= VAR_15 << VAR_13;

 if (VAR_9->f2h_ptp_ref_clk ||
     VAR_11 == VAR_2 ||
     VAR_11 == VAR_1 ||
     VAR_11 == VAR_3) {
  VAR_14 |= VAR_6 << (VAR_13 / 2);
  FUNC_1(VAR_10, VAR_8,
       &VAR_16);
  VAR_16 |= (VAR_7 << (VAR_13 / 2));
  FUNC_2(VAR_10, VAR_8,
        VAR_16);
 } else {
  VAR_14 &= ~(VAR_6 << (VAR_13 / 2));
 }

 FUNC_2(VAR_10, VAR_12, VAR_14);




 FUNC_4(VAR_9->stmmac_ocp_rst);
 FUNC_4(VAR_9->stmmac_rst);
 if (VAR_11 == VAR_3) {
  if (FUNC_7(VAR_9->pcs.tse_pcs_base, &VAR_9->pcs) != 0) {
   FUNC_0(VAR_9->dev, "Unable to initialize TSE PCS");
   return -VAR_0;
  }
 }

 return 0;
}
