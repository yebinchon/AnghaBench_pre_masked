
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int dev; int * clks; int ethsys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mtk_eth*,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mtk_eth *VAR_13, int VAR_14)
{
 u32 VAR_15;
 int VAR_16;

 VAR_15 = (VAR_14 == VAR_8) ?
  VAR_3 : VAR_4;
 FUNC_2(VAR_13, VAR_15, VAR_2);

 FUNC_3(VAR_13->ethsys, VAR_0,
      VAR_1,
      VAR_1);

 VAR_15 = (VAR_14 == VAR_8) ? 250000000 : 500000000;
 VAR_16 = FUNC_0(VAR_13->clks[VAR_5], VAR_15);
 if (VAR_16)
  FUNC_1(VAR_13->dev, "Failed to set trgmii pll: %d\n", VAR_16);

 VAR_15 = (VAR_14 == VAR_8) ?
  VAR_6 : VAR_7;
 FUNC_2(VAR_13, VAR_15, VAR_11);

 VAR_15 = (VAR_14 == VAR_8) ?
  VAR_9 : VAR_10;
 FUNC_2(VAR_13, VAR_15, VAR_12);
}
