
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; int high_pll; struct goya_device* asic_specific; } ;
struct goya_device {int ic_clk; int tpc_clk; int mme_clk; } ;
typedef enum hl_pll_frequency { ____Placeholder_hl_pll_frequency } hl_pll_frequency ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*,int ,int ) ;

void FUNC_2(struct hl_device *VAR_4, enum hl_pll_frequency VAR_5)
{
 struct goya_device *VAR_6 = VAR_4->asic_specific;

 switch (VAR_5) {
 case 130:
  FUNC_1(VAR_4, VAR_2, VAR_4->high_pll);
  FUNC_1(VAR_4, VAR_3, VAR_4->high_pll);
  FUNC_1(VAR_4, VAR_1, VAR_4->high_pll);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_2, VAR_0);
  FUNC_1(VAR_4, VAR_3, VAR_0);
  FUNC_1(VAR_4, VAR_1, VAR_0);
  break;
 case 129:
  FUNC_1(VAR_4, VAR_2, VAR_6->mme_clk);
  FUNC_1(VAR_4, VAR_3, VAR_6->tpc_clk);
  FUNC_1(VAR_4, VAR_1, VAR_6->ic_clk);
  break;
 default:
  FUNC_0(VAR_4->dev, "unknown frequency setting\n");
 }
}
