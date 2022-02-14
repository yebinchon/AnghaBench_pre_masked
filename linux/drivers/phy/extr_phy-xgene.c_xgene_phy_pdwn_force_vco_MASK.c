
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_phy_ctx {int dev; } ;
typedef enum cmu_type_t { ____Placeholder_cmu_type_t } cmu_type_t ;
typedef enum clk_type_t { ____Placeholder_clk_type_t } clk_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xgene_phy_ctx*,int,int ,int *) ;
 int FUNC_2 (struct xgene_phy_ctx*,int,int ,int ) ;
 int FUNC_3 (struct xgene_phy_ctx*,int,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct xgene_phy_ctx *VAR_6,
         enum cmu_type_t VAR_7,
         enum clk_type_t VAR_8)
{
 u32 VAR_9;

 FUNC_4(VAR_6->dev, "Reset VCO and re-start again\n");
 if (VAR_7 == VAR_5) {
  FUNC_1(VAR_6, VAR_7, VAR_2, &VAR_9);
  VAR_9 = FUNC_0(VAR_9, 0x7);
  FUNC_3(VAR_6, VAR_7, VAR_2, VAR_9);
 }

 FUNC_2(VAR_6, VAR_7, VAR_0, VAR_1);
 FUNC_2(VAR_6, VAR_7, VAR_3,
         VAR_4);
}
