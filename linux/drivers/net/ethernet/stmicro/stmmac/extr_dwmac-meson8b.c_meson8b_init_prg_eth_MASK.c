
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct meson8b_dwmac {int phy_mode; int tx_delay_ns; int dev; int rgmii_tx_clk; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,void (*) (void*),int ) ;
 int FUNC_4 (struct meson8b_dwmac*,int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct meson8b_dwmac *VAR_7)
{
 int VAR_8;
 u8 VAR_9 = 0;

 switch (VAR_7->phy_mode) {
 case 132:
 case 130:




  VAR_9 = VAR_7->tx_delay_ns >> 1;


 case 131:
 case 129:

  FUNC_4(VAR_7, VAR_1,
     VAR_2, 0);

  FUNC_4(VAR_7, VAR_1, VAR_3,
     VAR_9 << VAR_4);






  VAR_8 = FUNC_1(VAR_7->rgmii_tx_clk, 125 * 1000 * 1000);
  if (VAR_8) {
   FUNC_2(VAR_7->dev,
    "failed to set RGMII TX clock\n");
   return VAR_8;
  }

  VAR_8 = FUNC_0(VAR_7->rgmii_tx_clk);
  if (VAR_8) {
   FUNC_2(VAR_7->dev,
    "failed to enable the RGMII TX clock\n");
   return VAR_8;
  }

  FUNC_3(VAR_7->dev,
     (void(*)(void *))VAR_6,
     VAR_7->rgmii_tx_clk);
  break;

 case 128:

  FUNC_4(VAR_7, VAR_1,
     VAR_2,
     VAR_2);


  FUNC_4(VAR_7, VAR_1, VAR_3,
     0);

  break;

 default:
  FUNC_2(VAR_7->dev, "unsupported phy-mode %s\n",
   FUNC_5(VAR_7->phy_mode));
  return -VAR_0;
 }


 FUNC_4(VAR_7, VAR_1, VAR_5,
    VAR_5);

 return 0;
}
