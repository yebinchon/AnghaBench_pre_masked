
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int tx_deemph_gen1; int tx_deemph_gen2_3p5db; int tx_deemph_gen2_6db; int tx_swing_full; int tx_swing_low; int iomuxc_gpr; TYPE_1__* drvdata; } ;
struct TYPE_2__ {int variant; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct imx6_pcie*) ;
 int FUNC_1 (struct imx6_pcie*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct imx6_pcie *VAR_13)
{
 switch (VAR_13->drvdata->variant) {
 case 128:




  FUNC_2(VAR_13->iomuxc_gpr,
       FUNC_1(VAR_13),
       VAR_10,
       VAR_10);
  break;
 case 129:
  FUNC_2(VAR_13->iomuxc_gpr, VAR_11,
       VAR_9, 0);
  break;
 case 130:
  FUNC_2(VAR_13->iomuxc_gpr, VAR_11,
       VAR_8,
       VAR_7);

 default:
  FUNC_2(VAR_13->iomuxc_gpr, VAR_11,
       VAR_1, 0 << 10);


  FUNC_2(VAR_13->iomuxc_gpr, VAR_11,
       VAR_0, 9 << 4);

  FUNC_2(VAR_13->iomuxc_gpr, VAR_12,
       VAR_2,
       VAR_13->tx_deemph_gen1 << 0);
  FUNC_2(VAR_13->iomuxc_gpr, VAR_12,
       VAR_3,
       VAR_13->tx_deemph_gen2_3p5db << 6);
  FUNC_2(VAR_13->iomuxc_gpr, VAR_12,
       VAR_4,
       VAR_13->tx_deemph_gen2_6db << 12);
  FUNC_2(VAR_13->iomuxc_gpr, VAR_12,
       VAR_5,
       VAR_13->tx_swing_full << 18);
  FUNC_2(VAR_13->iomuxc_gpr, VAR_12,
       VAR_6,
       VAR_13->tx_swing_low << 25);
  break;
 }

 FUNC_0(VAR_13);
}
