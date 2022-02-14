
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
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct xgene_phy_ctx*,int,int ,int*) ;
 int FUNC_4 (struct xgene_phy_ctx*,int,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct xgene_phy_ctx *VAR_8,
           enum cmu_type_t VAR_9,
           enum clk_type_t VAR_10)
{
 u32 VAR_11;


 FUNC_3(VAR_8, VAR_9, VAR_5, &VAR_11);
 VAR_11 = FUNC_1(VAR_11, 0x1);
 FUNC_4(VAR_8, VAR_9, VAR_5, VAR_11);

 FUNC_4(VAR_8, VAR_9, VAR_6, 0x0222);
 FUNC_4(VAR_8, VAR_9, VAR_7, 0x2225);


 if (VAR_10 == VAR_0) {

  FUNC_3(VAR_8, VAR_9, VAR_3, &VAR_11);
  VAR_11 = FUNC_0(VAR_11, 0x0);
  FUNC_4(VAR_8, VAR_9, VAR_3, VAR_11);

  FUNC_3(VAR_8, VAR_9, VAR_4, &VAR_11);
  VAR_11 = FUNC_2(VAR_11, 0x0);
  FUNC_4(VAR_8, VAR_9, VAR_4, VAR_11);
  FUNC_5(VAR_8->dev, "Set external reference clock\n");
 } else if (VAR_10 == VAR_1) {

  FUNC_3(VAR_8, VAR_9, VAR_3, &VAR_11);
  VAR_11 = FUNC_0(VAR_11, 0x1);
  FUNC_4(VAR_8, VAR_9, VAR_3, VAR_11);

  FUNC_3(VAR_8, VAR_9, VAR_4, &VAR_11);
  VAR_11 = FUNC_2(VAR_11, 0x1);
  FUNC_4(VAR_8, VAR_9, VAR_4, VAR_11);
  FUNC_5(VAR_8->dev, "Set internal reference clock\n");
 } else if (VAR_10 == VAR_2) {






  FUNC_3(VAR_8, VAR_9, VAR_4, &VAR_11);
  VAR_11 = FUNC_2(VAR_11, 0x1);
  FUNC_4(VAR_8, VAR_9, VAR_4, VAR_11);

  FUNC_3(VAR_8, VAR_9, VAR_4, &VAR_11);
  VAR_11 = FUNC_2(VAR_11, 0x0);
  FUNC_4(VAR_8, VAR_9, VAR_4, VAR_11);
  FUNC_5(VAR_8->dev,
   "Set internal single ended reference clock\n");
 }
}
